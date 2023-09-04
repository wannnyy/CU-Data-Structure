#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int n; 
    cin >> n; 
    vector<int> check; 
    set<int> db ; 
    bool ans = false ; 
    for(int i=0;i<n;i++)
    {
        int tp;
        cin >> tp ; 
        check.push_back(tp) ;
        db.insert(tp);
    }
    sort(check.begin(),check.end());

    // Check whether 1, n exit in the given range.
    auto bg = lower_bound(check.begin(),check.end(),1); 
    auto ls = upper_bound(check.begin(),check.end(),n);
    

    //  cout << *(ls) << " " << *(check.end());
    //  check.end() is next to the last element.
    if(db.size() != check.size())
    {
        cout << "NO";
    }
    else if(bg != check.begin() || ls < check.end()) 
    {
        cout << "NO";
    }
else
    {
        cout << "YES" ;
    }

    return 0;
}
