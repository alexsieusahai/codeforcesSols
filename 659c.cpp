#include <iostream>
#include <vector>

using namespace std;

int getMaxSolution(bool toys[],int m,int i,int k,vector<int> v) {
    // take i or ignore i
    // take i
    // only take i if you don't have it to begin with
    cout << "this run is " << m << ' ' << i << ' ' << k << endl;
    cout << "she has this toy: " << toys[i] << endl;
    if (m == 0) {
        cout << "returning " << k << endl;
        return k;
    }
    if (i > m && m > 0) {
        return k;
    }
    if (m < 0 | i > m)  {
        cout << "returning -1 for this run...\n";
        vector<int> nullVec;
        return nullVec; // doesn't work
    }
    if (toys[i])   {
        return getMaxSolution(toys,m,i+1,k,v);
    } else  {
        cout << "trying this m: " << m-i << endl;
        vector<int> v0 = v;
        v0.push_back(m-i);
        return max(getMaxSolution(toys,m-i,i+1,k+1,v0),getMaxSolution(toys,m,i+1,k,v));
    }
}

int main()  {
    int n,m;
    cin >> n >> m;
    bool toys[m+1]; // sets all to 0
    for (int i = 0; i < m+1; ++i)   {
        toys[i] = false;
    }
    for (int i = 1; i <= n; ++i)    {
        int got;
        cin >> got;
        toys[got] = true;
        cout << "got one\n";
    }
    cout << "got past first loop\n";
    vector<int> v;
    int k = getMaxSolution(toys,m,1,0,v);
    cout << k;
    return 0;
}
