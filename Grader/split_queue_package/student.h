#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
// #pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector<CP::queue<T>> CP::queue<T>::split_queue(int k)
{
    std::vector<CP::queue<T>> qs(k);
    // code here
    //
    //
    //
    //
    //
    //
    //
    int mz = mSize;
    for (int i = 0; i < mz; i++)
    {
        qs[i % k].push(front());
        pop();
    }
    return qs;
}

#endif
