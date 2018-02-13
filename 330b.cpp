// try the dp solution

#include <iostream>
#include <unordered_set>

using namespace std;

int main()  {
    int n,m;
    cin >> n >> m;
    unordered_set<int> invalid[n];
    for (int i = 0; i < m; ++i) {
        int city0,city1;
        cin >> city0 >> city1;
        invalid[city0].insert(city1);
        invalid[city1].insert(city0);
    }
    // try all solutions
    
