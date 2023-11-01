#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::find(T k) const
{
  // your code here
  for (int i = 0; i < mSize; i++)
  {
    if (mData[i] == k)
    {
      return true;
    }
  }
  return false;
}

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::find_level(T k) const
{
  // your code here
  int idx, level = 0;
  if (!find(k))
  {
    return -1;
  }
  for (int i = 0; i < mSize; i++)
  {
    if (k == mData[i])
    {
      idx = i;
    }
  }

  while (idx > 0)
  {
    level++;
    idx = (idx - 1) / 2;
  }
  return level;
}

#endif
