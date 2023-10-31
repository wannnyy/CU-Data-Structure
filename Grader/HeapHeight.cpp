#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n, k, cnt = 0 ;
    cin >> n >> k ;
    /*
        2-ary heap
        1
        2
        4
        8   
    */

    // long long S = 1*(1 - )/(1-r);
    // n*(1-r) = 1 - r**n
    // n*(r-1) + 1 = r**n;
    // logr(n*(r-1)+1) = n;
    if(k == 1)
    {
        cout << n - 1 ; 
        return 0;
    }
    if(n == 1)
    {
        cout << 0;
        return 0;
    }
    long long S = 1 ;
    while(S < n)
    {
        cnt++;
        S = (1 - pow(k,cnt))/(1-k);
    }
    cout << cnt-1;
    return 0 ; 
}