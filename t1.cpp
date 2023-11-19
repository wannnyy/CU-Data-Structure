#include <iostream>
#include <map>
using namespace std;

int main()
{
    int cnt = 0 ;
    for(int i=100;i<=600;i++)
    {
        if(i % 4 == 0 || i%6==0)
        {
            cnt++;
        }
    }
    cout << cnt;

    // 25 ... 150           150 - 25 + 1
    // 17 ... 100           100 - 17 + 1
    // 5 ... 25             25 - 5 + 1
    return 0;
}