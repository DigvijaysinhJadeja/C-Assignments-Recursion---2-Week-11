#include<iostream>
using namespace std;
void reverse(int n,int* arr){
    if(n==0)return;
    cout<<arr[n-1]<<" ";
    reverse(n-1,arr);
}
int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(n,arr);
}