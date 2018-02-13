#include <iostream>

using namespace std;

int main()  {
    // since it's 10x10 at biggest
    // just straight up implement the solution
    int r,c;
    cin >> r >> c;
    bool strawberry[r][c];
    bool eaten[r][c];
    // read in data
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            char block;
            cin >> block;
            if (block == '.')   {
                strawberry[i][j] = false;
            } else  {
                strawberry[i][j] = true;
                //cout << i << ' ' << j << endl;
            }
            eaten[i][j] = false;
        }
    }
    int eatenBlocks = 0;
    // try every single cell
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            // try a vertical eat
            // so we have to check every single row with the column to see if there's any
            // evil strawberry
            bool vertEat = true;
            // assume we can vertically eat then try to find counter example
            for (int i0 = 0; i0 < r; ++i0) {
                if (strawberry[i0][j])  {
                    vertEat = false;
                }
            }
            if (vertEat)    {
                // eat everything in that row
                for (int i0 = 0; i0 < r; ++i0) {
                    if (!eaten[i0][j])  {
                        eaten[i0][j] = true;
                        eatenBlocks++;
                    }
                }
            }

            // try horizontal eat
            bool horiEat = true;
            for (int j0 = 0; j0 < c; ++j0)  {
                if (strawberry[i][j0])  {
                    horiEat = false;
                }
            }
            if (horiEat)    {
                for (int j0 = 0; j0 < c; ++j0)  {
                    if (!eaten[i][j0])  {
                        eaten[i][j0] = true;
                        eatenBlocks++;
                    }
                }
            }
        }
    }
    // lets look at eaten
    //for (int i = 0; i < r; ++i) {
    //    for (int j = 0; j < c; ++j) {
    //        cout << int(eaten[i][j]);
    //    }
    //    cout << endl;
    //}
    cout << eatenBlocks << endl;
    return 0;
}
                


