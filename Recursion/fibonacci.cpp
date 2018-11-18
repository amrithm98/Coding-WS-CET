#include <iostream>
#include<vector>

using namespace std;

vector<int> dp(100,-1);

int fibonacci(int n)
{
    if(dp[n] != -1){

        return dp[n];
    }

    int result;

    if(n <= 1)
        result = n;
    else
        result = fibonacci(n-1) + fibonacci(n-2);

    dp[n] = result;

    return result;
}

int fibonacci_iterative(int n)
{
    int first = 1;
    int second = 1;

    int x = 3;
    int ans ;

    while(x <= n)
    {
        ans = first + second;
        first = second;
        second = ans;

        x++;
    }

    return ans;
}

int stringToInt(string s){

    int val = 0;

    for(int i = 0 ; i < s.size() ; i++){

        val = (val * 10) + (s[i]-'0');

    }

    return val;
}

int main()
{
    int n;
    cin >> n;

    cout << "\nFibonacci(Iterative) of " << n << " is " << fibonacci_iterative(n) << endl;
    cout << "\nFibonacci of " << n << " is " << fibonacci(n) << endl;

    //cout << stringToInt("12345");
}