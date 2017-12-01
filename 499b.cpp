#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()  {
    int n,m;
    cin >> n >> m;
    map <string,string> translate;
    for (int i = 0; i < m; ++i) {
        string word0,word1;
        cin >> word0 >> word1;
        translate[word0] = word1;
    }
    for (int i = 0; i < n; ++i) {
        string lecWord;
        cin >> lecWord;
        if (translate[lecWord].length() < lecWord.length()) {
            cout << translate[lecWord] << ' ';
        } else  {
            cout << lecWord << ' ';
        }
    }
    return 0;
}

