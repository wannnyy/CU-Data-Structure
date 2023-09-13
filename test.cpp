#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    map<int, int> m;
    map<string, int> k;
    m[2] = 3;
    m[2] = 4;
    cout << m.erase(3);
    k["somchai"] = 4;
    cout << k.erase("somhai");
    m[3] = 4;
    m[4] = 5;

    auto it = m.begin();
    int cnt = 0;
    while (it != m.end())
    {
        cout << cnt << '\n';
        it++;
        cnt++;
    }
    cout << '\n'
         << 'a' + 3;

    vector<int> h(5);
    vector<pair<int, int>> d = {{1, 5}, {2, 4}, {3, 3}, {4, 2}, {5, 1}};
    // sort(d.rbegin(),d.rend());

    // sort(d.begin(),d.end(),[](auto lhs,auto rhs){
    // return lhs.second > rhs.second ;    // sort by second element
    // });
    for (int i = 0; i < 5; i++)
    {
        h[i] = i;
    }
    // sort(h.rbegin(), h.rend(),greater<>());



    sort(h.begin(), h.end(), [](int a, int b)
         { return a < b; }); // -------------------------------





    cout << '\n';
    for (int i = 0; i < 5; i++)
    {
        cout << h[i] << " ";
        // cout << d[i].first << " " ;
    }
    cout << '\n';

    auto comp = [](int a, int b)
    {
        return a > b;  // -------------------------------
    };
    priority_queue<int, vector<int>, decltype(comp)> c(comp);

    for (int i = 0; i < 10; i++)
    {
        c.push(i);
        // p.push(i);
    }

    while (!c.empty())
    {
        cout << c.top() << " ";
        c.pop();
    }

    return 0;
}