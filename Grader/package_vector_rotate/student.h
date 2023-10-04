#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <vector>
template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k)
{
  // write your code here
  if (k == 0)
    return;
  int n = last - first;

  // T *chunk = new T[n]();
  vector<T> chunk(n);
  for (auto it = first; it != last; it++)
  {
    chunk[it - first] = *it;
  }
  for (auto it = first; it != last; it++)
  {
    *it = chunk[(it - first + k) % n];
  }
  // delete(chunk)
}

#endif
