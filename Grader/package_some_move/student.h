#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value)
{
  // Your code here
  int n = value.size();
  int idx = std::upper_bound(aux.begin(), aux.end(), index) - aux.begin();

  // mdata[idx][sd]

  //  2   5
  //    3
  //  idx = 1 (5);
  if (idx > 0)
    aux.insert(aux.begin() + idx, aux[idx - 1] + n);
  else
    aux.insert(aux.begin() + idx, n);

  for (int i = idx + 1; i < aux.size(); i++)
  {
    aux[i] += n;
  }
  // for(int i=0;i<aux.size();i++)
  mData.insert(mData.begin() + idx + 1, value);
  debug();
}

#endif