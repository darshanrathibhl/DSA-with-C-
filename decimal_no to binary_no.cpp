#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,ans=0,rev=0,i=0;
	cout<<"enter a value of n :";
	cin>>n;
	while(n!=0){
		int bit =n&1;
		ans=(bit*pow(10,i))+ans;
		n=n>>1;
		i++;
	}
	cout<<ans;
	return 0;
}
