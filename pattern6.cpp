#include<iostream>
using namespace std;
int main(){
	int num,i=1;
	cout<<"Enter number ";
	cin>>num;
	while(i<=num){
		int j=1,value=i;
		while(j<=i){
			cout<<value;
			j++;
			value++;
		}cout<<endl;
		i++;
	}
	return 0;
}
