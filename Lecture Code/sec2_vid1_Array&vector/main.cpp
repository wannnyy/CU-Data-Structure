#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Array
    cout << "---ARRAY---" << '\n' ;
    int x[2] = {10,20} ;
    for(int i=0;i<2;i++)
    {
        cout << x[i] <<  " " ;
    }
    cout << endl ;

    // Vector
    cout << "---VECTOR---" << '\n' ;
    vector<int> a = {2,3} ;
    vector<bool> b = {true,false,true} ;

    a.push_back(10) ; // add a value at the end of the vector
    a.push_back(20) ;

    a.insert(a.begin(), 99); // add a value at a specific index of the vector
    a.insert(a.end() , -5) ;

    cout << "a is " ; // print all the value of a
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl ;

    cout << "b is "; // print all the value of b
    for(int i=0;i<b.size();i++)
    {
        cout << b[i] << " " ;
    }
    cout << endl ;

    return 0;
}
