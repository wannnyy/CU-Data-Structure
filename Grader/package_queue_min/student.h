#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos, Comp comp) const
{
  // your code here
  int n = pos.size();
  bool ini = false;
  T min_ele;
  for (int i = 0; i < n; i++)
  {
    if (0 <= pos[i] && pos[i] < mSize)
    {
      T temp = mData[(mFront + pos[i]) % mCap];
      if (!ini)
      {
        min_ele = temp;
        ini = true;
      }
      if (!comp(min_ele, temp))
      {
        min_ele = temp;
      }
    }
  }
  // should return something
  return min_ele;
}

#endif
