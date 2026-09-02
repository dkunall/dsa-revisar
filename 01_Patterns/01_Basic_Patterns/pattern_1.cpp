// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i =0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    cout<<"*";
                }
        }
    return;
}


int main() {
    int n;
    cin>>n;
    print(n)
    return 0;
}
