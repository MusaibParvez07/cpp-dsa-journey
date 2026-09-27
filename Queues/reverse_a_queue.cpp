#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Elements: ";
    cin >> n;

    queue<int> q;
    stack<int> st;

    cout << "Enter the Queue Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // Queue → Stack
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    // Stack → Queue
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    cout << "Reversed Queue: ";

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}

// T(n)= O(n)
// S(n)= O(n)