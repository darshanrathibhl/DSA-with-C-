#include<iostream>
using namespace std;
void count(int n){
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
}
int main(){
	int n;
	cout<<"enter a number upto which you can print :";
	cin>>n;
	cout<<"counting is :"<<endl;
	count(n);
	return 0;
}
