#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()  {
    vector<int> numVec;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        numVec.push_back(temp);
    }
    long long int bigSum = 0;
    int lastOdd = 0;
    int numOdd = 0;
    sort(numVec.begin(),numVec.end(),greater<int>());
    for (int num : numVec) {
        bigSum += num;
        if (num % 2 == 1)   {
            lastOdd = num;
            numOdd++;
        }
    }
    if (numOdd % 2 == 1)    {
        bigSum -= lastOdd;
    }
    cout << bigSum;
    return 0;
}
    
