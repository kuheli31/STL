// Set stores everything in sorted order and unique.
/* Using set container by insert(), emplace(), auto, find(), erase(), count(), lower_bound(), upper_bound() */

#include <bits/stdc++.h>
using namespace std;

void explainSet()
{
    set<int> st;

    // Insert elements into the set
    st.insert(1);     // 1
    st.emplace(2);    // 1, 2
    st.insert(2);     // 1, 2 (no duplicates)
    st.insert(4);     // 1, 2, 4
    st.insert(3);     // 1, 2, 3, 4

    cout << "Set after inserting elements: ";
    for (auto x : st) cout << x << " ";
    cout << endl;     // Command: Output: 1 2 3 4

    // Find element 3 in the set
    auto it1 = st.find(3);  
    if (it1 != st.end())
        cout << "Element 3 found in the set.\n"; // Command: Element 3 found in the set.
    else
        cout << "Element 3 not found in the set.\n";

    // Try to find element 6 in the set
    auto it2 = st.find(6);  
    if (it2 != st.end())
        cout << "Element 6 found in the set.\n";
    else
        cout << "Element 6 not found in the set.\n"; // Command: Element 6 not found in the set.

    // Erase element 5 (not present)
    st.erase(5);  // Takes logarithmic time
    cout << "Set after trying to erase 5: ";
    for (auto x : st) cout << x << " ";
    cout << endl;     // Command: Output: 1 2 3 4

    // Count occurrences of element 1
    int cnt = st.count(1);  // Command: Count of 1 in the set
    cout << "Count of 1 in the set: " << cnt << endl;  // Command: Count of 1 in the set: 1

    // Erase element 3 by iterator
    auto it3 = st.find(3); 
    if (it3 != st.end()) {
        st.erase(it3);  // Erases the element pointed by the iterator.
        cout << "Set after erasing 3: ";
        for (auto x : st) cout << x << " ";
        cout << endl;   // Command: Output: 1 2 4
    }

    // Erase range [first, last)
    auto it4 = st.find(2); 
    auto it5 = st.find(4);  
    if (it4 != st.end() && it5 != st.end()) {
        st.erase(it4, it5);  // Erases elements in range [it4, it5)
        cout << "Set after erasing range [2, 4): ";
        for (auto x : st) cout << x << " ";
        cout << endl;   // Command: Output: 1 4
    }

    // Lower bound of element 2
    auto lb = st.lower_bound(2);  
    cout << "Lower bound of 2: " << (lb != st.end() ? to_string(*lb) : "Not found") << endl;  // Command: Lower bound of 2: 2

    // Upper bound of element 2
    auto ub = st.upper_bound(2);  
    cout << "Upper bound of 2: " << (ub != st.end() ? to_string(*ub) : "Not found") << endl;  // Command: Upper bound of 2: 3
}

int main()
{
    explainSet();
    return 0;
}
