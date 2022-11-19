#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	cout<<"enter a number ";
	cin>>num;
	while(i<=num){
		j=1;
		char ch='A'+num-i;
		while (j<=i){
			cout<<ch;
			j++;
		    ch++;
		}i++;
		cout<<endl;
	}
	return 0;
}
