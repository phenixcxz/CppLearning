/*************************************************************************
    > File Name: 虚继承.cpp
    > Author: cxz
    > Mail: phenixcxz@163.com 
    > Created Time: 五  6/19 15:28:24 2020
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
	public:
	int a;
};
class B:public A{
	int b;
};
class C:virtual A{
	int c;
};
class D:public B,public C{
	int d;
};

int main(){
	cout << "hello" << endl;

	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;
	cout << sizeof(D) << endl;

	return 0;

}
