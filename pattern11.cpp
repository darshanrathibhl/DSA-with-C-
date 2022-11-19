#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	char ch='A';
	cout<<"Enter a number";
	cin>>num;
	while(i<=num){
		j=1;
		while(j<=num){
			cout<<ch;
			ch=ch+1;
			j++;
		}
		i++;
		cout<<endl;
	}
}
