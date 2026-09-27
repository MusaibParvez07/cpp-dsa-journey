#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Elements: ";
    cin >> n;

    stack<int> st;
    stack<int> minSt;

    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        st.push(x);

        if (minSt.empty() || x <= minSt.top())
            minSt.push(x);
    }

    cout << "Minimum Element: " << minSt.top() << endl;

    st.pop();

    if (!st.empty())
    {
        cout << "Top Element After Pop: "
             << st.top() << endl;
    }
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)