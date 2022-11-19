#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	cout<<"enter a number :";
	cin>>num;
	while(i<=num){
		j=1;
		while(j<=i){
			char ch='A'+i-1;
			cout<<ch;
			j++;
			}
		cout<<endl;
		i++;
	}
	return 0;
}
