#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, pair<int, pair<string, int>>> x;
    auto it = x.begin();
    while(it != x.end())
    {
        it->second.second.first;
    }                       // kinda work!







    
    return 0;
}