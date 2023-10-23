#include "stack.h"
#include "queue.h"
#include <vector>

namespace CP
{
    template <typename T>
    void stack<T>::appendStack(stack<T> s)
    {
        int n = s.mSize;
        int mz = mSize;
        expand(n + mz);
        std::vector<T> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(s.mData[i]);
        }
        for (int i = 0; i < mz; i++)
        {
            ans.push_back(mData[i]);
        }
        mSize = n + mz;
        for (int i = 0; i < mSize; i++)
        {
            mData[i] = ans[i];
        }
    }

    template <typename T>
    void stack<T>::appendQueue(queue<T> q)
    {
        int n = q.mSize;
        int mz = mSize;
        expand(mz + n);
        std::vector<T> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            ans.push_back(q.mData[(q.mFront + i) % q.mCap]);
        }
        for (int i = 0; i < mz; i++)
        {
            ans.push_back(mData[i]);
            // std::cout << mData[i];
        }
        for (int i = 0; i < mz + n; i++)
        {
            mData[i] = ans[i];
            // std::cout << mData[i];
        }
        mSize = mz + n;
    }

    template <typename T>
    void queue<T>::appendStack(stack<T> s)
    {
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            push(s.mData[n - i - 1]);
        }
    }

    template <typename T>
    void queue<T>::appendQueue(queue<T> q)
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            push(q.mData[(q.mFront + i) % q.mCap]);
        }
    }
}
