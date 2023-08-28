#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, w;
    cin >> n >> w;
    vector<int> data;
    for (int i = 0; i < n; i++)
    {
        int tp;
        cin >> tp;
        data.push_back(tp);
    }
    // index = 1 + (b-a)/2
    vector<int> temp;
    for (int i = 0; i < w + 1; i++)
    {
        temp.push_back(data[i]);
    }

    int dlt = data[0], index = (w) / 2;
    sort(temp.begin(), temp.end());
    // First Median
    cout << temp[index] << " ";
    for (int i = w + 1; i < n ; i++)
    {
        auto it = lower_bound(temp.begin(), temp.end(), dlt);
        dlt = data[i-w];
        temp.erase(it);
        it = lower_bound(temp.begin(),temp.end(),data[i]);
        temp.insert(it,data[i]);
        // for(int j=0;j<temp.size();j++)
        // {
        //     cout << temp[j] << " ";
        // }
        // cout  << " temp"<< '\n';
        cout << temp[index] << " ";
    }

    return 0;
}