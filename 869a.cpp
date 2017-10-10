#include <iostream>
#include <vector>

using namespace std;

int main()	{
	int n;
	cin >> n;
	int karenNum[n];
	int koyomiNum[n];
	bool inList[4000007]; // it was a memory error... needed at least 2*21+1 spots, that's where i was running into an error
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

