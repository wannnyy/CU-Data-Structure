#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int n, m ;
    cin >> n >> m ;
    vector<int> v1(n),v2(m) ;
    for(int i=0;i<n;i++)
    {
        cin >> v1[i] ;
    }
    for(int i=0;i<m;i++)
    {
        cin >> v2[i] ;
    }


    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    if(find(v2.begin(),v2.end(),v1[0]) != v2.end())
        cout << v1[0] << " " ;

    for(int i=1;i<n;i++)
    {
        if(v1[i] != v1[i-1] && find(v2.begin(),v2.end(),v1[i]) != v2.end() )
        {
            cout << v1[i] << " " ;
        }
    }








    return 0;
}
