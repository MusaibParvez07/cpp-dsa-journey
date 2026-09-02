#include <iostream>
#include <vector>
#include <unordered_map>
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

    int target;
    cout << "Enter Target: ";
    cin >> target;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int required = target - arr[i];

        if (mp.find(required) != mp.end())
        {
            cout << "Pair Found at Indices: "
                 << mp[required] << " and " << i << endl;
            return 0;
        }

        mp[arr[i]] = i;
    }

    cout << "No Pair Found." << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)