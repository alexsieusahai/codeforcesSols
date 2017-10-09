#include <iostream>
#include <cmath>

using namespace std;

int main()	{
	int n,m;
	cin >> n >> m;
	int moves = ceil(n/2.0);
	moves += (m-moves%m)%m;
	if (moves > n) moves = -1;
	cout << moves;
	return 0;
}


