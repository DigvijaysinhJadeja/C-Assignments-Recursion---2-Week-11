#include<iostream>
#include<vector>
using namespace std;
void sumtriangle(vector<int>&original,int n){
    if(n==0) return ;
    vector<int>ans(n-1);
    for(int i=0;i<n;i++){
        cout<<original[i]<<" ";
        if(i!=0){
            ans[i-1] = original[i-1] + original[i];
        }
    }
    cout<<endl;
    sumtriangle(ans,n-1);
}
int main (){
    vector<int>original = {5,4,3,2,1};
    vector<int>ans;
    sumtriangle(original,5);
}