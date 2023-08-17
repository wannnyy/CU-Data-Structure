#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void pb(vector<int> &v)
{
    int value ;
    cin >> value ;
    v.push_back(value);
    return;
}

void sa(vector<int> &v)
{
    sort(v.begin(),v.end());
    return;
}

void d(vector<int> &v)
{
    int index ;
    cin >> index ;
    v.erase(v.begin()+index);
    return;
}

void r(vector<int> &v)
{
    reverse(v.begin(),v.end());
    return ;
}

void sd(vector<int> &v)
{
    sa(v);
    r(v);
    return;
}
void choose_order(string order,vector<int> &v)
{
    if(order == "pb")
    {
        pb(v) ;
    }
    else if(order == "sa")
    {
        sa(v);
    }else if(order == "sd")
    {
        sd(v);
    }else if(order == "r")
    {
        r(v);
    }else if(order == "d")
    {
        d(v);
    }
}
int main()
{
    vector<int> v ;
    int n ;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        string order ;
        cin >> order ;
        choose_order(order,v);
    }

    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " " ;
    }
    return 0;
}
