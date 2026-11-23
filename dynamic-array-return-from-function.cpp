#include <bits/stdc++.h>
using namespace std;

int* fun()
{
    // int a[5]; // As it is in stack memory, it gives Segmentation fault.
    int *a = new int[5]; // Dynamic memory
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int *x = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}