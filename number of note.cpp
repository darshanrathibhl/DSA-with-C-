#include<iostream>
using namespace std;
int main(){
	int amount,Rs100,Rs50,Rs10,Rs1;
	cout<<"enter the amount :";
	cin>>amount;
	switch(1){
		case 1:Rs100=amount/100;
			   cout<<"No of Rs 100 is :"<<Rs100<<endl;
			   amount=amount%100;
		case 2:Rs50=amount/50;
			   cout<<"No of Rs 50 is :"<<Rs50<<endl;
			   amount=amount%50;
		case 3:Rs10=amount/10;
			   cout<<"No of Rs 10 is :"<<Rs10<<endl;
			   amount=amount%10;
		case 4:Rs1=amount/1;
			   cout<<"No of Rs 1 is :"<<Rs1<<endl;
			   amount=amount%1;
	}
	return 0;
}
