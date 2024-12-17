/* using stack for push(), emplace(), pop(), top(), empty() , size(), empty()*/
#include <bits/stdc++.h>
using namespace std;

void explainStack()
{
    stack<int> st;

    // Push elements into the stack
    st.push(1);          // Stack: 1
    st.push(2);          // Stack: 2, 1
    st.push(3);          // Stack: 3, 2, 1
    st.push(3);          // Stack: 3, 3, 2, 1
    st.emplace(5);       // Stack: 5, 3, 3, 2, 1

    // Top element
    cout << "Top element: " << st.top() << endl; // Prints 5

    // Pop the top element
    st.pop();           // Stack: 3, 3, 2, 1
    cout << "After pop, top element: " << st.top() << endl; // Prints 3

    // Size of the stack
    cout << "Size of stack: " << st.size() << endl; // Prints 4

    // Check if the stack is empty
    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl; // Prints "No"

    // Demonstrate swapping two stacks
    stack<int> st1, st2;
    st1.push(10);
    st1.push(20);       // Stack st1: 20, 10
    st2.push(30);       // Stack st2: 30

    cout << "Before swapping:" << endl;
    cout << "Top of st1: " << st1.top() << endl; // Prints 20
    cout << "Top of st2: " << st2.top() << endl; // Prints 30

    st1.swap(st2); // Swap stacks

    cout << "After swapping:" << endl;
    cout << "Top of st1: " << st1.top() << endl; // Prints 30
    cout << "Top of st2: " << st2.top() << endl; // Prints 20
}

int main()
{
    explainStack();
    return 0;
}
