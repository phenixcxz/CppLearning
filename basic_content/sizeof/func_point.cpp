/*************************************************************************
	> File Name: func_point.cpp
	> Author: cxz
	> Mail: phenixcxz@163.com 
	> Created Time: 三  6/17 12:47:05 2020
 ************************************************************************/

#include<iostream>
using namespace std;

void (*pFun)(int);

typedef void (*func)(void);

void myfunc(void){
	cout << "hello" << endl;
}

void glFun(int a){
	cout << a<< endl;
}

int main(){
	func pfun = myfunc;
	pfun();
	pFun = glFun;
	(*pFun)(2);
}
