#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Elements: ";
    cin >> n;

    stack<int> st1;
    stack<int> st2;

    cout << "Enter the Elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    while (!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }

    cout << "Queue Elements: ";

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }

    cout << endl;
    return 0;
}

// T(n)= O(1)
// S(n)= O(n)