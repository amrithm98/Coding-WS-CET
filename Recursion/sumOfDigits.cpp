#include <iostream>
using namespace std;


int sumOfDigits(int x)
{
    int sum = 0;
    while(x != 0)
    {
        sum += (x % 10);

        x = x / 10;

    }

    return sum;
}

int sumDigitsRecursive(int n)
{
    if(n == 0)
        return 0;
    else    
        return (n % 10) + sumDigitsRecursive(n / 10);
}

int main()
{
    cout << sumOfDigits(12345) << endl;
    cout << sumDigitsRecursive(12345) << endl;
}