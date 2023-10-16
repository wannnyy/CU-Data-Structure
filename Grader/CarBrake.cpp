#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k, mx = 0;
    cin >> n >> m >> k;
    map<int, int> brake, time_first, speed_first;
    vector<pair<int, int>> tmp;
    for (int i = 0; i < n; i++)
    {
        int t, d;
        cin >> t >> d;
        brake[t] = d;
        tmp.push_back({t, d});

        mx = max(t, mx);
    }

    sort(tmp.begin(), tmp.end());

    if (tmp[0].first != 0)
    {
        time_first[0] = k;
        speed_first[k] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        // do s with tmp
        int t = tmp[i].first;
        int d = tmp[i].second;
        int g = k - d;
        if (g < 0)
            g = 0;
        time_first[t] = g;
        speed_first[g] = t;
        k -= d;
    }

    int a, q;
    while (m--)
    {
        cin >> a >> q;
        if (a == 1)
        {
            auto it = time_first.upper_bound(q);
            if (it != time_first.begin())
                it--;
            cout << it->second << '\n';
        }
        if (a == 2)
        {
            auto it = speed_first.lower_bound(q);
            if (it != speed_first.begin())
                it--;
            cout << it->second << '\n';
        }
    }

    return 0;
}
