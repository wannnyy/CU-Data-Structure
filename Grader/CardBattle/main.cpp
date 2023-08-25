#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    // vector<int> to;
    map<int, int> too;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        // to.push_back(temp);
        too[temp] += 1;
    }
    // sort(to.begin(), to.end());
    // for(auto i :to)
    // {
    //     cout << i << " ";
    // }
    // cout << '\n';
    bool iswin = true;
    int cnt = 0;
    int ncd;
    int c1;
    for (int i = 0; i < m; i++)
    {
        cin >> ncd;
        for (int j = 0; j < ncd; j++)
        {
            cin >> c1;
            // auto it = upper_bound(to.begin(), to.end(), c1);
            auto it2 = too.upper_bound(c1);
            if (it2->second <= 0 || it2->first < c1)
            {
                if (iswin)
                {
                    cnt = i;
                }
                iswin = false;
            }
            else
            {
                if (iswin)
                {
                    it2->second -= 1;
                    if (it2->second == 0)
                    {
                        too.erase(it2);
                    }
                    cnt = i;
                }
            }
        }
    }
    if (iswin)
    {
        // cout << "W" ;
        cout << cnt + 2;
    }
    else
        cout << cnt + 1;

    return 0;
}