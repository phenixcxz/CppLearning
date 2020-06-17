/*************************************************************************
	> File Name: union.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 二  6/16 20:12:37 2020
 ************************************************************************/

#include<iostream>
using namespace std;
union myun{
	struct{
		int x;
		int y;
		int z;
	}u;
	int k;
}a;
int main(){

	a.u.x = 4;
	a.u.y = 5;
	a.u.z = 6;
	a.k = 7;
	cout << "x:" << a.u.x <<"  y"<<a.u.y << "  z:" << a.u.z <<"  k:" << a.k << endl;
	//system(“pause”);
	return 0;
}
