//iterators in vector using .at , .back , .begin , .end , auto
#include <iostream>
#include <vector>
using namespace std;

void explainVector()
{
    vector<int> variable = {10, 20, 30, 40, 50}; // Declare and initialize vector

    // Using indexing and at()
    cout << "First element (using []): " << variable[0] << endl;
    cout << "First element (using at()): " << variable.at(3) << endl;

    // Using back() to access the last element
    cout << "Last element (using back()): " << variable.back() << endl;

    // Using iterators to traverse the vector
    cout << "Elements (using iterators): ";
    for (auto it = variable.begin(); it != variable.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Using range-based forEach loop
    cout << "Elements (using range-based for loop): ";
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
