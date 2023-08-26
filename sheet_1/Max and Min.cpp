#include <iostream>
 
using namespace std;
 
int main()
{
    long long x, y, z, maxx, minn;
    cin >> x >> y >> z;
 
    if (x >= y && y >= z) {
        maxx = x;
        minn = z;
    }
    else if (x >= z && z >= y) {
        maxx = x;
        minn = y;
    }
    else if (y >= x && x >= z) {
        maxx = y;
        minn = z;
    }
    else if (y >= z && z >= x) {
        maxx = y;
        minn = x;
    }
    else if (z >= x && x >= y) {
        maxx = z;
        minn = y;
    }
    else if (z >= y && y >= x) {
        maxx = z;
        minn = x;
    }
 
    cout << minn <<  " " << maxx << "\n";
 
    return 0;
}