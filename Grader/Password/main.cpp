#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> k;
    set<string> database;
    for (int i = 0; i < l; i++)
    {
        int temp;
        cin >> temp;
        k.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        string tp;
        cin >> tp;
        for (int j = 0; j < l; j++)
        {
            tp[j] = char(((tp[j] - 'a') - k[j]%26 + 26 ) % 26 + 97);
        }
            // cout << tp << '\n';
        database.insert(tp);
    }

    for (int i = 0; i < m; i++)
    {
        string tp;
        cin >> tp;
        if (database.find(tp) == database.end())
        {
            cout << "Unknown" << '\n';
        }
        else
        {
            cout << "Match" << '\n';
        }
    }

    return 0;
}
