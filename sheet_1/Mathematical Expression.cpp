#include <iostream>
#include <string>
using namespace std;
 
int main()
{
     long long a, b, c;
     char s, q;
     cin >> a >> s >> b >> q >> c;
 
     // +   = 43 in ascii
     if (s == 43) {
        if (a + b == c)
            cout << "Yes" << endl;
        else
            cout << a + b << endl;
     }
 
     // -   = 45 in ascii
     else if (s == 45) {
        if (a - b == c)
            cout << "Yes" << endl;
        else
            cout << a - b << endl;
     }
 
     // *   = 42 in ascii
     else if (s == 42) {
        if (a * b == c)
            cout << "Yes" << endl;
        else
            cout << a * b << endl;
     }
 
    return 0;
}