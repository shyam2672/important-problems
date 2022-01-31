#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define vi vector<int> 
#define mod 1e9 + 7
#define INF 1000000000000000003
#define pi pair<int,int>
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define loop(i,a,b) for(auto i=a;i<b;i++)
#define revloop(i,a,b) for(auto i=a;i>=b;i--)
#define en '\n'
int main()
{
IOS
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll ans=0;
int hsb=31;
while(n>1){
while(hsb>0 and ((1<<hsb)&n)==0){
    hsb--;
}
int maxvalue=0;
loop(i,0,hsb+1){
maxvalue+=1<<i;
}
if(maxvalue==n){
n--;
continue;}
ll leastvalue=maxvalue^n;
ans+=(maxvalue)*(n-leastvalue+1);
n=leastvalue-1;
}
cout<<ans;
cout<<en;
}
 return 0;
}