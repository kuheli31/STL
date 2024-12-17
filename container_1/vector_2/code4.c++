//how to create a vector by copying another vector and printing its elements.
#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
    // Declare a vector of integers
    vector<int> variable1(5, 20); // Size 5, all elements initialized to 100
    vector<int> variable2(variable1);

    // Print the elements of the vector to verify insertion
    for (int i : variable1) // Loop through each element in the vector
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
