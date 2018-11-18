#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000000

vector<int> sieve(MAX,1);

void sieve_of_eratosthenes()
{
    sieve[0] = 0;
    sieve[1] = 0;

    for(int i = 2; i*i <= MAX; i++)
    {
        if(sieve[i])
        {
            for(int j = i*i; j <= MAX; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

int main()
{
    sieve_of_eratosthenes();

    int n;
    cin >> n;

    int count = 0;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        int x = arr[i];

        if(sieve[x] == 1)
        {
            count++;
            cout << "\nFound a Prime NUmber : " << x << endl;
        }
    }

    cout << "\nCount of Primes: " << count << endl;
    return 0;
}