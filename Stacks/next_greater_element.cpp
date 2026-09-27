#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Elements in the Array: ";
    cin >> n;

    vector<int> arr(n);
    vector<int> answer(n);

    cout << "Enter the Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }

        if (st.empty())
            answer[i] = -1;
        else
            answer[i] = st.top();

        st.push(arr[i]);
    }

    cout << "Next Greater Elements: ";

    for (int x : answer)
    {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}

// T(n)= O(n)
// O(n)= O(n)