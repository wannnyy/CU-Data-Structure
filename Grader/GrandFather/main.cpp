#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    map<long long, long long> ppl;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        long long t1, t2;
        cin >> t1 >> t2;
        ppl[t2] = t1; // son store father as value
    }
    for (int i = 0; i < m; i++)
    {
        long long k1, k2;
        cin >> k1 >> k2;
        if (ppl.find(k1) == ppl.end() || ppl.find(k2) == ppl.end() || k1 == k2)
        {
            cout << "NO" << '\n';
        }
        else
        {
            long long f1, f2;
            f1 = ppl[k1];
            f2 = ppl[k2];
            if (ppl.find(f1) == ppl.end() || ppl.find(f2) == ppl.end() )
            {
                cout << "NO" << '\n';
            }
            else
            {
                long long gf1 = ppl[f1];
                long long gf2 = ppl[f2];
                if(gf1 == gf2)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
        }
    }

    return 0;
}
