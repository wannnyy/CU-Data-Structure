#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> to;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        to.push_back(temp);
    }
    sort(to.begin(), to.end());
    // for(auto i :to)
    // {
    //     cout << i << " ";
    // }
    // cout << '\n';

    int cnt = 0;
    int ncd;
    int c1;
    for (int i = 0; i < m; i++)
    {
        cin >> ncd;
        for (int j = 0; j < ncd; j++)
        {
            cin >> c1;
            auto it = upper_bound(to.begin(), to.end(), c1);
            if (it == to.end() && *it > c1) 
            {
                cout << i + 1;
                return 0;
            }
            else
            { 
                to.erase(it);
                cnt = i;
            }
        }
    }
    cout << cnt + 2;

    return 0;
}