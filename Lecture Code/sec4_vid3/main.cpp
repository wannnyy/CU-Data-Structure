#include <iostream>
#include <set>

using namespace std;

int main()
{
    /*
        Set
        - Storing distinct data of same type
            the data type must be comparable, i.e., we can tell if A is more or less than B.
        - Somewhat slow insert (than vector)
        - Fast look up
        - Fast erase
        - Iterator starts from "minimum elements" and goes in increasing value direction
            Can be used in (somewhat) fast sorting
    */

    set<int> s = {4,1,3,2,1,1,3,4};

    cout << "Size of s is " << s.size() << '\n';

    s.insert(10);
    s.insert(5);
    s.erase(3);

    cout << "member of s: " ;
    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout << *it << " " ;
    }

    set<pair<string,int>> s1 = {{"somchai",5},{"abc",6}, {"abcd",-3}, {"somchai",-4},
        {"z",0}, {"z", -1}, {"z",9}
    };

    for(auto &x:s1)
    {
        cout << x.first << ", " << x.second << '\n' ;
    }

    cout << "-- find --" << '\n' ;
    auto it = s1.find({"z",-1}) ;
    cout << (*it).first << ", " << (*it).second << '\n' ;
    it--;
    it--;
    cout << it->first << ", " << it->second << '\n';
    it++;
    cout << it->first << ", " << it->second << '\n';












    return 0;
}
