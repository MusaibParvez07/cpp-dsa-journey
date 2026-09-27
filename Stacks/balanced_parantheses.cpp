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
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (st.empty())
            {
                cout << "Not Balanced." << endl;
                return 0;
            }

            char top = st.top();

            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '['))
            {
                st.pop();
            }
            else
            {
                cout << "Not Balanced." << endl;
                return 0;
            }
        }
    }

    if (st.empty())
        cout << "Balanced." << endl;
    else
        cout << "Not Balanced." << endl;
    return 0;
}

// T(n) = O(n)
// S(n) = O(n)