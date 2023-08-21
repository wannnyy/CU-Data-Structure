#include <iostream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m ;
    set<int> all ;
    map<int,int> m1,n1;
    for(int i=0;i<n;i++)
    {
        int temp ;
        cin >> temp ;
        n1[temp] = 1 ;
        all.insert(temp);
    }
    for(int i=0;i<m;i++)
    {
        int temp ;
        cin >> temp ;
        m1[temp] = 1;
        all.insert(temp);
    }
    for(auto i : all)
    {
        if(m1[i] == 1 && n1[i] == 1)
        {
            cout <<  i << " " ;
        }
    }
    return 0;
}
