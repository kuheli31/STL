//iterators in vector using .end
#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
    vector<int> variable = {10, 20, 30, 40, 50}; // Declare and initialize vector

    // Declare iterator and point to the beginning of the vector
    vector<int>::iterator it = variable.begin();

    // Move iterator one step forward
    it++; 

    // Print the element at the new iterator position
    cout << *(it) << " "; // Output: 20

    // Now, safely move the iterator to the end and then add 2 to it
    it = variable.end(); // Points past the last element of the vector

    // This would be out of bounds, so let's move it back within bounds first
    it--;  // Now it points to the last element (50)

    // Add 2 steps back within bounds (moving the iterator back to the third element)
    it = it - 2;  // Move to the 3rd element (30)

    // Print the element at the new iterator position
    cout << *(it) << " "; // Output: 30
}

int main()
{
    explainVector(); // Call the function to test the vector iterator operations
    return 0;        // Indicate successful program execution
}
