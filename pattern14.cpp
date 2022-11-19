#include<iostream>
using namespace std;
int main(){
	int num=1,i,j;
	cout<<"enter a number :";
	cin>>num;
	char value='A';
	while(i<=num){
		j=1;
		while(j<=i){
			cout<<value;
			value++;
			j++;	
		}
		cout<<endl;
		i++;		
	}
	return 0;
}
