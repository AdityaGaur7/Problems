#include<bits/stdc++.h>
using namespace std;
// Macros
#define vecv vector<int>v
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x,y) make_ pair(x,y)
#define vp vector<pair<int,int>>vp
#define sort(a) sort(a.begin(),a.end())
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define all(a) (a.begin()),(a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define print(x) cout<<x<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define tc  int t;cin>>t;while(t--)
#define it(x) for(auto it:x){ cout<<it<<" "; } cout<<endl
#define imax INT_MAX
#define imin INT_MIN
#define ll long long 
#define mod 10e18+7

void solve(){
   long long n,m,a;
   long long x = 10e18;
   cin>>n>>m>>a;
   long long ans1 = (n+a-1)/a;
   long long ans2 = (m+a-1)/a;
   long long ans = ans1*ans2;
   cout<<ans%x;
}

int main(){
    
        solve();
    
    return 0;
}