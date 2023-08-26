#include <iostream>
 
using namespace std;
 
int main()
{
    long long x, y, result;
    char ch;
    cin >> x >> ch >> y;
 
    if (ch == 43)
        result = x + y;
    else if (ch == 45)
        result = x - y;
    else if (ch == 42)
        result = x * y;
    else if (ch == 47)
        result = x / y;
 
    cout << result << endl;
 
    return 0;
}