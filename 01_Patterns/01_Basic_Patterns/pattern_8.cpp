// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:

// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:
#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=n;i>=1;i--)
        {
            for(int j=1;j<=n-i;j++)
                {
                    cout<<" ";
                }

            for(int j=1;j<=2*i-1;j++)
                {
                    cout<<"*";
                }
            cout<<endl;
        }
    return;
}

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
