#include<iostream>
#include<vector>

using namespace std;

void printPath(int i , int j , int m , int n , vector< pair<int,int> > path){

    if(i == m-1 &&  j == n-1){

        for(int k = 0 ; k < path.size() ; k++){

            cout << "( " << path[k].first << "," << path[k].second << " ) ";

        }

        cout << "( " << i << "," << j << " ) \n";

        return;
    }

    path.push_back({i,j});

    if(j < n-1)
        printPath(i , j+1 , m , n , path);

    if(i < m-1)
        printPath(i+1 , j , m , n , path);


    return;

}

int main(){

    vector< pair<int,int> > path;
    printPath(0,0,3,3,path);

    return 0;
}