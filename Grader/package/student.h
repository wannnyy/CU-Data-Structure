#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T &CP::vector_no_move<T>::operator[](int idx)
{
  // your code here
  int ft, sd, sum;
  // debug();
  // std::cout << "idx = " << idx  << '\n';

  auto it = std::upper_bound(aux.begin(), aux.end(), idx); // This line of code fuck u up. Becareful about ft ;

  ft = (it - aux.begin());
  if (ft != 0)
  {
    sd = idx - aux[ft - 1];
  }
  else
  {
    sd = idx;
  }
  // std::cout << "ft = " << ft << " sd = " << sd << '\n';
  // std::cout << "Data = " << *(mData[ft].begin() + sd) << '\n';
  return mData[ft][sd];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook()
{
  // your code here
  int t = static_cast<int>(mCap);
  aux.push_back(t);
  // you MAY need this function
}

#endif
