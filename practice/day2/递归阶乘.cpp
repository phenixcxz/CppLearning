/*************************************************************************
	> File Name: 递归阶乘.cpp
	> Author: cxz
	> Mail: phenixcxz@163.com 
	> Created Time: 三  6/17 19:33:29 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int x){
	if(x == 0)
		return 1;
	else{
		return x*f(x-1);
	}
}
int main(){
	int n;
	while(cin >> n){
		cout << f(n) << endl;
	}
	cout << endl;
}
