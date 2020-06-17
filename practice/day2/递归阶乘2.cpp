/*************************************************************************
	> File Name: 递归阶乘2.cpp
	> Author: cxz
	> Mail: phenixcxz@163.com 
	> Created Time: 三  6/17 19:36:53 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int x,int y){
	if(x == y || y == 0)
		return 1;
	else{
		return f(x-1,y-1)+f(x-1,y);
	}
}

int main(){
	int m,n;
	cin >> m;
	cin >> n;
	cout << f(m,n) << endl;
	return 0;
}
