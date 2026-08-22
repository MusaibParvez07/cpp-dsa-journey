#include <iostream>
#include <vector>
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

    int left = 0, right = n - 1;
    long long maxArea = 0;

    while (left < right)
    {
        int width = right - left;
        int height = min(arr[left], arr[right]);

        long long area = 1LL * width * height;
        maxArea = max(maxArea, area);

        if (arr[left] < arr[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << "\nMaximum Water Container Area: " << maxArea << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)