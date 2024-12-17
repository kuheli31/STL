//deletion operation of vector using erase() method
#include <bits/stdc++.h>
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

    // Deleting the second element (index 1)
    variable.erase(variable.begin() + 1);

    // After deletion
    cout << "After deleting second element: ";
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
