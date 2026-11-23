#include <bits/stdc++.h>
using namespace std;

int *p;

void fun()
{
    int *x = new int; //dynamic
    *x=10; //dereference
    p = x;
    cout << "Fun->" << *p << endl;
}

int main(){
    fun();
    cout << "Main ->" << *p << endl;
    return 0;
}
