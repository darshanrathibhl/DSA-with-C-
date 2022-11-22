#include<iostream>
using namespace std;
void nextterm(int n){
	int t1=0,t2=1,temp=t1+t2;
	while(temp<=n){
		cout<<temp<<",";
		t1=t2;
		t2=temp;
		temp=t1+t2;
	}
}
int main(){
	int n,t1=0,t2=1;
	cout<<"enter the value :";
	cin>>n;
	cout<<"fibonacci series :"<<t1<<","<<t2<<",";
	nextterm(n);
	return 0;
}
