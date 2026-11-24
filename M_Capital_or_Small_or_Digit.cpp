#include <bits/stdc++.h>
using namespace std;

int main(){
    char x ;
    cin >> x;
    

    if(x >= '0' && x <= '9'){
        cout << "IS DIGIT";
    }
    if(x >= 'A' && x <= 'Z'){
        cout << "ALPHA" << "\n" << "IS CAPITAL";

    }
    if(x >= 'a' && x <= 'z'){
        cout << "ALPHA" << "\n" << "IS SMALL";

    }
    return 0;
}