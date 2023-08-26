#include <iostream>
 
using namespace std;
 
int main()
{
     long long age;
     cin >> age;
 
     int years = age / 365;
     age = age % 365;
     int months = age / 30;
     int days = age % 30;
     cout << years << " years\n" << months << " months\n" << days << " days\n";
 
 
 
    return 0;
}