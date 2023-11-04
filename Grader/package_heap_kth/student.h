#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T, typename Comp>
T CP::priority_queue<T, Comp>::get_kth(size_t k) const
{
  // write your code here
  // std::vector<T> v; // k will be only 1, 2, 3;

  // for (int i = 0; i < mSize; i++)
  // {
  //   v.push_back(mData[i]);
  // }
  // // can include anything

  // std::sort(v.begin(), v.end(), mLess);

  // return v[mSize - k];

  if(k == 1)
  {
    return mData[0];
  }
  else if(k == 2)
  {
    std::vector<T> v;
    for(int i=1;i<3;i++)
      v.push_back(mData[i]);
    std::sort(v.begin(),v.end(),mLess);
    return v[1];
  }
  else if(k == 3)
  {
    // int sm = get_kth(2);
    std::vector<T> v;
    for(int i=1;i<7;i++)
    {
      v.push_back(mData[i]);
    }
    std::sort(v.begin(),v.end(),mLess);
    return v[4];
  }



}

#endif
