#include <iostream>
#include <vector>

using namespace std;

int main()	{
	int n;
	cin >> n;
	int karenNum[n];
	int koyomiNum[n];
	bool inList[1000000];
	for (int i = 0; i < n; ++i)	{
		cin >> karenNum[i];
		inList[karenNum[i]] = true;
	}
	for (int i = 0; i < n; ++i)	{
		cin >> koyomiNum[i];
		inList[koyomiNum[i]] = true;
	}
	int numSatisfied = 0;
	for (int i = 0; i < n; ++i)	{
		for (int j = 0; j < n; ++j)	{
			if (inList[karenNum[i]^koyomiNum[j]] == true)	{
				numSatisfied++;
			}
		}
	}
	if (numSatisfied % 2 == 0)	{
		cout << "Karen";
	} else	{
		cout << "Koyomi";
	}
	return 0;
}

