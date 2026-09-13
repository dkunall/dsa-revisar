// Problem:
// Approach: brute -> better -> optimal
// Time:  Space:

#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> arr)
{
    int lar=INT_MIN;

    for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>lar)
            {
                lar=arr[i];
            }
        }
    return lar;
}

int main() {
    int p=largest({3,6,8,9,6,5,4,89,56,3,576,5});
    cout<<p;
    return 0;
}
