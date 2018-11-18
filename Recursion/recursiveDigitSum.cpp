#include<iostream>

using namespace std;


int digitSum(int x)
{
    if(x == 0)
        return 0;
    else
        return (x % 10) + digitSum(x / 10);
}

int main(){

    string s;
    int k;

    cin >> s;
    cin >> k;

    int sum = 0;

    for(int i = 0 ; i < s.size() ; i++){

        sum += s[i]-'0';
    }

    sum = sum*k;

    while(sum >= 10){

        sum = digitSum(sum);
    }

    cout << sum << endl;

    return 0;
}