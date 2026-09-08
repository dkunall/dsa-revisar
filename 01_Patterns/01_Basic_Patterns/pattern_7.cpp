// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:

/*
    *
   ***
  *****
 *******
*********
*/


#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=1;i<=5;i++)
        {
            for(int j=i;j<=n-1;j++)
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
