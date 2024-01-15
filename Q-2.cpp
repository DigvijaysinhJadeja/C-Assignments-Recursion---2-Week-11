#include<iostream>
#include<algorithm>
using namespace std;
int targe(int n,int target,int *arr){
    if(n==-1)return -1;
    if(arr[n-1]==target)return n-1;
    else{
        targe(n-1,target,arr);
    }
}
int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<targe(n,target,arr);
}