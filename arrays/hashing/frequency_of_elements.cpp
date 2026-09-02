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
    cout << "Enter the Array Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    for (int x : arr)
    {
        freq[x]++;
    }

    cout << "Frequency of Elements:" << endl;

    for (auto x : freq)
    {
        cout << x.first << " = " << x.second << endl;
    }
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)