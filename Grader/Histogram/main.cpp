#include <iostream>
#include <map>


using namespace std;

int main()
{
    int n ;
    cin >> n;
    map<string,int> word;
    for(int i=0;i<n;i++)
    {
        string temp ;
        cin >> temp ;
        word[temp] += 1;
    }
    for(auto &it : word)
    {
        if(it.second > 1)
        {
            cout << it.first << " " << it.second << '\n';
        }
    }
    return 0;
}
