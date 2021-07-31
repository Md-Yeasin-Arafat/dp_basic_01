#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx=1e5+123;
int arr[mx];
int dp[mx],k,m;
long long height(int x){
    if(x==k)return 0;
    if(dp[x]!=-1)return dp[x];

    long long tmp1=1e9;
    for(int i=1;i<=m;i++){
    if(x+i<=k)tmp1=min(tmp1,abs(arr[x+i]-arr[x])+height(x+i));
    cout<<x<<"*"<<i<<" ";
    cout<<tmp1<<"   ";
    }
    //if(x+2<=k)tmp2=abs(arr[x+2]-arr[x])+height(x+2);
    //return dp[x]=min(tmp1,tmp2);
    return dp[x]=tmp1;
    //cout<<dp[x]<<endl;
}

int main()
{
    optimize();
    cin>>k>>m;
    for(int i=1;i<=k;i++)cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<height(1)<<endl;


    return 0;
}

// https://atcoder.jp/contests/dp/tasks/dp_b