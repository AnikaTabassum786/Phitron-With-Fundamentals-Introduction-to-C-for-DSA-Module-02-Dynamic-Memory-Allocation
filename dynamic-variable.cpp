#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=10;// stack memory

    int *p = new int;// heap memory and stor the added in *p pointer
    *p=100; //dereference, assign digit
    cout << *p << endl;
    return 0;
}