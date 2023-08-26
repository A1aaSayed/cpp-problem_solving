#include <iostream>
#include <string>
using namespace std;
 
int main()
{
     short a, b;
     char s;
     cin >> a >> s >> b;
 
     // <   = 60 in ascii
    if (s == 60) {
        if (a < b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
 
    // =   = 61 in ascii
    else if (s == 61) {
        if (a == b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
      // >   = 62 in ascii
     else if (s == 62) {
        if (a > b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
     }
 
 
    return 0;
}