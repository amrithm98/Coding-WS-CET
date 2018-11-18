#include<iostream>

using namespace std;

int gcd(int a , int b){

    if(b == 0)
        return a;
    
    if(a < b)
        return gcd(b,a);

    return gcd(b, a % b);
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << "\nGCD IS : " << gcd(x,y) << endl;
    cout << "\nLCM IS : " << (x*y)/gcd(x,y) << endl;
    return 0;
}