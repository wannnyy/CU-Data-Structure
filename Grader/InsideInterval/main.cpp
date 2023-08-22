// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>

// using namespace std;

// int main()
// {
//     std::ios_base::sync_with_stdio(false); std::cin.tie(0);
//     int n, m ;
//     cin >> n >> m;
//     vector<int> range ;
//     vector<pair<int,int>> temp ;
//     vector<int> prob ;
//     set<int> r ;
//     for(int i=0;i<n;i++)
//     {
//         int t1,t2;
//         cin >> t1 >> t2;
//         temp.push_back(make_pair(t1,t2));
//         // for(int j=t1;j<=t2;j++)
//         // {
//         //     r.insert(j);
//         // }
//     }
//     sort(temp.begin(),temp.end());
//     for(int i=0;i<n;i++)
//     {
//         range.push_back(temp[i].first);
//         range.push_back(temp[i].second);
//     }

//     for(int i=0;i<m;i++)
//     {
//         int t1 ;
//         cin >> t1 ;
//         prob.push_back(t1);
//     }

//     // for(int i=0;i<n;i++)
//     // {
//     //     int mn = max(0,range[i].first);
//     //     int mx = min(1000000000,range[i].second);
//     //     auto ft = lower_bound(prob.begin(),prob.end(),mn);
//     //     auto ls = upper_bound(prob.begin(),prob.end(),mx);
//     //     cout << ls - ft << " " ;
//     // }

//     // The slow way ---> iterate through problem and then loop to chcek it with each range to see if it fits.

//     for(int i=0;i<m;i++)
//     {

//         auto low = lower_bound(range.begin(),range.end(),prob[i]);
//         auto up = upper_bound(range.begin(),range.end(),prob[i]);

//         // up-low == 1 ? cout << 1 << " " : cout << 0 << " " ;
//         if(up-low==1)
//         {
//             cout << 1 << " ";
//         }
//         else if(up == low && *(up) == *(up+1))
//         {
//             cout << 1 << " ";
//         }
//         else
//         {
//             cout << 0 << " ";
//         }
//         // 2 2 5 7 10 20

//         // if(r.find(prob[i]) != r.end())
//         // {
//         //     cout << 1 << " ";
//         // }
//         // else
//         // {
//         //     cout << 0 << " ";
//         // }
//     }

//     return 0;
// }

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> start;
    vector<int> prob;
    map<int, int> range;
    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        start.push_back(t1);
        range[t1] = t2;
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        prob.push_back(t);
    }

    sort(start.begin(), start.end());

    for (int i = 0; i < m; i++)
    {
        int it = *(upper_bound(start.begin(), start.end(), prob[i]) - 1);
        if (it <= prob[i] && prob[i] <= range[it])
        {
            cout << 1 << " ";
        }
        else 
        {
            cout << 0 << " ";
        }
    }
    return 0;
}