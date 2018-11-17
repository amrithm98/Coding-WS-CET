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
