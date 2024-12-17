/* using queue to push(), emplace(), back(), front(), pop() */
#include <bits/stdc++.h>
using namespace std;

void explainQueue()
{
    queue<int> q;

    // Push elements into the queue
    q.push(1);           // Queue: 1
    q.push(2);           // Queue: 1, 2
    q.emplace(4);        // Queue: 1, 2, 4

    // Modify the last element using back()
    q.back() += 5;       // Queue: 1, 2, 9 (4 + 5 = 9)

    // Access the back and front elements
    cout << "Back element: " << q.back() << endl; // Prints 9
    cout << "Front element before pop: " << q.front() << endl; // Prints 1

    // Remove the front element
    q.pop();             // Queue: 2, 9

    // Access the new front element
    cout << "Front element after pop: " << q.front() << endl; // Prints 2
}

int main()
{
    explainQueue();
    return 0;
}
