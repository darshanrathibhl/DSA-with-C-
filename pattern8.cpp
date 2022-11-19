#include<iostream>
using namespace std;
int main(){
	int num,i=1;
	char ch=65;
	cout<<"Enter number :";
	cin>>num;
	while(i<=num){
		int j=1;
		while(j<=num){
			cout<<ch;
			j++;
		}ch++;
		cout<<endl;
		i++;
	}
	return 0;
}
