#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"
#include <vector>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check()
{
  // Your code here
  int p = 0;
  while (p * 2 + 1 < mSize) // another way to loop through all the child.
  {
    if (mLess(mData[p], mData[2 * p + 1]))
      return false;
    if (2 * p + 2 < mSize && mLess(mData[p], mData[2 * p + 2])) k
      return false;
    p++;
  }
}

// void ch(std::vector<T> &arr, int p, int n)
// {
//   if (p > n)
//   {
//     return;
//   }
//   int c_idx = 2 * p + 1;
//   int c1_idx = 2 * p + 2;
//   if (( c_idx < n && arr[c_idx] >= arr[p] )|| ( c1_idx < n &&  arr[c1_idx] >= arr[p]))
//   {
//     // std::cout << c1_idx << " " << c_idx << " " << arr[p] << '\n';
//     ans = false;
//     return;
//   }

//   ch(arr, c1_idx, n);
//   ch(arr, c_idx, n);
// }
#endif