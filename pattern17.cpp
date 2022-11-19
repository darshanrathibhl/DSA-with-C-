#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	cout<<"Enter number upto which you can print ";
	cin>>num;
	while(i<=num){
		int space =num-i;
		while(space){
			cout<<" ";
			space--;
		}
		j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
