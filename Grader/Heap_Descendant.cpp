#include <iostream>
#include <set>
using namespace std;

void hd(set<int> &s,int idx,int n)
{
    if(idx >= n)
    {
        return ;
    }
    s.insert(idx);
    hd(s,2*idx + 1,n);
    hd(s,2*idx + 2,n);
}


int main()
{
    int a, n;
    cin >> n >> a;
    set<int> s ;
    // vector<int> kp;
    // int idx = a;
    // kp.push_back(idx);
    // idx = idx * 2 + 1;
    // while (idx < n)
    // {
    //     kp.push_back(idx);
    //     if (idx + 1 < n)
    //         kp.push_back(idx + 1);
    //     idx = idx * 2 + 1;
    // }
    // cout << kp.size() << '\n';
    // for (auto &x : kp)
    // {
    //     cout << x << " ";
    // }
    hd(s,a,n);
    cout << s.size() << '\n';
    for(auto &x : s)
    {
        cout << x << " ";
    }
    return 0;
}