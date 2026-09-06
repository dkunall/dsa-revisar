// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:

12345
1234
123
12
1

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++)
            {
                cout<<j;
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
