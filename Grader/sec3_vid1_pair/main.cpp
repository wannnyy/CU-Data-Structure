#include <iostream>

using namespace std;

int main()
{
    std::pair<int,float> x;
    std::pair<int,float> y;

    x.first = 10;
    x.second = 20.65;

    std::cout << x.first <<  " " ;
    std::cout << x.second << '\n' ;

    y = x ;

    y.second += 20 ;

    std::cout << y.first <<  " " ;
    std::cout << y.second << '\n' ;

    // Initialize pair

    // default constructor
    std::pair<std::string,bool> p ; // string get set to an empty string and boolean get set to false
    std::cout<< "default [" << p.first << "] [" <<p.second << "]" << '\n' ;

    // initialize by { }
    std::pair<std::string,bool> p1 = {"Wanny",true};

    //create pair without specify type by "make_pair"
    std::pair<bool,int> p2 ;
    p2 = std::make_pair(false,10);

    std::pair<bool,int> p3(p2) ;

    // more complex pair
    std::pair<std::pair<float,int>, std::string> p4 = {{20.5,3},"This is a pair in a pair"};
    std::cout<<p4.first.first << " " << p4.first.second << " " << p4.second <<'\n' ;


    int n ;
    cin >> n ;
    int *a = new int[n] ;
    for(int i=0 ;i<n;i++)
    {
        a[i] = i ;
    }
    std::pair<int*,std::pair<int,bool>> p5 = {a,{1,true}} ;


    return 0;
}
