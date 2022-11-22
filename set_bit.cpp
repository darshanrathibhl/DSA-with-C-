#include<iostream>
using namespace std;
int bit(int x){
	int n=x;
	int bit_n=0;
	while(n!=0){
		if(n&1==1){
			bit_n+=1;
		}
		n=n>>1;
	}
	return (bit_n);
}
int main(){
	int a,b;
	cout<<"Enter the value of a and b :";
	cin>>a>>b;
	cout<<bit(a)+bit(b);
	return 0;
}
