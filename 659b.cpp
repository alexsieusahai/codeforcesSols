#include <iostream>
#include <unordered_map>

using namespace std;

int main()  {
    int n,m;
    cin >> n >> m;
    int bigScore[m][2] = {{0,0}}; // that should set it all to 0
    string bigNames[m][2] = {{"",""}};
    unordered_map<int,int> occurances[m];
    for (int i = 0; i < n; ++i) {
        string name;
        int region, score;
        cin >> name >> region >> score;
        region -= 1;
        occurances[region][score]++;
        // check for second place tie
        if (bigScore[region][0] < score)    {
            // check the next (bigger) one
            if (bigScore[region][1] < score)    {
                int tempScore = bigScore[region][1];
                string tempName = bigNames[region][1];
                bigScore[region][1] = score;
                bigNames[region][1] = name;
                //cout << "set the 1st place to " << name << " with the score " << score << '\n';
                // now lets see who wins the battle for second place
                if (bigScore[region][0] < tempScore)    {
                    bigScore[region][0] = tempScore;
                    bigNames[region][0] = tempName;
                }
            } else  {
                bigScore[region][0] = score;
                bigNames[region][0] = name;
                //cout << "set the 2nd place to " << name << " with the score " << score << '\n';
            }
        } 
    }
    for (int i = 0; i < 2; ++i) {
        int bigScore0 = bigScore[i][0], bigScore1 = bigScore[i][1];
        if ((occurances[i][bigScore0] > 1) | (occurances[i][bigScore1] > 1 ))   {
            cout << '?' << endl;
        } else  {
            cout << bigNames[i][0] << ' ' << bigNames[i][1] << endl;
        }
    }
    return 0;
}
