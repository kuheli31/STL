/*deletion function of vector using erase() method for removing
a range of elements from index 2 (inclusive) to index 4 (exclusive). */
#include <iostream>
#include <vector>
using namespace std;

void explainVector()
{
    vector<int> variable = {10, 20, 30, 40, 50}; // Declare and initialize vector

    // Before deletion
    cout << "Before deletion: ";
    for (int value : variable)
    {
        cout << value << " ";
    }
    cout << endl;

    // Deleting elements from index 2 to 3 (inclusive)
    variable.erase(variable.begin() + 2, variable.begin() + 4);

    // After deletion
    cout << "After deleting elements from index 2 to 3: ";
    for (int value : variable)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    explainVector(); // Call the function to test the vector operations
    return 0;        // Indicate successful program execution
}
