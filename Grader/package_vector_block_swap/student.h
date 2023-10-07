#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m)
{
  // write your code here
  vector<T> ta(m), tb(m);
  auto ft = std::min(a, b);
  auto ls = std::max(a, b);
  if (m <= 0 || ft + m > ls || b + m >= end() || ft < begin() || ls >= end()) // Check the last condition carefully.
  {
    return false;
  }
  for (int i = 0; i < m; i++)
  {
    // ta[i] = *(ft + i);
    // tb[i] = *(ls + i);
    std::swap(*(ft + i), *(ls + i));
  }
  // for (int i = 0; i < m; i++)
  // {
  //   *(ft + i) = tb[i];
  //   *(ls + i) = ta[i];
  // }
  return true;
}

#endif
