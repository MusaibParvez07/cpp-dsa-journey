#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);

    int count = 0;
    for (char ch : str)
    {
        count++;
    }

    cout << "\nLength of String: " << count << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)