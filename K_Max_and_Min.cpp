#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,y,z;
    cin >> x >> y >> z;

    int initial_max =max(x,y);
    int mx = max(initial_max,z);
   

    int initial_min =min(x,y);
    int mn = min(initial_min,z);
    cout << mn << " " << mx;

    return 0;
}