#include <iostream>
using namespace std;

void SWAP(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void SWAP2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;
    cin >> a >> b;

    SWAP(a,b);

    cout << "\nAfter Calling SWAP : " << a << " "  << b << endl;

    SWAP2(&a, &b);

    cout << "\nAfter Calling SWAP2 : " << a << " "  << b << endl;

}