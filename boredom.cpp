#include <iostream>

using namespace std;

int main()	{
	long long int occurance[100001];
	long long int maxSols[100001];
	int n;
	cin >> n;
	int temp;
	for (int i=0;i<n;++i)	{
		cin >> temp;
		occurance[temp]++;
	}
	maxSols[0] = 0;
	maxSols[1] = occurance[1];
	for (int i=2;i<100001;++i)	{
		maxSols[i] = max(maxSols[i-1],maxSols[i-2]+occurance[i]*i);
	}
	cout << maxSols[100000];
	return 0;
}
