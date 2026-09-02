#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Elements in the Array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_set<int> nums;
    for (int x : arr)
    {
        nums.insert(x);
    }

    int longest = 0;

    for (int x : nums)
    {
        if (nums.find(x - 1) == nums.end())
        {
            int current = x;
            int length = 1;

            while (nums.find(current + 1) != nums.end())
            {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    cout << "Longest Consecutive Sequence Length: "
         << longest << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)