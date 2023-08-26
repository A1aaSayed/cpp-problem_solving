#include <iostream>
 
using namespace std;
 
int main()
{
    long long m, n;
    cin >> m >> n;
    int result;
    result = (m % 10) + (n % 10);
    cout << result;
 
    return 0;
}