#include"iostream"

using namespace std;

enum class A{   //限定作用域的枚举类型
    red,        //默认值从0开始递增
    black,
    green
};

enum B{     //不限定作用域的枚举类型
    red,    //没有默认值
    black,
    green
};

enum C{
    // red,        //错误，B不限定作用域已经使用red，会造成冲突
    red1 = 10,
    black1 = 11,
    green1 = 12
};


enum D : unsigned char{     //指定值类型为unsigned char 
    red2,
    black2,
    green2,
};
//对于限定作用域枚举类型不指定成员类型默认是int型，
//对于不限定作用域枚举类型，不指定成员类型没有默认类型，但是类型足够大容纳枚举值


//前置声明（声明与定义必须匹配）
enum class E;   //限定作用域类型默认数据类型为int可以不指定大小
enum F:unsigned long long ; //不限定作用域没有默认数据类型，必须指定成员大小


int main(){
    B red = red;        //正确，不限定作用域
    // A red1 = red;        //错误,限定作用域
    A red2 = A::red;        //正确

    int i = red;        //正确，不限定作用域可以自动进行类型转换
    cout << i << endl;
    // int i2 = red2;   //错误，限定作用域类型不能自动进行类型转换
    // cout << i2 << endl;
    
    C c1 = red1;
    cout << c1 <<endl;

    return 0;
}