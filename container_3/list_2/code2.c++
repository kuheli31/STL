/* Using dequeue for push_back(), emplace_back(), push_front(), emplace_front(),
 pop_back(), pop_front() */
#include <bits/stdc++.h>
using namespace std;

void explainDeque()
{
    deque<int> dq; // Correct declaration
    dq.push_back(1);      // Adds 1 to the back -> dq: [1]
    dq.emplace_back(2);   // Adds 2 to the back -> dq: [1, 2]
    dq.push_front(4);     // Adds 4 to the front -> dq: [4, 1, 2]
    dq.emplace_front(3);  // Adds 3 to the front -> dq: [3, 4, 1, 2]

    dq.pop_back();        // Removes from the back -> dq: [3, 4, 1]
    dq.pop_front();       // Removes from the front -> dq: [4, 1]

    // Access the back and front elements
    cout << "Back element: " << dq.back() << endl;   // Output: 1
    cout << "Front element: " << dq.front() << endl; // Output: 4
}

int main()
{
    explainDeque();
    return 0;
}
