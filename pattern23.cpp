#include<iostream>
using namespace std;
int main(){
	int num,i=1,j;
	cout<<"enter a number :";
	cin>>num;
	while(i<=num){
		int space=i-1;
		while(space){
			cout<<" ";
			space--;
		}
		j=1;
		int next=i;
		while(j<=num-i+1){
			cout<<next;
		    j++;
		    next++;
		}cout<<endl;
		i++;
	}
	return 0;
}
