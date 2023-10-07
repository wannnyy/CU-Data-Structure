#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const
{
    // write your code here
    // int a = 1, b = 1;
    // while (a < mSize)
    // {
    //     a *= 2;
    // }
    // while (b < other.mSize)
    // {
    //     b *= 2;
    // }
    // if(mSize - a == other.mSize - b)
    // {
    //     return 0;
    // }
    // else if(mSize - a > other.mSize - b)
    // {

    // }
    int a = mCap - mSize, b = other.mCap - other.mSize;
    if (a == b)
    {
        return 0;
    }
    else if (a > b)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

#endif
