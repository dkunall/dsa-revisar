// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:
#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i = 1; i <= n; i++) {

        // Left numbers
        for (int j = 1; j <= i; j++)
            cout << j;

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        // Right numbers
        for (int j = i; j >= 1; j--)
            cout << j;

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
