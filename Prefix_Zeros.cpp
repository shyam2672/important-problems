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
#define en endl
int main()
{
IOS
int t;
cin>>t;
while(t--){

 ll n,k;
 cin >>n>>k;
string s;
cin>>s;
ll low=0,high=n+1;
while((high-low)>1){
    ll mid=low+(high-low)/2;
    int ops=0;
    for (int i = mid-1; i>=0; i--)
    {
        int req=(ops+s[i]-'0')%10;
        if(req!=0){
            ops+=10-req;
        }

        /* code */
    }
    if(ops<=k)
    low=mid;
    else high=mid;
    
}
cout<<low<<en;
   
}
 return 0;
}

   
        