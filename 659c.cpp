#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()  {
    // try the greedy solution
    // always buy the cheapest toy possible
    int n,m;
    unordered_set<int> toys;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int got;
        cin >> got;
        toys.insert(got);
    }
    vector<int> boughtToys;
    int i  = 1;
    while (m > 0 && i <= m)   {
        if (toys.count(i) == 0) {
            boughtToys.push_back(i);
            m -= i;
        }
        i++;
    }
    cout << boughtToys.size() << endl;
    for (int i = 0; i < boughtToys.size(); ++i) {
        cout << boughtToys[i] << ' ';
    }
    return 0;
}
