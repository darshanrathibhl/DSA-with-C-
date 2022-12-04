#include<iostream>
using namespace std;
int printarray(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid] > key){
            end=mid-1;
        }
        else
            start=mid+1;
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int even[6]={20,34,45,56,70,100};
    int odd[5]={12,354,232,34,78};
    int result=printarray(even,6,45);
    cout<<"index is : "<<result<<endl;
    result=printarray(odd,5,12);
    cout<<"index is : "<<result;
    return 0;
}