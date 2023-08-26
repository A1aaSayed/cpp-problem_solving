#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main()
{
    cout << fixed << setprecision(9);
    double r, area, pi = 3.141592653;
    cin >> r;
    area = pi * r * r;
    cout << area;
 
    return 0;
}