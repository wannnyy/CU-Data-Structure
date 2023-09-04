#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int ic = 0, od = 0;
    int n, m;
    cin >> n >> m;
    queue<int> pt, dm;
    map<int, int> ans;
    vector<int> prob;
    int tp;
    for (int i = 0; i < m; i++)
    {
        cin >> tp;
        prob.push_back(tp);
    }
    int cm;
    for (int i = 0; i < n; i++)
    {
        cin >> cm;
        if (cm == 1)
        {
            //  Receive Food Order.
            int app, pr;
            cin >> app;
            cin >> pr;
            if (app == 1)
            {
                pt.push(pr);
            }
            else
            {
                dm.push(pr);
            }
        }
        else
        {
            //  Cook the food.
            if (!pt.empty() && !dm.empty())
            {
                // cout << " 1 " << '\n';
                od += 1;
                if (pt.front() <= dm.front())
                {
                    // platong is lower and in case of both price are equal we still choose to do platong's order first.
                    ic += pt.front();
                    ans[ic] = od;
                    pt.pop();
                }
                else
                {
                    ic += dm.front();
                    ans[ic] = od;
                    dm.pop();
                }
            }
            else if (!dm.empty())
            {
                // cout << " 2 " << '\n';
                od += 1;
                ic += dm.front();
                ans[ic] = od;
                dm.pop();
            }
            else if (!pt.empty())
            {
                // cout << " 3 " << '\n';
                od += 1;
                ic += pt.front();
                ans[ic] = od;
                pt.pop();
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        auto it = ans.lower_bound(prob[i]);
        if (it != ans.end())
        {
            cout << it->second << " ";
        }
        else
            cout << -1 << " ";
    }
    return 0;
}
