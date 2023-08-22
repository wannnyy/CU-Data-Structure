#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    set<int> start_year;
    vector<int> st_year;
    map<int, vector<int>> publish;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int year, month;
        cin >> year >> month;
        start_year.insert(year);
        publish[year].push_back(month); // might bug
    }

    for (auto i : start_year)
    {
        st_year.push_back(i); // won't use the start_year anymore.
    }

    sort(st_year.begin(), st_year.end());

    for (int i = 0; i < m; i++)
    {
        int pyear, pmonth;
        bool goon = true;
        cin >> pyear >> pmonth;
        auto ityr = (upper_bound(st_year.begin(), st_year.end(), pyear) - 1);
        int yr = *(ityr); // year that we will iterate through

        if (pyear < st_year[0] || (pyear == st_year[0] && pmonth < *(min_element(publish[pyear].begin(), publish[pyear].end()))))
        {
            cout << -1 << " " << -1 << " "; // In case of the asked m/y is before the first publish m/y
            goon = false;
        }
        else if (pyear == yr)
        {
            sort(publish[yr].begin(), publish[yr].end(), greater<>());
            for (auto i : publish[yr])
            {
                if (i == pmonth)
                {
                    cout << 0 << " " << 0 << " ";
                    goon = false;
                    break;
                }
                else if (i < pmonth)
                {
                    cout << yr << " " << i << " ";
                    goon = false;
                    break;
                }
            }
            if(goon)
            {
                yr = *(ityr - 1);
                cout << yr << " " << *(max_element(publish[yr].begin(), publish[yr].end())) << " ";
            }
        }
        else
        {
            yr = *(ityr);
            cout << yr << " " << *(max_element(publish[yr].begin(), publish[yr].end())) << " ";
        }
    }
    return 0;
}
