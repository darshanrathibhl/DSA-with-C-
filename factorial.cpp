#include<iostream>
using namespace std;
int factorial(int x){
	int fact=1;
	for(int i=1;i<=x;i++){
		fact=fact*i;
	}
	return fact;
}
int nCr(int x,int y){
	int num=factorial(x);
	int den=factorial(x-y)*factorial(y);
	return num/den;
}
int main(){
	int n,r;
	cout<<"enter the value of n and r :";
	cin>>n>>r;
	cout<<"Ans is :"<<nCr(n,r)<<endl;
	return 0;
}
