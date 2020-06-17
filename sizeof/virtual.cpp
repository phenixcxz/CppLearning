/*************************************************************************
	> File Name: virtual.cpp
	> Author: cxz
	> Mail: phenixcxz@163.com 
	> Created Time: 三  6/17 12:01:00 2020
 ************************************************************************/

#include<iostream>
using namespace std;
class A{
	//char n
	char c;
	int a;
//	virtual void hello();
};
//void A::hello(){
//	cout << "hello" << endl;
//}
//

class B:public A{
	char c;
};

class C:public A{
	long  m;
};
class D{
	A a;
	char c;
};

class E{

};
class F:virtual public E{
	virtual void hello(){
		cout << "hello" << endl;
	}
};
int main(){
	cout << sizeof(A) << endl;
	A a;
	cout << sizeof(a) << endl;

	cout << sizeof(B) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(short)<< endl;
	cout << sizeof(long) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(C) << endl;
	cout << sizeof(D) << endl;
	cout << sizeof(E) << endl;
	cout << sizeof(F) << endl;
}

