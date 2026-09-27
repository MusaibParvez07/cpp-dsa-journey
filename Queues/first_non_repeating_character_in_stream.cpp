#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;

    queue<char> q;
    unordered_map<char, int> freq;

    cout << "First Non-Repeating Characters: ";
    for (char ch : str)
    {
        freq[ch]++;
        q.push(ch);

        while (!q.empty() && freq[q.front()] > 1)
        {
            q.pop();
        }

        if (q.empty())
            cout << "# ";
        else
            cout << q.front() << " ";
    }

    cout << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)