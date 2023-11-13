#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n, k, V, c, dj = -1, cnt = 0;
    vector<int> v;
    vector<pair<int,int>> v1; // value amount disjunction.
    cin >> n >> k >> V;
    for (int i = 0; i < n; i++) //  too many sub-cases
    {
        cin >> c;
        v.push_back(c);
    }
    for (int i = 0; i < k; i++)
    {
        cnt++;
        if (i == k - 1 || v[i] != v[i + 1])
        {
            v1.push_back({v[i], cnt});
            cnt = 0;
        }
        // if (i == k - 1 && v[i] == v[i + 1])
        // {
        //     v1.push_back({v[i], cnt, dj--});
        //     cnt = 0;
        // }
    }

    v1.push_back({V, 1});

    for (int i = k; i < n; i++)
    {
        cnt++;
        if (i == n - 1 || v[i] != v[i + 1])
        {
            v1.push_back({v[i], cnt});
            cnt = 0;
        }
    }

    bool IsChange = true ;

    while(IsChange)
    {
        IsChange = false ;
        
    }

    // int n ,k ,V;
    // cin >> n >> k >> V;
    // vector<pair<int,int>> tmp ;
    // for(int i=0;i<n;i++)
    // {
    //     int c;
    //     cin >> c;
    //     if(n == k)
    //     {
    //         tmp.push_back({V,-1});
    //     }
    //     tmp.push_back({c,0});
    // }

    return 0;
}