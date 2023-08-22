#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k ;
    vector<int> number,index;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        number.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        int temp;
        cin >> temp ;
        index.push_back(temp);
    }
    sort(number.begin(),number.end());
    for(int i=0;i<m;i++)
    {
        int mn = max(0,index[i]-k);
        int mx = min(1000000000,index[i]+k);
        auto low = lower_bound(number.begin(),number.end(),mn);
        auto up = upper_bound(number.begin(),number.end(),mx);
        cout << up - low << " ";
    }
    
    return 0;
}

/*
                                    ----- THE SLOW WAY ---
                                    You don't have to loop through all number.
                                    just sort and use the upper_bound and lower_bound
                                    and then upper_bound - lower_bound (iterator - iterator)
                                    you'll also get the answer
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k ;
    vector<int> number,index;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        number.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        int temp;
        cin >> temp ;
        index.push_back(temp);
    }
    sort(number.begin(),number.end());
    for(int i=0;i<m;i++)
    {
        int cnt = 0;
        for(int j=0;j<n;j++)
        {
            if(index[i]-k <= number[j] && number[j] <= index[i]+k)
            {
                cnt += 1;
                if(number[j] > index[i] +k)
                    break;
            }
        }
        cout << cnt << " ";
    }

    return 0;
}
*/
