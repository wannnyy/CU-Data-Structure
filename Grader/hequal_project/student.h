#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>
template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::operator==(const CP::priority_queue<T, Comp> &other) const
{

  // write your code here
  if (mSize != other.mSize)
    return false;
  std::vector<T> ft, sd;
  for (int i = 0; i < mSize; i++)
  {
    ft.push_back(mData[i]);
    sd.push_back(other.mData[i]);
  }

  sort(ft.begin(), ft.end(),mLess);
  sort(sd.begin(), sd.end(),other.mLess);

  for (int i = 0; i < mSize; i++)
  {
    if (ft[i] != sd[i])
    {
      return false;
    }
  }

  return true; // you can change this line
}

#endif
