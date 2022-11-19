#include<iostream>
using namespace std;
int main(){
	int num,i=1;
	cout<<"Upto which you can print ";
	cin>>num;
	while(i<=num){
		int j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
