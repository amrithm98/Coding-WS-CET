#include<iostream>
#include<vector>
using namespace std;

void display_vector(vector<int> a)
{
    for(vector<int>::iterator it = a.begin(); it != a.end(); it++)
        cout<<(*it)<<" ";
    cout<<endl;
}

void print_subsets(vector<int> input, vector<int> output, int k = 0)
{
    if(k == input.size())
    {
        display_vector(output);
        return;
    }
    print_subsets(input, output, k+1);
    output.push_back(input[k]);
    print_subsets(input, output, k+1);
    return;
}

int main(){
    vector<int> temp = {1, 2, 3}, new_temp;
    print_subsets(temp, new_temp);
    return 0;
}