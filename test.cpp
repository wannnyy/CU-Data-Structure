#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,int> m ;
    m[2] = 3;
    m[2] = 4;
    cout << m[2];
    return 0 ;
}