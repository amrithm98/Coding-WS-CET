#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}
int main()
{
    int n;
    cin >> n;

    bool p = isPrime(n);

    if(p == true)
        cout << "\nPrime";
    else
        cout << "\nNot Prime";

    return 0;
}