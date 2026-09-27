#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;

    stack<char> st;

    for (char ch : str)
    {
        st.push(ch);
    }

    cout << "Reversed String: ";

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    cout << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)