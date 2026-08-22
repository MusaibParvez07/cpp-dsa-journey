#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);

    bool visited[256] = {false};
    string result;
    for (char ch : str)
    {
        if (!visited[(unsigned char)ch])
        {
            result += ch;
            visited[(unsigned char)ch] = true;
        }
    }

    cout << "String after removing duplicates: " << result << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)