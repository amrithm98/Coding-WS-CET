#include <iostream>
using namespace std;

long long mod_exp(int a, int b, int mod)
{
    if(b == 0)
        return 1;

    long long res = mod_exp(a,b/2,mod);
    
    res= ((res % mod) * (res)%mod) % mod;

    if(b%2 == 1)
        res = (res*a)%mod;

    return res;
    
}
int exp(int a, int b)
{
    if(b == 0)
        return 1;

    int res = exp(a,b/2);
    
    res= (res * res);

    if(b%2 == 1)
        res = res*a;

    return res;

}

int main()
{

    int x,y, mod;
    cin >> x >> y >> mod;

    cout << "\nMod Exp: " << mod_exp(x, y, mod) << endl;
    return 0;
}