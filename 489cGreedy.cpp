// greedy solution to 489c
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()  {
	int m,s;
	cin >> m >> s;
	// build smallest number
	string minNum = "";
	while (m > 0)	{
		for (int digit = 9; digit >= 0; digit--)	{
			if (digit <= s && m > 0)	{
				// what about zeroes?
				if (s == 0 && m > 0)	{
					minNum += "0";
					m--;
				} else	{
					minNum += to_string(digit);
					s -= digit;
					m--;
				}
			}
		}



