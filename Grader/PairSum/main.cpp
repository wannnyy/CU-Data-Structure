#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n, m ;
    cin >> n >> m ;
    vector<int> v(n,0),ch(1000000,0);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        ch[v[i]] += 1;
    }
    for(int i=0; i<m; i++)
    {
        int sum ;
        bool found = false ;
        cin >> sum ;
        for(int i=0; i<v.size(); i++)
        {
            int tp = sum-v[i] ;
            if(tp < 0 || tp > 999999)
            {
                continue;
            }
            if(v[i]*2 == sum && ch[v[i]] >= 2)
            {
                found = true ;
                break;
            }
            else if(v[i]*2 != sum && ch[tp] >= 1)
            {
                found = true ;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
