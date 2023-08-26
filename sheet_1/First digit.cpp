#include <iostream>
 
using namespace std;
 
int main()
{
    int num, first_digit;
    cin >> num;
 
    while (num != 0) {
        num /= 10;
        if (num == 0)
            break;
        first_digit = num % 10;
    }
    if (first_digit % 2 == 0)
        cout << "EVEN\n";
    else
        cout << "ODD\n";
 
 
    return 0;
}