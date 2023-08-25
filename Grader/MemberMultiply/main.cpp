#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void member_multiply(vector<int> &v, vector<pair<vector<int>::iterator, int>> &multiply)
{
    // write your code here
    map<int, int> t;
    int n = multiply.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        t[multiply[i].first - v.begin()] = multiply[i].second;
    }

    for (int i = 0; i < v.size(); i++)
    {
        ans.push_back(v[i]);
        if (t.find(i) != t.end())
        {
            for (int j = 0; j < t[i]; j++)
            {
                ans.push_back(v[i]);
            }
        }
    }

    v = ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator, int>> multiply(m);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        multiply[i].first = v.begin() + a;
        multiply[i].second = b;
    }
    member_multiply(v, multiply);
    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}