// #include <iostream>
// #include <set>
// #include <map>
// #include <vector>

// using namespace std;
// int main()
// {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(0);
//     int n, m;
//     cin >> n >> m;
//     map<string, set<string>> b;
//     string tp, se;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> tp >> se;
//         b[tp].insert(se);
//     }
//     bool no = false;
//     int k;
//     for (int i = 0; i < m; i++)
//     {
//         set<string> dlt;
//         cin >> k;
//         for (int j = 0; j < k; j++)
//         {
//             cin >> tp >> se;
//             auto it = b[tp].find(se);
//             if (it == b[tp].end() && !no)
//             {
//                 cout << "NO" << '\n';
//                 no = true;
//             }
//             if (!no)
//                 dlt.insert(se);
//             // b[tp].erase(it);
//         }
//         if (!no)
//         {
//             cout << "YES" << '\n';

//             for (auto e : dlt)
//             {
//                 b[tp].erase(e);
//             }
//         }
//         no = false;
//     }
//     return 0;
// }

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m, temp;
    cin >> n >> m;
    set<pair<string, string>> seat;
    string al, se;

    for (int i = 0; i < n; i++)
    {
        cin >> al >> se;
        seat.insert(make_pair(al, se));
    }
    bool can = true;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        vector<pair<string, string>> tp;
        for (int j = 0; j < temp; j++)
        {
            cin >> al >> se;
            pair<string, string> check = make_pair(al, se);
            if (seat.find(check) != seat.end())
            {
                tp.push_back(check);
            }
            else
            {
                can = false;
            }
        }
        if (can)
        {
            cout << "YES\n";
            for (int j = 0; j < tp.size(); j++)
            {
                seat.erase(tp[j]);
            }
        }
        else
        {
            cout << "NO\n";
        }
        can = true;
    }
    return 0;
}
