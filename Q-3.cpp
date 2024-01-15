#include<bits/stdc++.h>
using namespace std;
string countandsay(int n){
    if(n==1){
        return "1";
    }
    string ans = "";
    string smallans = countandsay(n-1);
    for(int i=0;i<smallans.size();){
        int count = 1;
        int j = i+1;
        while(j<smallans.size() && smallans[i]==smallans[j]){
            j++;
            count++;
        }
        ans = ans + to_string(count) + smallans[i];
        i = j;
    }
    return ans;
}
int main (){
    int n;
    cin>>n;
    cout<<countandsay(n);
}