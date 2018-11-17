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