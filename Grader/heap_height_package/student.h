#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::height() const
{
  // write your code here
  if (mSize == 0)
  {
    return -1;
  }
  if (mSize == 1)
  {
    return 0;
  }
  int n = mSize, S = 1, ans = 0;
  while (S < n)
  {
    ans++;
    S = (1 - pow(2, ans)) / (1 - 2);
  }
  return ans - 1 ;
}

#endif
