#include <iostream>
 
using namespace std;
 
int main()
{
    string fname1, sname1, fname2, sname2;
    cin >> fname1 >> sname1 >> fname2 >> sname2;
 
    if (sname1 == sname2)
        cout << "ARE Brothers";
    else
        cout << "NOT";
 
 
    return 0;
}