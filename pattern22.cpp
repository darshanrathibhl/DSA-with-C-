#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	int count=1;
	cout<<"enter a number :";
	cin>>num;
	while(i<=num){
		int space=num-i+1;
		while(space){
			cout<<" ";
			space--;
		}
		j=1;
		while(j<=i){
			cout<<count;
			j++;
			count++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
