//Map has duplicate values but unique keys in sorted order similar to set to distinguish them.
#include <bits/stdc++.h>
using namespace std;

void explainMap()
{
    // Declare a map of <int, int>
    map<int, int> mpp;

    // Insert elements into the map
    mpp[1] = 2; // Adds key=1, value=2
    mpp.emplace(3, 1); // Adds key=3, value=1
    mpp.insert({2, 4}); // Adds key=2, value=4

    // Access and modify a map using pair as key
    map<pair<int, int>, int> pairMap;
    pairMap[{2, 3}] = 10; // Adds key={2,3}, value=10

    // Display elements of the map
    cout << "Contents of mpp (map<int, int>):" << endl;
    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl; // Display key-value pairs
    }

    // Access elements
    cout << "Value at key 1: " << mpp[1] << endl; // Outputs: 2
    cout << "Value at key 5 (non-existent): " << mpp[5] << endl; // Inserts key=5, value=0

    // Find operation
    auto it = mpp.find(3); // Finds the key=3
    if (it != mpp.end())
        cout << "Found key 3 with value: " << it->second << endl;
    else
        cout << "Key 3 not found." << endl;

    // Lower bound and upper bound operations
    cout << "Lower bound of key 2:" << endl;
    auto lb = mpp.lower_bound(2); // Iterator pointing to key >= 2
    if (lb != mpp.end())
        cout << lb->first << " -> " << lb->second << endl;

    cout << "Upper bound of key 3:" << endl;
    auto ub = mpp.upper_bound(3); // Iterator pointing to key > 3
    if (ub != mpp.end())
        cout << ub->first << " -> " << ub->second << endl;
    else
        cout << "Upper bound not found." << endl;

    // Map with pair keys
    cout << "Contents of pairMap (map<pair<int, int>, int>):" << endl;
    for (auto it : pairMap)
    {
        cout << "{" << it.first.first << ", " << it.first.second << "} -> " << it.second << endl;
    }
}

int main()
{
    explainMap();
    return 0;
}
