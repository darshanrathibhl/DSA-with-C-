#include<iostream>
using namespace std;
int main(){
	int num,i=2;
	cout<<"enter a number";
	cin>>num;
	while(i<num){
		if(num%i==0){
			cout<<"prime for "<<i<<endl;
		}
		else{
			cout<<"Not a prime no for "<<i<<endl;
		}
		i++;
	}
	return 0;
}
