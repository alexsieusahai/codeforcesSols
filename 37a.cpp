#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()  {
    vector<int> blocks;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        blocks.push_back(temp);
    }
    sort(blocks.begin(),blocks.end(),greater<int>());
    int height=0,numTowers=-1,maxHeight=0,lastBlock = 0;
    for (auto num : blocks) {
        if (num != lastBlock)   {
            if (height > maxHeight) {
                maxHeight = height;
            }
            height = 0;
            numTowers++;
        }
        lastBlock = num;
        height++;
    }
    if (height > maxHeight) {
        maxHeight = height;
    }
    numTowers++;
    cout << maxHeight << ' ' << numTowers;
    return 0;
}

