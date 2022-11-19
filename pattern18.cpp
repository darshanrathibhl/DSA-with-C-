#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	cout<<"enter the value of num :";
	cin>>num;
	while(i<=num){
		j=1;
		while(j<=num-i+1){
			cout<<"*";
			j++;
		}cout<<endl;
		i++;
	}
	return 0;
}
