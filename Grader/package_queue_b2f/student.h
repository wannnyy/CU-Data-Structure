#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::back_to_front()
{
  // write your code here
  if (mSize == 0 || mSize == 1)
    return;
  T last_ele = mData[(mFront + mSize - 1) % mCap];
  mData[(mFront - 1 + mCap)%mCap] = last_ele;
  mFront = (mFront - 1 + mCap)%mCap;                // continuely move mfront 
}

#endif
