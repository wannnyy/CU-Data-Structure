#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>
#include <vector>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data)
{
  // write your code here
  int insert_index = 0;
  std::sort(data.begin(), data.end());
  vector<T> ans;
  for (int i = 0; i < mSize || insert_index < data.size(); i++)
  {
    if (data[insert_index].first == i)
    {
      ans.push_back(data[insert_index].second);
      if (i < mSize)
        ans.push_back(mData[i]);
      insert_index++;
    }
    else
    {
      if (i < mSize)
        ;
      ans.push_back(mData[i]);
    }
  }
  resize(ans.size());
  for (int i = 0; i < mSize; i++)
  {
    mData[i] = ans[i];
  }
}

#endif
