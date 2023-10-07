#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T &CP::vector_no_move<T>::operator[](int idx)
{
  // your code here
  auto it = std::upper_bound(aux.begin(), aux.end(), idx);
  int ft = it - aux.begin();
  if (ft != 0)
  {
    idx -= aux[ft - 1];
  }
  return mData[ft][idx];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook()
{
  // your code here
  aux.push_back(mCap);
  // you MAY need this function
}

#endif
