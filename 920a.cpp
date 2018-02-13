#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

using namespace std;

int main()  {
    int test;
    cin >> test;
    for (int t = 0; t < test; ++t)  {
        int n,m,s=1;
        cin >> n >> m;
        vector<int> toWater = {0};
        unordered_set<int> watered;
        for (int i = 0; i < m; ++i) {
            int in;
            cin >> in;
            toWater.push_back(in);
        }
        int numWatered = 0;
        for (auto i : toWater)  {
            if (i != 0) {
                numWatered++;
                watered.insert(i);
                //cout << "put this in watered: " << i << endl;
            }
        }
        if (numWatered == n)    {
            cout << 1 << endl;
            continue;
        }
        //cout << "size of watered: " << watered.size() << endl;
        toWater.clear();
        while (true)    {
            toWater.clear();
            //cout << "stuff in watered:\n";
            for (int i = 1; i <= n; ++i) {
                if (watered.count(i))   {
                    //cout << i << ' ';
                    toWater.push_back(i);
                }
            }
            //cout << endl;
            for (auto i : toWater)  {
                //cout << i << ' ';
                if (i != n) {
                    watered.insert(i+1);
                }
                if (i-1 != 0)  {
                    watered.insert(i-1);
                }
            }
            //cout << endl;
            //cout << watered.size() << endl;
            //cout << endl;
            s++;
            if (watered.size() == n)   break;
        }
        cout << s << endl;
    }
    return 0;
}
