#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, a, b;
    cin >> n >> m;
    bool out = false;
    while (m--)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << "a and b are the same node\n";
            out = true;
        }
        else if (a > b)
        {
            int idx = a;
            while (idx > 0)
            {
                int p = (idx - 1) / 2;
                if (p == b)
                {
                    out = true;
                    cout << "b is an ancestor of a\n";
                }
                idx = p;
            }
        }
        else if (b > a)
        {
            swap(a, b);
            int idx = a;
            while (idx > 0)
            {
                int p = (idx - 1) / 2;
                if (p == b)
                {
                    out = true;
                    cout << "a is an ancestor of b\n";
                }
                idx = p;
            }
        }
        if (!out)
        {
            cout << "a and b are not related\n";
        }
        out = false;
    }
}