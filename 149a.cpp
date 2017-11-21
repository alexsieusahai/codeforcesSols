#include <iostream>
#include <algorithm>

using namespace std;

int main()  {
    // build a list, sort it using an algorithm 
    int k;
    cin >> k;
    int growArray[12] = {};
    for (int i=0;i<12;i++)  {
        cin >> growArray[i];
    }
    // sort the list 
    sort(growArray,growArray+12);
    int times = 0;
    int i = 11;
    while (k > 0)   {
        if (i == -1)    {
            times = -1;
            break;
        }
        k -= growArray[i];
        i--;
        times++;
    }
    cout << times;
    return 0;
}
    
 

