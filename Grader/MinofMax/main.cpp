#include <bits/stdc++.h> // My friend's code not mine.
using namespace std;

int n, m;
vector<int> mx(50'009, 1);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    vector<int> v(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // sort pq from low to high by the first element

    for (int i = 0; i < m; ++i)
        pq.push({1, i});
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        mx[a] = max(mx[a], v[i]);
        pq.push({mx[a], a});    // add the value anyway and then check later.

        while (mx[pq.top().second] > pq.top().first)
            pq.pop(); // Just verify the output. use mx[] that holds the highest value of each type 
                      // to check whether the current output pair is the highest value if not we pop it (The highest value have also been added)
        cout << pq.top().first << " ";
    }
}