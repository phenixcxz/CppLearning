/*************************************************************************
	> File Name: x的n次方.cpp
	> Author: cxz
	> Mail: phenixcxz@163.com 
	> Created Time: 三  6/17 19:42:54 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int x,int n){
	if(n == 0)
		return 1;
	else
		return x*f(x,n-1);
}
int main(){

	int x,n;
	while(cin >> x >> n){
		cout << f(x,n);
	}
	return 0;
}
