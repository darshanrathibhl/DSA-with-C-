#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	cout<<"enter a number";
	cin>>num;
	while(i<=num){
		j=1;
		char start='A'+i-1;
		while(j<=num){
			cout<<start;
			start++;
			j++;			
		}cout<<endl;
		i++;
	}
}
