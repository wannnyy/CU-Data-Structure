#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<float> v1(2) ;
    vector<float> v2(2) ;

    cout << "-- v1 --" << '\n' ;
    for(int i=0;i<7;i++)
    {
        //v[i] = i ;
        cout << i << " : " << v1[i] << '\n' ;
    }
    cout << "-- v2 --" << '\n' ;
    for(int i=0;i<7;i++)
    {
        //v[i] = i ;
        cout << i << " : " << v2[i] << '\n' ;
    }

    /*
    cout << "using at" << '\n' ;
    v2.at(1) = 99 ;
    // This will cause Exception
    for(int i=0;i<7;i++)
    {
        cout << i << " : " << v2.at(i) << endl;
    }
    */
    return 0;
}
