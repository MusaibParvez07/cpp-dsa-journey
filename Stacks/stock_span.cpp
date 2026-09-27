#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Days: ";
    cin >> n;

    vector<int> price(n);
    vector<int> span(n);

    cout << "Enter the Stock Prices: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && price[st.top()] <= price[i])
        {
            st.pop();
        }

        if (st.empty())
            span[i] = i + 1;
        else
            span[i] = i - st.top();

        st.push(i);
    }

    cout << "Stock Span: ";

    for (int x : span)
    {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)