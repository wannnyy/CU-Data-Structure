#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges)
{
  // Write code here
  std::vector<int> ch(mSize, 1);
  for (int i = 0; i < ranges.size(); i++)
  {
    auto it1 = std::min(ranges[i].first, ranges[i].second);
    auto it2 = std::max(ranges[i].first, ranges[i].second);
    int t1 = it1 - begin(), t2 = it2 - begin();
    for (int i = t1; i < t2; i++)
    {
      ch[i] = 0;
    }
  }

  std::vector<T> ans;
  for (int i = 0; i < mSize; i++)
  {
    if (ch[i] != 0)
    {
      ans.push_back(mData[i]);
    }
  }
  mSize = ans.size();
  for (int i = 0; i < mSize; i++)
  {
    mData[i] = ans[i];
  }
}

#endif
