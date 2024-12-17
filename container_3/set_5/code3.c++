//Unordered set has only unique elements. only lower_bound and upper_bound does not work.
#include <bits/stdc++.h>
using namespace std;

// Function to demonstrate unordered_set operations
void explainUset()
{
    // Declare an unordered_set of integers
    unordered_set<int> st;

    // 1. Insert elements into the unordered_set
    st.insert(10); // Adds 10
    st.insert(20); // Adds 20
    st.insert(30); // Adds 30
    st.insert(10); // Duplicate, will not be added (only unique elements)

    // Display the unordered_set
    cout << "Elements in unordered_set: ";
    for (auto it : st)
        cout << it << " ";
    cout << endl;

    // 2. Find an element
    auto it = st.find(20); // Returns iterator to 20
    if (it != st.end())
        cout << "Element 20 found in the set." << endl;
    else
        cout << "Element 20 not found in the set." << endl;

    // 3. Erase an element
    st.erase(20); // Removes 20 from the set
    cout << "After erasing 20: ";
    for (auto it : st)
        cout << it << " ";
    cout << endl;

    // 4. Count the occurrence of an element (only 0 or 1 since elements are unique)
    cout << "Count of 30: " << st.count(30) << endl;

    // 5. Insert elements using emplace (faster than insert for single element)
    st.emplace(40); // Adds 40
    cout << "After emplacing 40: ";
    for (auto it : st)
        cout << it << " ";
    cout << endl;

    // 6. Check size of the unordered_set
    cout << "Size of unordered_set: " << st.size() << endl;

    // 7. Clear the unordered_set
    st.clear();
    cout << "Size after clearing: " << st.size() << endl;

    // Note: lower_bound() and upper_bound() are not available in unordered_set
    // as it does not maintain any order of elements.
}

int main()
{
    explainUset();
    return 0;
}
