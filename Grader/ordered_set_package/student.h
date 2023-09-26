#include <vector>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v,temp;
    vector<int> a(100'000,0) , b(100'000,0);
    for(int i=0;i<A.size();i++)
    {
        a[A[i]] = 1 ;
        v.push_back(A[i]);
    }
    for(int i=0;i<B.size();i++)
    {
        if(a[B[i]] == 0)
        {
            v.push_back(B[i]);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    vector<int> a(100'000,0) , b(100'000,0);
    for(int i=0;i<B.size();i++)
    {
        b[B[i]] = 1 ;
    }
    for(int i=0;i<A.size();i++)
    {
        if(b[A[i]] == 1)
        {
            v.push_back(A[i]);
        }
    }
    return v;
}
