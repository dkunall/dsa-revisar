// Problem: Check if an array is sorted
// Approach: Brute -> Better -> Optimal
// Time: O(n)
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> arr)
{
    for(int i = 0; i < arr.size() - 1; i++)
    {
        if(arr[i] > arr[i + 1])
            return false;
    }

    return true;
}

int main()
{
    bool p = is_sorted({1, 2, 3, 4, 67, 90});
    cout << p;

    return 0;
}
