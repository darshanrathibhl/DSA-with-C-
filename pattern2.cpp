#include<iostream>
using namespace std;
int main(){
	int num,i,j;
	cout<<"Enter a number ";
	cin>>num;
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++){
			cout<<num-j+1<<"\t";
		}cout<<endl;
	}
	return 0;
}
