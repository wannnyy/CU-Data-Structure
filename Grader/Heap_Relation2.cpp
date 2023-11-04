#include <iostream>
#include <vector>
using namespace std;
int relation(long long S, long long a, long long b)
{
    // We will consider the case that a < b;
    if (a > b)
        swap(a, b);

    if (b > S * a && b < S * a + 1 + S) // check whether the a is parent of b
    {
        return 1;
    }
    long long tmp_a = a, tmp_b = b;
    if (tmp_a == tmp_b)
        return 4;
    while (tmp_b >= tmp_a)
    {
        if (tmp_b == tmp_a)
        {
            return 2;
        }
        tmp_b = (tmp_b - 1) / S;
    }

    tmp_a = a, tmp_b = b;
    long long cnt_a = 0, cnt_b = 0;

    while (tmp_a > 0)
    {
        tmp_a = (tmp_a - 1) / S;
        cnt_a++;
    }

    while (tmp_b > 0)
    {
        tmp_b = (tmp_b - 1) / S;
        cnt_b++;
    }
    // cout << cnt_a << " " << cnt_b;
    if (cnt_a != cnt_b)
        return 3;
    return 4;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    long long S, a, b;
    cin >> n;
    while (n--)
    {
        cin >> S >> a >> b;
        cout << relation(S, a, b) << " ";
    }
    cout << endl;
}