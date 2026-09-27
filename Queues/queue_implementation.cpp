#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Elements: ";
    cin >> n;

    vector<int> q(n);
    int front = 0;
    int rear = 0;

    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> q[rear];
        rear++;
    }

    cout << "Queue Elements: ";

    for (int i = front; i < rear; i++)
    {
        cout << q[i] << " ";
    }

    cout << endl;

    if (front < rear)
    {
        cout << "Front Element: " << q[front] << endl;
        cout << "Rear Element: " << q[rear - 1] << endl;
    }
    return 0;
}

/*
Enqueue: O(1)
Dequeue: O(1)
Front: O(1)
Rear: O(1)
Space: O(n)
*/