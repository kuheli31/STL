//using vector operations such as insert, pop_back, swap, clear,empty() 
#include <iostream>
#include <vector>
using namespace std;

void explainVector()
{
    // Step 1: Initializing a vector with 2 elements, each with the value 100
    vector<int> variable(2, 100); // variable = {100, 100}

    // Step 2: Insert a single value at the beginning of the vector
    variable.insert(variable.begin(), 300); // variable = {300, 100, 100}

    // Step 3: Declare another vector to copy elements from
    vector<int> copy = {400, 500, 600}; // copy = {400, 500, 600}

    // Step 4: Insert the elements of 'copy' at the second position in 'variable'
    variable.insert(variable.begin() + 1, copy.begin(), copy.end()); 
    // variable = {300, 400, 500, 600, 100, 100}

    // Step 5: Print the size of the vector
    cout << "Size of vector after insertions: " << variable.size() << endl;

    // Step 6: Print the contents of the vector after insertions
    cout << "Contents of vector after insertions: ";
    for (int value : variable)
    {
        cout << value << " ";
    }
    cout << endl;

    // Step 7: Remove the last element using pop_back
    variable.pop_back(); // Removes the last element, variable = {300, 400, 500, 600, 100}

    // Step 8: Print the contents of the vector after pop_back
    cout << "Contents of vector after pop_back: ";
    for (int value : variable)
    {
        cout << value << " ";
    }
    cout << endl;

    // Step 9: Declare two vectors to demonstrate swap
    vector<int> variable1 = {1, 2, 3};  // variable1 = {1, 2, 3}
    vector<int> variable2 = {7, 8, 9};  // variable2 = {7, 8, 9}

    // Step 10: Swap the contents of the two vectors
    variable1.swap(variable2); // variable1 = {7, 8, 9}, variable2 = {1, 2, 3}

    // Step 11: Print the contents of both vectors after swap
    cout << "Contents of variable1 after swap: ";
    for (int value : variable1)
    {
        cout << value << " ";
    }
    cout << endl;

    cout << "Contents of variable2 after swap: ";
    for (int value : variable2)
    {
        cout << value << " ";
    }
    cout << endl;

    // Step 12: Clear the contents of 'variable' to make it empty
    variable.clear(); // variable is now empty

    // Step 13: Check if the vector is empty and print the result
    cout << "Is 'variable' empty after clear()? " << (variable.empty() ? "Yes" : "No") << endl;
}

int main()
{
    // Call the function to demonstrate vector operations
    explainVector();
    return 0; // Indicate successful program execution
}
