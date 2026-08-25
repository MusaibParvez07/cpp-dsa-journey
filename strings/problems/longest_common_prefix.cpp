#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Words in String: ";
    cin >> n;
    vector<string> words(n);

    cout << "Enter the Words in String: ";
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    string prefix = words[0];
    for (int i = 1; i < n; i++)
    {

        int j = 0;
        while (j < prefix.length() && j < words[i].length() && prefix[j] == words[i][j])
        {
            j++;
        }

        prefix = prefix.substr(0, j);
        if (prefix.empty())
            break;
    }
    cout << "Longest Common Prefix is: " << prefix << endl;
    return 0;
}

// T(n)= O(n*m)
// S(n)= O(m)

// T(n)= O(n*m)
// S(n)= O(m)
