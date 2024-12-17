//Multimap can store duplicate keys in a sorted order similar to multiset.
#include <bits/stdc++.h>
using namespace std;

// Function to demonstrate multimap operations
void explainMultimap()
{
    // Declare a multimap of <int, int>
    multimap<int, int> mmp;

    // 1. Insert elements into the multimap
    mmp.insert({1, 10}); // Adds key=1, value=10
    mmp.insert({1, 20}); // Adds another value 20 for key=1 (duplicates allowed)
    mmp.insert({2, 30}); // Adds key=2, value=30
    mmp.insert({3, 40}); // Adds key=3, value=40
    mmp.insert({2, 50}); // Adds another value 50 for key=2

    // Display the multimap
    cout << "Contents of multimap:" << endl;
    for (auto it : mmp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // 2. Find all values for a specific key
    cout << "\nValues for key=1:" << endl;
    auto range = mmp.equal_range(1); // Returns range of iterators for key=1
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->second << " ";
    }
    cout << endl;

    // 3. Erase elements by key
    cout << "\nErasing all elements with key=2." << endl;
    mmp.erase(2); // Erases all elements with key=2

    // Display after erasing
    cout << "Contents of multimap after erasing key=2:" << endl;
    for (auto it : mmp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // 4. Insert using emplace (more efficient for single element)
    cout << "\nInserting key=4, value=50 using emplace." << endl;
    mmp.emplace(4, 50);

    // Display the multimap
    cout << "Contents of multimap after emplace:" << endl;
    for (auto it : mmp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // 5. Find operation
    cout << "\nFinding key=3:" << endl;
    auto it = mmp.find(3); // Returns iterator to first occurrence of key=3
    if (it != mmp.end())
    {
        cout << "Found: " << it->first << " -> " << it->second << endl;
    }
    else
    {
        cout << "Key not found." << endl;
    }

    // 6. Lower bound and upper bound
    cout << "\nLower bound of key=3:" << endl;
    auto lb = mmp.lower_bound(3); // Iterator pointing to first key >= 3
    if (lb != mmp.end())
    {
        cout << lb->first << " -> " << lb->second << endl;
    }

    cout << "Upper bound of key=3:" << endl;
    auto ub = mmp.upper_bound(3); // Iterator pointing to first key > 3
    if (ub != mmp.end())
    {
        cout << ub->first << " -> " << ub->second << endl;
    }
    else
    {
        cout << "Upper bound not found." << endl;
    }
}

int main()
{
    explainMultimap();
    return 0;
}
