#include<iostream>
using namespace std;
int main(){
	int num,i=1,j=1;
	cout<<"enter number :";
	cin>>num;
	while(i<=num){
		int j=1;
		while(j<=num){
			char ch='A'+j-1;
			cout<<ch;
			j++;
		}i++;
		cout<<endl;
	}
	return 0;
}
