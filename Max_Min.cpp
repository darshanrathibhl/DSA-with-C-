#include<iostream>
using namespace std;
int get_Max(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int get_Min(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}
int main(){
    int size,i;
    cout<<"enter size";
    cin>>size;
    int num[100];
    for(i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum is :"<<get_Max(num,size)<<endl;
    cout<<"Minimum is :"<<get_Min(num,size);
}