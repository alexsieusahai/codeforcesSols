#include <iostream>

using namespace std;

int main()	{
	int n,bigNum = 0;
	cin >> n;
	int citizens[n];
	for (int i = 0; i < n; ++i)	{
		cin >> citizens[i];
		if (citizens[i] > bigNum)	{
			bigNum = citizens[i];
		}
	}
	int pay = 0;
	for (int i = 0; i < n; ++i)	{
		pay += bigNum-citizens[i];
	}
	cout << pay;
	return 0;
}	
