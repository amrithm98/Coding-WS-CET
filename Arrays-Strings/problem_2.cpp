/*
Code : Merge two sorted arrays

Given two sorted arrays of Size M and N respectively, merge them into a third array such that the third array is also sorted.

Input Format :
 Line 1 : Size of first array i.e. M
 Line 2 : M elements of first array separated by space
 Line 3 : Size of second array i.e. N
 Line 2 : N elements of second array separated by space

Output Format :
M + N integers i.e. elements of third sorted array separated by spaces.

Constraints :
1 <= M, N <= 10^6

Sample Input :
5
1 3 4 7 11
4
2 4 6 13

Sample Output :
1 2 3 4 4 6 7 11 13 
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m,n;
    cin >> m;

    vector<int> A(m);
    for(int i = 0; i < m; i++)
        cin >> A[i];

    cin >> n;
    vector<int> B(n);
    for(int i = 0; i < n; i++)
        cin >> B[i];

    //LOGIC OF THE PROGRAM

    int i = 0, j = 0, k = 0;
    vector<int> merged(n+m);

    while(i < m && j < n)
    {
        if(A[i] <= B[j])
        {
            merged[k] = A[i];
            i = i + 1;
            k = k + 1;
        }
        else
        {
            merged[k] = B[j];
            j = j + 1;
            k = k + 1;
        }
    }

    while(i < m)
    {
        merged[k] = A[i];
        i = i + 1;
        k = k + 1;
    }

    while(j < n)
    {
        merged[k] = B[j];
        j = j + 1;
        k = k + 1;
    }

    for(int z = 0; z < n+m; z++)
        cout << merged[z] << " ";

    return 0;
}
