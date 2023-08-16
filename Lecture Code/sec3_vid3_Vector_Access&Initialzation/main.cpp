#include <iostream>
#include <vector>


using namespace std;

void print_vector(vector<float> v)
{
    for(size_t i=0;i<v.size();i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl ;
}

int main()
{
    vector<int> v1 ;
    cout << "Size of v1 is " << v1.size() << '\n' ;

    vector<int> v2 = {2,3,4} ;

    cout << v2[1] << '\n' ;
    v1 = v2 ;
    v1[0] = 20 ;

    cout << v1[0] << " " << v1[1] << " " << v1[2] << '\n';

    v1.push_back(99) ;
    cout << v1.size() << '\n' ;
    cout << v2.size() << '\n' ;


    vector<float> p1(10) ;  // Initialize the vector with 10 base values
    print_vector(p1) ;

    vector<float> p2 (5,3.55) ; // Initialize the vector with 5 values
    print_vector(p2) ;

    vector<float> p3(p2) ; // Copy Constructor\
    print_vector(p3) ;


    return 0;
}
