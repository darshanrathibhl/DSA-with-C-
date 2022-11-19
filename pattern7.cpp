#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	cout<<"Enter the value ";
	cin>>num;
	while(i<=num){
		j=1;
		while(j<=i){
			cout<<i-j+1;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
