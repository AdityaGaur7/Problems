// author - Aditya gaur //
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
#define max-elem(arr) *max_element(arr.begin(),arr.end())
#define min-elem(arr) *min_element(arr.begin(),arr.end())
#define ll long long 
#define mod 1000000007

void solve(){
   
}

int main(){
    int t;
   cin>>t;
   while(t--){
       int n ;
       cin>>n;
     multiset<int>st;
      for(int i=0;i<2*n;i++){
          int temp;
          cin>>temp;
          st.insert(temp);
      }
      int cnt=0;
      for(auto it:st){
          if(it%2!=0)cnt++;
      }
      if(cnt==n)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
   }
    return 0;
}