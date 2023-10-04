#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last)
{
  // write your code here
  int n = last - first + mSize, plus = 0;
  bool notInsert = true ;
  // std::cout << n  << " n" << '\n';
  T *ans = new T[n]();
  for (auto it = begin(); it < end() || notInsert; it++)
  {
    if (it == position)
    {
      for (auto it1 = first; it1 != last; it1++)
      {
        ans[it - begin() + (it1 - first)] = *it1;
      }
      plus = n - mSize;
      notInsert = false;
    }
    if(it - begin() + plus < n)
      ans[it - begin() + plus] = *it;
    // std::cout << it- begin();
  }
  delete(mData);
  mData = ans ;
  mCap = n ;
  mSize = mCap ;
}

#endif
