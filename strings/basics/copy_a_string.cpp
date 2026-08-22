#include <iostream>
#include <string>
using namespace std;

int main()
{
    string stra, strb;
    cout << "Enter a String to Copy: ";
    getline(cin, stra);

    strb = stra;
    cout << "Original String: " << stra << endl;
    cout << "Copied String: " << strb << endl;
    return 0;
}
