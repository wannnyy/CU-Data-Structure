#include <iostream>
#include <vector>

using namespace std;
/*
    state  -1 no data
            0 used to be
            1 have data

*/

int main()
{
    int n,m,a,b,mx_probe = 1 ,mx_find = 1;
    cin >> n >> m ;
    vector<int> my_hash(n),state(n,-1),data;
    bool done = false;
    while(m--)
    {
        cin >> a >> b;
        done = false;
        if(a == 1)
        {
            data.push_back(b);
            int home_pos = b%n;
            int j = 0 ;
            while(!done)
            {
                if(state[(home_pos + j*j)%n] <= 0 )
                {
                    done = true;
                    state[(home_pos + j*j)%n] = 1;
                    my_hash[(home_pos + j*j)%n] = b;
                }
                j++;
            }
        }
        else if(a == 2)
        {
            for(int i=0;i<n;i++)
            {
                if(my_hash[i] == b)
                {
                    my_hash[i] = 0;
                    state[i] = 0;
                    break;
                }
            }
        }
    }


    // mx_probe
    for(int i=0;i<n;i++)
    {
        int home_pos = i%n;
        int j = 0 ;
        done = false;
        while(!done)
        {
            if(state[(home_pos + j*j)%n] <= 0 )
            {
                done = true;
                mx_probe = std::max(mx_probe,j+1);
                break;
            }
            j++;
        }
    }

    //mx_find
    for(int i=0;i<data.size();i++)
    {
        int home_pos = (data[i])%n;
        int j = 0 ;
        done = false;
        while(!done)
        {
            if(state[(home_pos + j*j)%n] < 0)
            {
                done = true;
                mx_find = std::max(mx_find,j+1);
                //cout << "www";
            }
            j++;
        }
    }


/*
    for(auto &x : my_hash)
    {
        cout << x << " ";
    }
    cout << '\n';
    for(auto &x : state)
    {
        cout << x << " ";
    }
    cout << '\n';

*/


    cout << mx_probe << " " << mx_find;
    return 0;
}
