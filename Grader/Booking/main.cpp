#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    map<string, set<string>> b;
    string tp, se;
    for (int i = 0; i < n; i++)
    {
        cin >> tp >> se;
        b[tp].insert(se);
    }
    bool no = false;
    int k;
    for (int i = 0; i < m; i++)
    {
        set<string> dlt;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> tp >> se;
            auto it = b[tp].find(se);
            if (it == b[tp].end() && !no)
            {
                cout << "NO" << '\n';
                no = true;
            }
            if (!no)
                dlt.insert(se);
            // b[tp].erase(it);
        }
        if (!no)
        {
            cout << "YES" << '\n';

            for (auto e : dlt)
            {
                b[tp].erase(e);
            }
        }
        no = false;
    }
    return 0;
}