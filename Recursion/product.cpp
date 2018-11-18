#include <iostream>
using namespace std;


int mult(int a, int b)
{
    if(b == 1)
        return a;

    else    
        return a + mult(a,b-1);
}


int main()
{
    cout << mult(5,6);
}