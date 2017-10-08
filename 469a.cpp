#include <iostream>

using namespace std;

int main()	{
	int n,p;
	cin >> n;
	bool passedLevel[n+1];
	for (int i = 0; i <= n; ++i)	{
		passedLevel[i] = false;
	}
	int levelInd;
	int numPassed = 0;
	for (int i = 0; i < 2; ++i)	{
		cin >> p;
		for (int i = 0; i < p; ++i)	{
			cin >> levelInd;
			passedLevel[levelInd] = true;
		}
	}
	for (int i = 1; i <= n; ++i)	{
		if (passedLevel[i] == true)	{
			numPassed++;
		}
	}
	if (numPassed == n)	{
		cout << "I become the guy.";
	} else	{
		cout << "Oh, my keyboard!";
	}
	return 0;
}

