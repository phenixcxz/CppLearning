#include "iostream"
#include"memory"

using namespace std;

//智能指针为模板，必须指定类型
shared_ptr<int> p = make_shared<int>();
shared_ptr<int> p2 = make_shared<int>();        //加括号执行默认初始化
shared_ptr<int> p1 = make_shared<int>(20);

int main(void){
    cout << *p1 <<endl;
    cout << *p2 << endl;
    return 0;
}