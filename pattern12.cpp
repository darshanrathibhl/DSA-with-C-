#include<iostream>
using namespace std;
int main(){
	int num,j,i=1;
	cout<<"Enter a num :";
	cin>>num;
	while(i<=num){
		j=1;
		while(j<=num){
			char ch='A'+i+j-2;
			cout<<ch;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
