#include<bits/stdc++.h>
using namespace std;
// Macros
#define v(v) vector<int>v
#define pb(v,x) v.push_back(x)
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
#define mod 1000000007

void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   string str="";
   
   for (size_t i = 0; i < s.length(); ++i) {
        str += s[i];
        
        while (i + 1 < s.length() && s[i] == s[i + 1]) {
            ++i;
        }
    }
    set<int>set;
bool f = 0;
    for(int i=0;i<str.size();i++){
        if(set.find(str[i])!=set.end()){
            // cout<<"NO"<<endl;
            f = 1;
           
        }
        set.insert(s[i]);
    }
    if(f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}

int main(){
    tc{
        solve();
    }
    return 0;
}