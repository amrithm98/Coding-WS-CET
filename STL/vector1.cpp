#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<string>
#include<map>
#include<algorithm>

#include<unordered_set>
#include<unordered_map>


struct interval{

    int start , end;

    interval(int a , int b){

        start = a;
        end = b;
    }
};

bool compare(interval A , interval B){

    return A.start < B.start;
}
using namespace std;

int main(){

    vector<int> v = {1,2,3};

    cout << v[0] << endl;

    v.push_back(5);

    cout << v[3] << endl;

    cout << "size :" << v.size() << endl;

    vector<int>::iterator ptr;

    for(ptr = v.begin() ; ptr != v.end() ; ptr = next(ptr,1)){

        cout << *ptr << " " ;
    }

    cout << endl;
    
    set<char> s = {'z' , 'l' , 'd' , 'a'};

    unordered_set<char> su = {'z' , 'l' , 'd' , 'a'};

    for(set<char>::iterator it = s.begin(); it != s.end() ; it++){

        cout << *it << " ";
    } 
    cout << endl;
    for(unordered_set<char>::iterator it = su.begin(); it != su.end() ; it++){

        cout << *it << " ";
    } 

    if(s.find('d') != s.end() ){

        cout << "\nfound\n";
    }

    if(s.find('z') != s.end())
        cout << "found z \n";

    s.erase('d');

    queue<int> q;

    q.push(6);

    cout<< q.front() << endl;

    q.pop();

    stack<string> stk;

    stk.push("string");

    cout << stk.top() << endl;

    pair<int,char> p = {4,'4'};

    cout << p.first << " " << p.second << endl;


    map<char, string> mp;

    mp['6'] = "six";

    cout << "mp['6']  :" <<  mp['6'] << endl;

    vector<int> v1 = {9 , 8 , 7 , 6 , 9 , 6 ,2};

    sort(v1.begin() , v1.end() , greater<int> ());

    for(auto it = v1.begin() ; it != v1.end() ; it++){

        cout << *it << " ";
    }

    vector< interval > I;

    I.push_back(interval(1,2));
    I.push_back(interval(4,6));
    I.push_back(interval(2,5));


    sort(I.begin() , I.end() , compare);

    cout << endl;
    cout << I[0].start << " " << I[0].end << endl;
    cout << I[1].start << " " << I[1].end << endl;
    cout << I[2].start << " " << I[2].end << endl;


    int a = 6;
    int b = 9;

    swap(a , b);

    cout << "a = " << a << " b = " << b << endl; 

    cout << "max : " << max(a,b) << " min : " << min(a,b) << endl;

    
    
    
    return 0;
}