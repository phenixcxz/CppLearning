/*************************************************************************
    > File Name: 虚继承.cpp
    > Author: cxz
    > Mail: phenixcxz@163.com 
    > Created Time: 五  6/19 15:28:24 2020
 ************************************************************************/

#include<iostream>
using namespace std;

// class A{
// };
// class B:virtual A{
// };
// class C:virtual A{
// };
// class D:public B,public C{
// };

class A{
	int a;
	int f;
	int b;

};
class B:virtual A{
	int b;
};
class C: virtual A{
	int c;
};
class E: virtual A{
	int M;
};
class D:virtual B,virtual C,virtual E{
	int d;
	int e;
};

int main(){
	cout << "hello" << endl; 

	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;
	cout << sizeof(D) << endl;
	return 0;

}
