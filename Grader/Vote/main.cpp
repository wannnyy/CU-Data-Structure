#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k ;
    map<string,int> m;
    int minn = 9999;
    for(int i=0;i<n;i++)
    {
        string temp ;
        cin >> temp ;
        m[temp] += 1;
    }

    map<int,int> lst ; // map of <point, number of candidates>

    for(auto &i : m)
    {
        if(i.second != 0){
            if(i.second < minn)
            {
                minn = i.second;
            }
            lst[i.second] += 1;  // i.second is point
        }
    }

    for(auto it = lst.rbegin();it!=lst.rend();it++)
    {
        k -= it->second;
        if(k<=0)
        {
            cout << it->first;
            return 0 ;
        }
    }

    if(k > 0)
    {
        cout <<  minn;
    }

    return 0;
}
