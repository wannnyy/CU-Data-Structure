#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b)
{
  // write your code here
  if(a == b)
    return a;
  std::vector<T> tmp;
  int cnt = 0 ,idx = 0 ;
  for (auto it = a; it != b; it++)
  {
    tmp.push_back(*it);
    // std::cout << *it << "dadasd \n";
    cnt++;
  }
  cnt--;
  for (auto it = a; it != b; it++)
  {
    *it = tmp[cnt--];
  }
  return a ;
}

#endif
