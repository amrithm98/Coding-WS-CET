#include<iostream>
#include <vector>
using namespace std;

// f(n) = n*f(n-1)
// f(n) = n* n-1 * f(n-2)

int sumArray(vector<int> v ,int n)
{

    if(n == 1)
        return v[0];

    else
        return v[n-1] + sumArray(v , n-1);
}
 
int fact(int n){

    if(n<2){

        return 1;
    }

    return n*fact(n-1);
}



int main(){

    cout << fact(5) << endl;

    vector<int> v = {1,2,3,4,5};

    cout << sumArray(v,5) << endl;
    return 0;
}