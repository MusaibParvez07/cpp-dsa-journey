#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);

    stringstream ss(str);
    string word;
    string result;

    while (ss >> word)
    {
        result = word + " " + result;
    }

    if (!result.empty())
        result.pop_back();

    cout << "Reversed Words: " << result << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)