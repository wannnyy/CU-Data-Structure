#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <cmath>
template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const
{
  // write your code here
  std::vector<std::vector<T>> ans;
  int n = 0;
  int total_left = mSize, size_left = k, start_index = mSize - 1 ;
  while (n < mSize)
  {
    int vsize;
    vsize = ceil(float(total_left) / float(size_left));
    // std::cout << "ttl " << total_left << " sz " << size_left;
    // std::cout << "vsize " << vsize << '\n';
    std::vector<T> tmp;
    for (int i = start_index; i >= 0 && i >= start_index - vsize; i--)
    {
      tmp.push_back(mData[i]);
    }
    ans.push_back(tmp);

    start_index -= vsize;
    total_left -= vsize;
    size_left--;
    n += vsize;
    // std:: cout << n ;
  }

  return ans;
}
#endif
