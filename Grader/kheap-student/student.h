#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixUp(size_t idx)
{
    T tmp = mData[idx];
    while (idx > 0)
    {
        size_t p = (idx - 1) / 4; // might fuck up
        if (mLess(tmp, mData[p]))
            break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;
}

template <typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixDown(size_t idx)
{
    T tmp = mData[idx];
    size_t c;
    while ((c = 4 * idx + 1) < mSize) // Have at least one child.
    {
        // if (c + 1 < mSize && mLess(mData[c], mData[c + 1]))
        //     c++;
        // if (mLess(mData[c], tmp))
        //     break;
        // mData[idx] = mData[c];
        // idx = c;
        size_t mx_idx = c;  // This line was wrong
        T mx = mData[c];
        for (int i = 1; i < 4 && c + i < mSize; i++)  //  find max chile of node idx.
        {
            if (mLess(mx, mData[c + i]))
            {
                mx = mData[c + i];
                mx_idx = c + i;
            }
        }
        if (mLess(mx, tmp))
            break; // if the highest value child is less than tmp just break.
        mData[idx] = mx;
        idx = mx_idx;
        // std::cout << c << '\n';
    }
    mData[idx] = tmp;
}

#endif
