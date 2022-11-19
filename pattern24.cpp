#include<iostream>
using namespace std;
int main(){
		int num,i=1,j;
		cout<<"Enter a number :";
		cin>>num;
		while(i<=num){
		// space print kar ne ka logic
		int space=num-i;
		while(space){
			cout<<" ";
			space--;			
		}
		
		//2nd triangle
		j=1;
		while(j<=i){
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;}
		return 0;
}
