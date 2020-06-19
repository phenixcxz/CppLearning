/*************************************************************************
    > File Name: 类static占用.cpp
    > Author: cxz
    > Mail: phenixcxz@163.com 
    > Created Time: 五  6/19 15:40:05 2020
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
	static int a;
};

int A::a = 10;
class B:public A{
	static int b;
};
int B::b = 11;

int main(){

	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
}
