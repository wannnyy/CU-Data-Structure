#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    cout << std::fixed << std::setprecision(2);
    int n;
    cin >> n ;
    map<string,pair<int,int>> id, name ; // id , point , number of vote 
    for(int i=0;i<n;i++)
    {
        int point ; 
        string tp1, tp2; 
        cin >> tp1 >> tp2 >> point;
        id[tp1].first += point ;
        id[tp1].second += 1; 
        name[tp2].first += point ;
        name[tp2].second += 1;
    }

    for(auto &i : id)
    {
        cout << i.first << " " << (i.second.first + 0.0) / i.second.second << '\n' ; 
    }

    for(auto &i : name)
    {
        cout << i.first << " " << (i.second.first + 0.0) / i.second.second << '\n'; 
    }

    return 0;
}
