#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    int i;
    for(i=0; i<n;i++){
     cin >> a[i];
    }

    int mx= INT_MIN;

   for(i=0; i<n;i++){
      mx = max(a[i],mx);
    }

   cout << mx;
    
    return 0;
}