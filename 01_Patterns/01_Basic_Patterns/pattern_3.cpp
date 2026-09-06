// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:

1
12
123
1234
12345

    
#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
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
