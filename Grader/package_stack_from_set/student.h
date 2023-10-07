#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

// DO NOT INCLUDE ANYTHING

template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first, typename std::set<T>::iterator last)
{
  // write your code ONLY here
  // int sz = last - first;
  // expand(sz);
  // last--;
  // for (auto it = last; it >= first; it--)
  // {
  //   mData[it - first] = *(it);
  // }
  // mSize = sz;
 
  int sz = 0;
  for(auto it = first;it != last;it++) sz++ ;
  mCap = sz;
  mSize = sz;
  mData = new T[mCap]();
  int i=0;
  for (auto itr = first; itr != last; itr++)
  {
    mData[sz - i - 1] = *(itr);
    i++;
  }
  mSize = sz;
}

#endif
