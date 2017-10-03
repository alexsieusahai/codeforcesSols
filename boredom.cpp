#include <iostream>

using namespace std;

int main()	{
	int occurance[100000];
	int maxSols[100000];
	int n;
	cin >> n;
	int temp;
	for (int i=0;i<n;++i)	{
		cin >> temp;
		occurance[temp]++;
	}
	maxSols[0] = 0;
	maxSols[1] = occurance[1];
	int bigNum = 0;
	for (int i=2;i<100000;++i)	{
		maxSols[i] = max(maxSols[i-1],maxSols[i-2]+occurance[i]*i);
		if (maxSols[i] > bigNum)	{
			bigNum = maxSols[i];
		}
	}
	cout << bigNum;
	return 0;
}
