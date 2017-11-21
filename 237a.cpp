#include <iostream>

using namespace std;

int main()  {
// 24 hours => 24*60 minutes
 int customerAvailable[24*60],bigNum = 0;
 for (int i = 0; i < 24*60; ++i)    {
     customerAvailable[i] = 0;
 }
 int n;
 cin >> n;
 for (int i = 0; i < n; ++i)    {
     int hour,minute;
     cin >> hour >> minute;
     int minutes = 60*hour+minute;
     customerAvailable[minutes] += 1;
     if (customerAvailable[minutes] > bigNum)   {
         bigNum = customerAvailable[minutes];
     }
 }
 cout << bigNum;
 return 0;
}


