// author - Aditya gaur //
#include <bits/stdc++.h>
using namespace std;
// Macros
#define vecv vector<int> v
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x, y) make_ pair(x, y)
#define vp vector<pair<int, int>> vp
#define sort(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define r(i, a, b) for (int i = a; i < b; i++)
#define print(x) cout << x << endl
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define ll long long
#define mod 1000000007
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve()
{
    string s; // ahhellllloou  hlelo
    cin >> s;
    string hello = "hello";
    int c = 0;
   
    int an=0;
    for(auto it :s){
        if(it==hello[c]){
            c++;
        }
        if(c==5){
            cout<<"YES"<<endl;
            return ;
        }
    }
      cout<<"NO"<<endl;
    



}

int main()
{
    solve();
    return 0;
}
