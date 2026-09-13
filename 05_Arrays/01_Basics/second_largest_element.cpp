// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:

#include <bits/stdc++.h>
using namespace std;

int second_largest(vector<int> arr)
{
    int lar=INT_MIN;
    int slar=INT_MIN;

    for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>lar)
            {
                slar=lar;
                lar=arr[i];
            }

            if(arr[i]<lar && arr[i]>slar)
            {
                slar=arr[i];
            }
        }
    return slar;
}

int main() {
    int p=second_largest({3,6,8,9,6,5,4,89,56,3,576,5});
    cout<<p;
    return 0;
}
