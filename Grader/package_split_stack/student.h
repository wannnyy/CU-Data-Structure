#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>
#include <vector>

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::split_stack(int k) const
{
  // your code here
  // int n = mSize - k + 1;
  std::vector<std::vector<T>> ans(k);
  for (int i = 0; i < k; i++)
  {
    int x = i;
    while (x < mSize)
    {
      ans[i].push_back(mData[mSize - x - 1]);
      x += k;
    }
    // sort(ans[i].begin(),ans[i].end());
    // for (int j = 0; j < ans[i].size(); j++)
    // {
    //   std::swap()
    // }
    std::reverse(ans[i].begin(),ans[i].end());
  }
  return ans;
  // should return something
}

#endif
