#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()  {
    int n,numBlack = 0,numEncrypts = 0;
    vector<int> encrypts;
    cin >> n;
    string line;
    cin >> line;
    int toEncrypt = 0;
    for (char c : line)   {
        if (c == 'W')   {
            encrypts.push_back(numBlack);
            if (numBlack > 0)   {
                numEncrypts++;
            }
            numBlack = 0;
        } else  {
            numBlack++;
        }
    }
    encrypts.push_back(numBlack);
    if (numBlack > 0)   {
        numEncrypts++;
    }
    cout << numEncrypts << '\n';
    for (int i = 0; i < encrypts.size(); ++i)   {
        if (encrypts[i] != 0)   {
            cout << encrypts[i] << ' ';
        }
    }
    return 0;
}
            

