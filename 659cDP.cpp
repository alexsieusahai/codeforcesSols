#include <iostream>
#include <vector>
#include <unordered_set>



using namespace std;

struct soln {
    vector<int> toysBought;
    int k;
};


soln getMaxSolution(unordered_set<int> toys,int m,int i,soln mySol)  {
    // take i or ignore i
    // take i
    // only take i if you don't have it to begin with
    //cout << "she has this toy: " << toys[i] << endl;
    if (m == 0) {
        return mySol;
    }
    if (i > m && m > 0) {
        return mySol;
    }
    if (i > m)  {
        vector<int> nullVec;
        soln emptySol;
        emptySol.toysBought = nullVec;
        emptySol.k = -1;
        return emptySol;
    }
    if (toys.count(i) != 0)   {
        return getMaxSolution(toys,m,i+1,mySol);
    } else  {
        //cout << "trying this m: " << m-i << endl;
        soln mySol1 = mySol;
        mySol1.toysBought.push_back(i);
        mySol1.k++;
        //return max(getMaxSolution(toys,m-i,i+1,mySol1),getMaxSolution(toys,m,i+1,mySol));
        mySol1 = getMaxSolution(toys,m-i,i+1,mySol1);
        soln mySol2 = getMaxSolution(toys,m,i+1,mySol);
        return (mySol1.k < mySol2.k) ? mySol2 : mySol1;
    }
}

int main()  {
    int n,m;
    cin >> n >> m;
    //bool toys[m+1]; // sets all to 0
    // choose to use an unordered set instead
    unordered_set<int> toys;
    for (int i = 1; i <= n; ++i)    {
        int got;
        cin >> got;
        toys.insert(got);
        //cout << "got one\n";
    }
    //cout << "got past first loop\n";
    vector<int> v;
    soln asol;
    asol.k = 0;
    asol.toysBought = v;
    soln correctsol = getMaxSolution(toys,m,1,asol);
    cout << correctsol.k << endl;
    for (int i = 0; i < correctsol.toysBought.size(); ++i)  {
        cout << correctsol.toysBought[i] << ' ';
    }
    return 0;
}
