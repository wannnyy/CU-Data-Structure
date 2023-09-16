#include <iostream>
#include <string>
#include <set>
#ifndef _CP_PAIR_INCLUDED_
#define _CP_PAIR_INCLUDED_
namespace CP
{
template <typename T1,typename T2>
class pair
{
public:
    T1 first;
    T2 second;
// default constructor, using list initialize
    pair() : first(), second() {}
// custom constructor, using list initialize
    pair(const T1 &a,const T2 &b) : first(a), second(b) { }
// equality operator
    bool operator==(const pair<T1,T2> &other)
    {
        return (first == other.first && second == other.second);
    }
// comparison operator
    bool operator<(const pair<T1,T2>& other) const
    {
        return ((first < other.first) ||
                (first == other.first && second < other.second));
    }
};
}
#endif

int main()
{
    CP::pair<int,std::string> p1, p2; //default ctor
    p1.first = 20;
    p1.second = "somchai";
    CP::pair<int,std::string> a(p1); //copy ctor
    p2 = p1;
    std::cout << p2.first << "," << p2.second << '\n';
    /*
    if (p1 == p2) { //won't compile
    cout << "yes" << endl;
    }
    if (p1 < a) { //won't compile
    cout << "yes" << endl;

    }
    */

    if (p1 == p2)
    {
        std::cout << "yes" << std::endl;
    }
    if (p1 < a)
    {
        std::cout << "yes" << std::endl;
    }
    std::set<CP::pair<int,int>> s;
    s.insert( {1,2} );
    std::cout << s.begin()->second << std::endl;
}
