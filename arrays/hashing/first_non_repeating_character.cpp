#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;

    unordered_map<char, int> freq;
    for (char ch : str)
    {
        freq[ch]++;
    }

    char answer = '\0';

    for (char ch : str)
    {
        if (freq[ch] == 1)
        {
            answer = ch;
            break;
        }
    }

    if (answer != '\0')
        cout << "First Non-Repeating Character: " << answer << endl;
    else
        cout << "No Non-Repeating Character." << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)