//using vector to print multiple same elements
#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
    // Declare a vector of integers
    vector<int> variable(5, 100); // Size 5, all elements initialized to 100

    // Print the elements of the vector to verify insertion
    for (int i : variable) // Loop through each element in the vector
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
