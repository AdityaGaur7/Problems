#include<bits/stdc++.h>

using namespace std;


int main() {
    
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      int mxcnt=1,cnt=1;
      for(int i=0;i<n-1;i++){
          if(a[i]<=a[i+1])cnt++;
          else cnt=1;
          mxcnt = max(mxcnt,cnt);
      }
    cout<<mxcnt;

    return 0;
}
