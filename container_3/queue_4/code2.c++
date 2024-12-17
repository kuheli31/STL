/* using priority queue to push(), emplace(), back(), front(), pop() in minimum and maximum heap*/
#include <bits/stdc++.h>
using namespace std;

void priorityQueue()
{
    // Max-Heap (default behavior)
    priority_queue<int> pq;

    // Push elements into the max-heap
    pq.push(5);           // Queue: 5
    pq.push(2);           // Queue: 5, 2
    pq.push(8);           // Queue: 8, 5, 2
    pq.emplace(10);       // Queue: 10, 8, 5, 2

    cout << "Max-Heap: Top element after pushes: " << pq.top() << endl; // Prints 10
    pq.pop();                 // Queue after pop: 8, 5, 2
    cout << "Max-Heap: Top element after one pop: " << pq.top() << endl; // Prints 8

    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(5);        // Queue: 5
    minHeap.push(2);        // Queue: 2, 5
    minHeap.push(8);        // Queue: 2, 5, 8
    minHeap.emplace(10);    // Queue: 2, 5, 8, 10

    cout << "Min-Heap: Top element after pushes: " << minHeap.top() << endl; // Prints 2

    // Max-Heap example with another instance
    priority_queue<int> maxHeap;

    maxHeap.push(7);        // Queue: 7
    maxHeap.push(3);        // Queue: 7, 3
    maxHeap.push(9);        // Queue: 9, 7, 3

    cout << "Max-Heap (another instance): Top element after pushes: " << maxHeap.top() << endl; // Prints 9
}

int main()
{
    cout << "Priority Queue Demonstration\n";
    priorityQueue();
    return 0;
}
