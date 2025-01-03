//Unordered Map has unique keys but not sorted.
#include <iostream>
#include <unordered_map>
using namespace std;

// Function to explain unordered_map and perform various operations
void explainUnorderedMap() {
    // Step 1: Declare an unordered_map
    unordered_map<string, int> umap;

    // Step 2: Insert key-value pairs into the unordered_map
    umap["Apple"] = 100;  // Adds Apple with value 100
    umap["Banana"] = 50;  // Adds Banana with value 50
    umap["Cherry"] = 200; // Adds Cherry with value 200
    cout << "Initial unordered_map contents:" << endl;
    for (auto it : umap) {
        cout << it.first << " -> " << it.second << endl;
    }
    // Output: (order may vary)
    // Initial unordered_map contents:
    // Apple -> 100
    // Banana -> 50
    // Cherry -> 200

    // Step 3: Access an element using its key
    cout << "\nAccessing value for key 'Apple': " << umap["Apple"] << endl;
    // Output: Accessing value for key 'Apple': 100

    // Step 4: Modify the value of an existing key
    umap["Banana"] += 20; // Increment value of Banana by 20
    cout << "Modified value for 'Banana': " << umap["Banana"] << endl;
    // Output: Modified value for 'Banana': 70

    // Step 5: Check if a key exists in the unordered_map
    string key = "Mango";
    if (umap.find(key) != umap.end()) {
        cout << key << " is present in the unordered_map." << endl;
    } else {
        cout << key << " is NOT present in the unordered_map." << endl;
    }
    // Output: Mango is NOT present in the unordered_map.

    // Step 6: Add a new key-value pair
    umap["Mango"] = 150; // Adds Mango with value 150
    cout << "\nAfter adding 'Mango':" << endl;
    for (auto it : umap) {
        cout << it.first << " -> " << it.second << endl;
    }
    // Output: (order may vary)
    // After adding 'Mango':
    // Apple -> 100
    // Banana -> 70
    // Mango -> 150
    // Cherry -> 200

    // Step 7: Erase a key from the unordered_map
    umap.erase("Cherry"); // Removes Cherry
    cout << "\nAfter erasing 'Cherry':" << endl;
    for (auto it : umap) {
        cout << it.first << " -> " << it.second << endl;
    }
    // Output: (order may vary)
    // After erasing 'Cherry':
    // Apple -> 100
    // Banana -> 70
    // Mango -> 150

    // Step 8: Iterate using an iterator
    cout << "\nUsing iterator to traverse the unordered_map:" << endl;
    for (auto it = umap.begin(); it != umap.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }
    // Output: (order may vary)
    // Using iterator to traverse the unordered_map:
    // Apple -> 100
    // Banana -> 70
    // Mango -> 150

    // Step 9: Get the size of the unordered_map
    cout << "\nSize of unordered_map: " << umap.size() << endl;
    // Output: Size of unordered_map: 3

    // Step 10: Clear the unordered_map
    umap.clear(); // Removes all elements
    cout << "After clearing, size of unordered_map: " << umap.size() << endl;
    // Output: After clearing, size of unordered_map: 0
}

// Main function
int main() {
    explainUnorderedMap();
    return 0;
}
