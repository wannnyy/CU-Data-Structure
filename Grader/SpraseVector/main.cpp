#include <iostream>
#include <vector>
#include <map>
using namespace std;
void insert_into_sv(map<int, int> &v, int pos, int value)
{
    // your code here
    // // if (v.find(pos) == v.end()) // This condition might be unnecessary.
    // // {
    // auto it = v.upper_bound(pos);
    // v.insert(it, {pos, value});
    // while (it != v.end())
    // {
    //     int ft = it->first, sd = it->second;
    //     v.insert(it, {ft + 1, sd});
    //     it++;
    // }
    // // }
    // // else
    // // {
    // //     v[pos] = value;
    // // }
    auto it = v.rbegin();
    while (pos <= it->first && it != v.rend())
    {
        int dlt = it->first, vale = it->second;
        v[dlt + 1] = vale;
        it++;
        v.erase(next(it).base());
    }
    v[pos] = value;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    map<int, int> v;
    cin >> n;
    cout << "ads";
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        insert_into_sv(v, a, b);
    }
    cout << v.size() << "\n";
    for (auto &x : v)
    {
        cout << x.first << ": " << x.second << "\n";
    }
}