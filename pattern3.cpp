#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the value ";
	cin>>num;
	
	int i=1;
	int count=1;
	while(i<=num){
			int j=1;
			while(j<=num){
				cout<<count;
				j++;
				count++;
			}
			i++;
			cout<<endl;
		}
	return 0;
}
