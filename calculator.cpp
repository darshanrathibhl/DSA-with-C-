#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the value of a :";
	cin>>a;
	cout<<"Enter the value of b :";
	cin>>b;
	char ch;
	cout<<"enter the operation :";
	cin>>ch;
	switch(ch){
		case'+':cout<<"Addition is :"<<a+b;
				break;
		case'-':cout<<"Subtraction is :"<<a-b;
				break;
		case'*':cout<<"Multiplication is :"<<a*b;
				break;
		case'/':cout<<"Division is :"<<a/b;
				break;
		case'%':cout<<"Modulas is :"<<a%b;
				break;
		default:cout<<"operation does not match.....";
	}
	return 0;
}
