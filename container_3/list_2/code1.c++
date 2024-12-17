/* Using insertion for push_back(), emplace_back(), push_front(), emplace_front() in list */
#include <bits/stdc++.h>
using namespace std;

void explainList()
{
    // Step 1: Declare an empty list of integers
    list<int> ls;

    // Step 2: Add elements at the back using push_back
    ls.push_back(2); // List: 2

    // Step 3: Add elements at the back using emplace_back
    ls.emplace_back(4); // List: 2, 4

    // Step 4: Add elements at the front using push_front
    ls.push_front(5); // List: 5, 2, 4

    // Step 5: Add elements at the front using emplace_front
    ls.emplace_front(1); // List: 1, 5, 2, 4

    // Step 6: Print the contents of the list
    cout << "Contents of the list: ";
    for (int value : ls)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    explainList(); // Call the function to demonstrate list operations
    return 0;      // Indicate successful program execution
}
