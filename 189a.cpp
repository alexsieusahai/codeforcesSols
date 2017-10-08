#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp(int numCuts, long long int n, int cutChoices[])	{
	if (n == 0)	{
		return numCuts;
	}
	if (n <= 0)	{
		return -1;
	}
	int ansArray[3];
	for (int i = 0; i < 3; ++i)	{
		if (n%cutChoices[i] == 0)	{
			ansArray[i] = numCuts + n/cutChoices[i];
		} else {
		ansArray[i] = dp(numCuts+(n%cutChoices[i]),n-cutChoices[i]*(n%cutChoices[i]),cutChoices);
		}
	}
	cout << n << endl;
	return max(max(ansArray[0],ansArray[1]),ansArray[2]);
}

int main()	{
	long long int n;
	cin >> n;
	int cutChoices[3];
	for (int i = 0; i < 3; ++i)	{
		cin >> cutChoices[i];
	}
	cout << dp(0,n,cutChoices);
	return 0;
}
	
