#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse()
{
  // Your code here
  /*
  variable to consider.
    mFront
  */
  aux++;
}

template <typename T>
const T &CP::queue<T>::front() const
{
  // You MAY need to edit this function
  if (aux % 2 == 0)
    return mData[mFront];
  else
    return mData[(mFront + mSize - 1)%mCap];
}

template <typename T>
const T &CP::queue<T>::back() const
{
  // You MAY need to edit this function
  if (aux % 2 == 0)
    return mData[(mFront + mSize - 1) % mCap];
  else
    return mData[(mFront)];
}

template <typename T>
void CP::queue<T>::push(const T &element)
{
  // You MAY need to edit this function
  ensureCapacity(mSize + 1);
  if (aux % 2 == 0)
  {
    mData[(mFront + mSize) % mCap] = element;
  }
  else
  {
    // if (mFront == 0)                           This is correct now but too slow.
    // {
    //   for (int i = mSize - 1; i >= 0; i--)
    //   {
    //     mData[i + 1] = mData[i];
    //   }
    //   mData[mFront] = element;
    // }
    // else
    // {
    //   mData[mFront - 1] = element;
    //   mFront--;
    // }
    mFront = (mFront + mCap -1 )%mCap; // you have to learn this. 
    mData[mFront] = element;
  }
  mSize++;
}

template <typename T>
void CP::queue<T>::pop()
{
  // You MAY need to edit this function
  if (aux % 2 == 0)
  {
    mFront = (mFront + 1) % mCap;
  }
  else
  {
  }
  mSize--;
}

#endif