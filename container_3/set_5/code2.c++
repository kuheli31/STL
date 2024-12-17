/* Demonstrating the use of multiset container with operations like insert(), emplace(), 
   auto keyword, find(), erase(), count(), lower_bound(), and upper_bound() */
#include <bits/stdc++.h>
using namespace std;

void explainMultiset()
{
    multiset<int> ms;

    // Insert elements
    ms.insert(1); // 1
    ms.insert(1); // 1, 1
    ms.insert(1); // 1, 1, 1

    // Erase all occurrences of 1
    ms.erase(1); // Now ms is empty

    // Reinsert elements for further operations
    ms.insert(1); // 1
    ms.insert(2); // 1, 2
    ms.insert(2); // 1, 2, 2
    ms.insert(3); // 1, 2, 2, 3

    // Count occurrences of 2
    int cnt = ms.count(2); // cnt = 2
    cout << "Count of 2: " << cnt << endl;

    // Erase a single occurrence of 2
    auto it = ms.find(2); // Find an iterator to the first 2
    if (it != ms.end())
        ms.erase(it); // Removes only the first occurrence of 2

    // Erase a range of elements (first and second 2)
    auto it_start = ms.find(2); // Iterator to the first occurrence of 2
    auto it_end = std::next(it_start, 1); // One element ahead
    if (it_start != ms.end())
        ms.erase(it_start, it_end); // Removes the range [it_start, it_end)

    // Print the multiset
    cout << "Multiset elements: ";
    for (int x : ms)
        cout << x << " ";
    cout << endl;
}

int main()
{
    explainMultiset();
    return 0;
}
