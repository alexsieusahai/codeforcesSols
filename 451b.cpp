#include <iostream>

using namespace std;

int main()  {
    // lets reword the question
    // is there a portion of the array that's strictly descending, then a portion of the array that's strictly ascending?
    
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // walk through the entire array, and wait for it to start descending
    int descendStart = -1, descendEnd = -1,smallNum = a[0];
    for (int i = 1; i < n; ++i) {
        // remember that the entire array has to be ascending except for one part
        if (a[i] < a[i-1])  {   // the array is descending
            if (descendStart == -1) {
                descendStart = i-1; //since we are moving one step farther
                while(a[i] < a[i-1] && i < n) { 
                    i++;
                }
                i -= 1; //since we found a contradiction to the above statement or we hit the  end
                descendEnd = i;
            }
        } else  {
            if (a[i] < smallNum)    {
                // contradiction
                cout << "no\n";
                return 0;
            }
            smallNum = a[i];
        }
    }
    cout << "yes\n";
    if (descendStart == -1) {
        descendStart = descendEnd = 0;
    }
    cout << descendStart+1 << ' ' << descendEnd+1 << endl; // indexing starts at 1 in the question 
    return 0;
}

