#include <iostream>
#include <algorithm>

using namespace std;

int binaryFuzzy(int a[], int low, int high, int max,int length)    {
    int median = low + (high-low)/2;
    //cout << low << ' ' << high << endl;

    if (median == 0)    {
        if (a[median] == max)   {
            return 0;
        } else  {
            return -1;
        }
    }

    if (a[median] == max)   {
        return median;
    }
    if (a[median+1] == max)   {
        return median+1;
    }
    if (median > 0) {
        if (a[median-1] < max && a[median] > max)   {
            return median;
        }
    }
    if (a[median] < max)    {
        return binaryFuzzy(a,median,high,max,length);
    }
    if (a[median] > max)    {
        return binaryFuzzy(a,low,median,max,length);
    }
}


int main()  {
    int n,q;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    } 
    sort(x,x+n); // lowest to highest
    int stream;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> stream;
        cout << binaryFuzzy(x,0,n-1,stream,n)+1 << endl;
    }
    return 0;
}
    
