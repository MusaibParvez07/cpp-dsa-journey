#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter Queue Size: ";
    cin >> size;

    vector<int> q(size);
    int front = -1;
    int rear = -1;

    auto enqueue = [&](int x)
    {
        if ((rear + 1) % size == front)
        {
            cout << "Queue is Full." << endl;
            return;
        }

        if (front == -1)
        {
            front = 0;
        }

        rear = (rear + 1) % size;
        q[rear] = x;
    };

    auto dequeue = [&]()
    {
        if (front == -1)
        {
            cout << "Queue is Empty." << endl;
            return;
        }

        cout << "Removed: " << q[front] << endl;

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    };

    int n;

    cout << "Enter number of Elements to Insert: ";
    cin >> n;

    cout << "Enter the Elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        enqueue(x);
    }

    cout << "Queue Elements: ";

    if (front != -1)
    {
        int i = front;

        while (true)
        {
            cout << q[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % size;
        }
    }

    cout << endl;

    dequeue();

    cout << "Queue After Dequeue: ";

    if (front != -1)
    {
        int i = front;

        while (true)
        {
            cout << q[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % size;
        }
    }

    cout << endl;
    return 0;
}

/* | Operation |     Time |
   | --------- | -------- |
   | Enqueue   |     O(1) |
   | Dequeue   |     O(1) |
   | Front     |     O(1) |
   | Space     |     O(n) |
*/
