#include <iostream>
using namespace std;

int mod_exp(int a, int b, int mod)
{

    return 0;
}
int exp(int a, int b)
{
    if(b == 0)
        return 1;

    int res = (res * res);

    if(b%2 == 1)
        res = res*a;

    return res;

}

int main()
{

    cout << exp(2,1000000);
    return 0;
}