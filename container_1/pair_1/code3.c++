//Learning pair of array elements in containers of STL
#include <bits/stdc++.h> // For competitive programming convenience
using namespace std;     // Use the standard namespace

void printPair()
{
    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;
}

int main() 
{
    printPair(); // Call the function to test
    return 0;
}