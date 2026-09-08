// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:

/*
*
**
***
****
*****
****
***
**
*
*/    
#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
