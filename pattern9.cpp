#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	cout<<"enter number :";
	cin>>num;
	while(i<=num){
		j=1;
		while(j<=num){
			char ch='A'+i-1;
			cout<<ch;
			j++;
		}i++;
		cout<<endl;
	}
	return 0;
}
