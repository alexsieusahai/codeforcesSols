// greedy solution to 489c
//
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()  {
	int m,s;
	cin >> m >> s;
	int bigS = s, bigM = m; // catching for later use
	// build smallest number
	string minNum = "";
	// build the cases where it's impossible
	if (s > 9*m || (m > 1 && s == 0))	{
		cout << "-1 -1";
		return 0;
	}
	// assuming now that it's possible:
	while (m > 0)	{
		if (s <= 9 && m > 1)	{
			minNum += to_string(s-1);
			m--;
			while (m > 1)	{
				minNum += "0";
				m--;
			}
			minNum += "1";
			break;
		}
		for (int digit = 9; digit >= 0; digit--)	{
			if (digit <= s)	{
				minNum += to_string(digit);
				s -= digit;
				m--;
				break;
			}
		}
	}
	reverse(minNum.begin(),minNum.end());
	// now to catch the maximum case
	string bigNum = "";
	m = bigM;
	s = bigS;
	while (m > 0)	{
		for (int digit = 9; digit >= 0; --digit)	{
			if (digit <= s)	{
				bigNum += to_string(digit);
				s -= digit;
				m--;
				break;
			}
		}
	}
	cout << minNum << ' ' << bigNum;
	return 0;
}


