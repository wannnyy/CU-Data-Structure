#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,int> m ;  
    map<string,int> k ;
    m[2] = 3;
    m[2] = 4;
    cout << m.erase(3);
    k["somchai"] = 4;
    cout << k.erase("somchai");
    return 0 ;
}