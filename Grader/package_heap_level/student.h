#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T, typename Comp>
std::vector<T> CP::priority_queue<T, Comp>::at_level(size_t k) const
{
  // write your code here
  // can include anything
  std::vector<T> r;
  long long ft_idx = 0, ls_idx = 0;
  for (int i = 0; i < k; i++)
  {
    ft_idx = ft_idx * 2 + 1;
    ls_idx = ls_idx * 2 + 2;
  }
  for (int i = ft_idx; i < mSize && i <= ls_idx; i++)
  {
    r.push_back(mData[i]);
  }
  sort(r.begin(), r.end(), mLess);
  return r;
}

#endif
