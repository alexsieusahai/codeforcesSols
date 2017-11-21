#include <iostream>
#include <vector>

using namespace std;

int main()  {
    int n,m,globalWinner=1,mostGlobalVotes = 0; // if no one votes, candidate 1 wins
    cin >> n >> m;
    int cityWins[n+1] = {0}; // c11++
    for (int t = 0; t < m; ++t) {
        int mostVotes = 0;
        int winner = 1; // 1 wins by default in the edge case
        int vote;
        for (int i = 1; i <= n; ++i) {
            cin >> vote;
            if (vote == 0)  {
                continue;
            }
            if (vote > mostVotes)   {
                winner = i;
                mostVotes = vote;
            }
            if (vote == mostVotes)  {
                winner = min(i,winner);
            }
        }
        cityWins[winner]++;
        if (cityWins[winner] > mostGlobalVotes) {
            globalWinner = winner;
            mostGlobalVotes = cityWins[winner];
        }
        if (cityWins[winner] == mostGlobalVotes)    {
            globalWinner = min(globalWinner,winner);
        }
    }
    cout << globalWinner;
    return 0;
}




