#include<iostream>
#include<vector>
using namespace std;

vector<int> dp(1000,-1);

int staircase_dp(int n)
{
    if(dp[n] != -1)
        return dp[n];
    
    int result = staircase_dp(n-1) + staircase_dp(n-2) + staircase_dp(n-3);
    dp[n] = result;

    return result;
}

int staircase( int n){

    if(n == 0)
        return 1;

    if(n < 0)
        return 0;

    return staircase(n-1)+staircase(n-2)+staircase(n-3);

}

int main(){

    int n;

    cin >> n;

    cout << staircase(n) << endl;

    return 0;
}