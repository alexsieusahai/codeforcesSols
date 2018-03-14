#include <iostream>

using namespace std;

int main()  {
    int R,C;
    cin >> R >> C;
    char board[R][C];
    for (int j = 0; j < R; ++j)	{
	for (int i = 0; i < C; ++i) {
	    cin >> board[j][i];
	}
    }
    for (int j = 0; j < R; ++j)	{
	for (int i = 0; i < C; ++i) {
	    if (board[j][i] == 'W') {
		if ((board[j-1][i] == 'S' and j-1 > 0) or
			(board[j+1][i] == 'S' and j+1 < R) or
			(board[j][i-1] == 'S' and i-1 > 0) or
			(board[j][i+1] == 'S' and i+1 < C)) {
		    cout << "No";
		    return 0;
		}
	    }
	    if (board[j][i] == '.') board[j][i] = 'D';
	}
    }
    cout << "Yes\n";
    for (int j = 0; j < R; ++j)	{
	for (int i = 0; i < C; ++i) {
	    cout << board[j][i];
	}
	cout << endl;
    }
    return 0;
}
