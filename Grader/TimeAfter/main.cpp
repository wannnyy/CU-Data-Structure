#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int h, m, p ;
    cin >> h >> m >> p ;
    int add_h, add_m ;
    add_h = floor(p/60) ;
    add_m = p%60 ;
    h += add_h ;
    m += add_m ;
    if(m >= 60)
    {
        m = m%60 ;
        h += 1 ;
    }
    if(h>=24)
    {
        h = h%24 ;
    }
    printf("%02d %02d",h,m);
    return 0;
}
