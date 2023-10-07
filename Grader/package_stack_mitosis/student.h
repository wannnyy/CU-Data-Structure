#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

#include <vector>
#include <algorithm>
template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    int n = b - a + 1;
    int total_size = mSize + n;
    expand(total_size);
    std::vector<T> tmp(mSize), tp(total_size);
    for (int i = 0; i < mSize; i++)
    {
        tmp[i] = mData[mSize - i - 1];
    }

    for (int i = 0, j = 0; i < total_size && j < mSize; i++, j++)
    {
        if (a <= j && j <= b) // You were wrong here.
        {
            tp[i] = tmp[j];
            i++;
        }
        tp[i] = tmp[j];
    }

    std::reverse(tp.begin(), tp.end());

    for (int i = 0; i < total_size; i++)
    {
        mData[i] = tp[i];
    }

    mSize = total_size;
}

#endif