#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v)
{
    cout << "Size of V is " << v.size() << ":";
    for(int i=0;i<v.size();i++) cout << v[i] << " " ;
    cout << '\n' ;
}


int main()
{
    /*
    Functions that work with vector
    - sort
    - find
    - min_element
    - max_element
    - lower_bound
    - upper_bound

    --- FIND ---
    find(a,b,c)
    a and b are position(iterator)
    find c from a to BEFORE b
    if not found, RETURN b
    */

    vector<int> v = {9,-1,3,7,5,2,1,4};

    int x = 5 ;
    if(find(v.begin(),v.end(),x) != v.end())
    {
        cout << "found"  << '\n' ;
    }else{
        cout << "not found" << '\n' ;
    }

    if(find(v.begin(),v.begin()+3,3) != v.begin() + 3)
    {
        cout << "FOUND" << '\n' ;
    }

    //how many "YES" will be printed? (CHEAT QUESTION)
    //if (find(v.begin() , v.begin()+2, x) != v.end()) cout << "YES" << endl;
    //if (find(v.begin() , v.begin()+4, x) != v.end()) cout << "YES" << endl;
    //if (find(v.begin()+4, v.begin()+2, x) != v.end()) cout << "YES" << endl;
    //if (find(v.begin()+4, v.begin()+8, x) != v.end()) cout << "YES" << endl;

    print(v);
    sort(v.begin()+2,v.begin()+6) ;
    print(v);





    return 0;
}
