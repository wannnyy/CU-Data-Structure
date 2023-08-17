#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k)
{
    //write some code here
    int index = it - v.begin() ;
    int start_index, end_index ;
    if(index - k < 0 )
    {
        start_index = 0 ;
    }else
    {
        start_index = index - k;
    }

    if(index + k > v.size())
    {
        end_index = v.size() ;
    }
    else{
        end_index = index + k + 1;
    }

    vector<string> ans ;
    for(int i=0;i<v.size();i++)
    {
        if(!(start_index <= i && i < end_index))
        {
            ans.push_back(v[i]);
        }
    }
    v = ans ;
    return v ;
    //don’t forget to return something
}
int main()
{
    int n,j,k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result)
    {
        cout << x << endl;
    }
}
