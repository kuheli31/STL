//Learning pair of 3 elements in containers of STL
#include <bits/stdc++.h> // For competitive programming convenience
using namespace std;     // Use the standard namespace

void printPair()
{
    pair<int,pair<int,int>>p={1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
}
int main() 
{
    printPair(); // Call the function to test
    return 0;
}