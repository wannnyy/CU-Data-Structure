#include <iostream>
#include <vector>

using namespace std;

bool check_invaild(int r1,int c1, int r2, int c2)
{
    return (r1 > r2) || (c1 > c2) ;
}

bool check_outside(int r1, int c1 , int r2 ,int c2 , int n , int m)
{
    return (r1 > n) || (c1 > m) ;
}

void solve(vector<vector<int>> matrix,int n, int m)
{
    int r1,c1,r2,c2 ;
    cin >> r1 >> c1  >> r2 >> c2 ;
    if(check_invaild(r1,c1,r2,c2))
    {
        cout << "INVALID" << '\n' ;
        return ;
    }
    if(check_outside(r1,c1,r2,c2,n,m))
    {
        cout << "OUTSIDE" << '\n' ;
        return ;
    }
    int temp = matrix[r1-1][c1-1];
    // ADD validate r2 ,c2 ;
    if(r2 > n) r2 = n ;
    if(c2 > m) c2 = m ;
    //cout << r1 << " " << c1 << " " << r2 << " " << c2 << '\n';
    for(int i=r1-1;i<r2;i++)
    {
        for(int j=c1-1;j<c2;j++)
        {
            temp = max(temp,matrix[i][j]) ;
        }
    }
    cout << temp << '\n' ;
}


int main()
{
    int n, m, r ;
    cin >> n >> m >> r ;
    vector< vector<int> > matrix(n, vector<int> (m,0)) ;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrix[i][j] ;
        }
    }
    for(int i=0;i<r;i++)
    {
        solve(matrix,n,m) ;
    }
    return 0;
}
