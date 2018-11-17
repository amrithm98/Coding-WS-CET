/*
Code : Check Permutation

Given two strings, check if they are permutations of each other. Return true or false.
Permutation means - length of both the strings should same and should contain same set of characters. Order of characters doesn't matter.
Note : Input strings contain only lowercase english alphabets.

Input format :
Line 1 : String 1
Line 2 : String 2

Sample Input 1 :
abcde
baedc

Sample Output 1 :
true

Sample Input 2 :
abc
cbd

Sample Output 2 :
false
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;

    unordered_map<char, int> countMap;

    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        countMap[c] = countMap[c] + 1;

        cout << "\nMAP STATUS : " << c << " " << countMap[c] << endl;
    }

    for(int i = 0; i < t.size(); i++)
    {
        char c = t[i];
        countMap[c] = countMap[c] - 1;

        cout << "\nMAP STATUS : " << c << " " << countMap[c] << endl;
    }
    bool f = true;

    for(auto it : countMap)
    {
        cout <<"\nFrequency : " << it.first << " " << it.second << endl;
        if(it.second != 0)
        {
            f = false;
            break;
        }
    }

    if(f)
        cout << "\nIs A Permutation";
    else
        cout << "\nNot A Permutation";
}