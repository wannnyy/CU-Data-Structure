#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string,int> list ;
    int n ;
    cin >> n ;
    int max = 0 ;
    string max_word = "";
    for(int i=0;i<n;i++)
    {
        string temp ;
        cin >> temp ;
        list[temp] += 1 ;
        if(list[temp] > max)
        {
            max = list[temp];
            max_word = temp;
        }
        else if(list[temp] == max)
        {
            if(max_word.compare(temp) < 0)
            {
                max_word = temp ;
            }
        }
    }
    cout << max_word << " " <<max ;
    return 0;
}
