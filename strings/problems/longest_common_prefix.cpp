#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> words = {"flower", "flow", "flight"};

    string prefix = words[0];
    for (int i = 1; i < words.size(); i++)
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

    cout << "Longest Common Prefix: " << prefix << endl;
    return 0;
}

// T(n)= O(n*m)
// S(n)= O(m)