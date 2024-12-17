//Using vector to insert element by pushing elements
#include <bits/stdc++.h> // Includes all standard library headers for competitive programming
using namespace std;     // Allows use of standard library objects without prefixing with std::

void explainVector()
{
    // Declare a vector of integers
    vector<int> variable; 

    // Insert an element into the vector using push_back
    variable.push_back(1); 

    // Print the elements of the vector to verify insertion
    for (int i : variable) // Loop through each element in the vector using a range-based for loop
    {
        cout << i << " "; // Output the element
    }
    cout << endl; // Add a newline for better readability
}

int main()
{
    explainVector(); // Call the function to test the vector operations
    return 0;        // Indicate successful program execution
}
