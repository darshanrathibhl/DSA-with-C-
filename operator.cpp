#include<iostream>
using namespace std;
int main(){
	int a=4,b=6;
	cout<<"a and b ka and "<<(a&b)<<endl;
	cout<<"a and b ka or "<<(a|b)<<endl;
	cout<<"a and b ka not "<<~a<<endl;
	cout<<"a and b ka xor "<<(a^b)<<endl;
	
	cout<<(17>>1)<<endl;		//divide by two
	cout<<(17>>2)<<endl;		//divide by two*two
	cout<<(19<<1)<<endl;		//multiply by two
	cout<<(21<<2)<<endl;		//multiply by two*two
	return 0;
}
