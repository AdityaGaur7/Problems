
#include<bits/stdc++.h>
using namespace std;

#define v vector<int>v
#define vpb(x) v.push_back(x)
#define mp(x,y) make_ pair(x,y)
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define tc  int t;cin>>t;while(t--)
#define ll long long 
#define lwr   transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(),arr.end())
#define mini(arr) *min_element(arr.begin(),arr.end())
#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))
void solve(){

ll t;
cin>>t;
while(t--){
   
int n;cin>>n;
   string s;
   cin>>s;

int i = 0;
int cnt = 0;
vector<char>aa;
while(i<n){
   if((s[i+1]=='*'&& s[i+2]=='*') || (s[i+1]=='.' && s[i+2]=='*')){
    break;
    aa.push_back(s[i]);
    i++;
   }
    
    for(auto it:aa){
        cout<<it;
    }
    cout<<endl;



} 


}  
}

int main(){
  solve();
    return 0;
 }


   

