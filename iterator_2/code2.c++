//iterators in vector using .rend and .rbegin
#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
    vector<int> variable = {10, 20, 30, 40, 50}; // Declare and initialize vector

    // Declare reverse iterators and point to the last element
    vector<int>::reverse_iterator it = variable.rbegin();
    vector<int>::reverse_iterator it_end = variable.rend();

    // Loop through the vector using reverse iterators and print elements
    for (it; it != it_end; ++it)
    {
        cout << *it << " "; // Dereference to get the value
    }
    cout << endl; // Print newline for readability
}

int main()
{
    explainVector(); // Call the function to test the vector iterator operations
    return 0;        // Indicate successful program execution
}
