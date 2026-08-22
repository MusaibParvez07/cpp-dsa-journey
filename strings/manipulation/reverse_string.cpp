#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String to Reverse: ";
    getline(cin, str);

    int left = 0, right = str.length() - 1;
    while (left < right)
    {
        swap(str[left], str[right]);
        left++;
        right--;
    }

    cout << "\nReversed String: " << str << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)