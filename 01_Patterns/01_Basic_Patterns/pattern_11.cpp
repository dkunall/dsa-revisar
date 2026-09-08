// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:


/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 1; i <= n; i++) {
        int start = (i % 2 == 0) ? 0 : 1;

        for (int j = 1; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }

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
