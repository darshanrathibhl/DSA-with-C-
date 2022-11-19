#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	cout<<"enter a num :";
	cin>>num;
	while(i<=num){
		j=1;
		int value=num-i+1;
		while(j<=value){
			cout<<j<<" ";
			j++;
		}
		int star=2*(i-1);
		while(star){
			cout<<"* ";
			star--;
		}
		int k=num-i+1;
		while(k>=1){
			cout<<k<<" ";
			k--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
