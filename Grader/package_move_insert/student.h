#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m)
{
  // your code here
  if (s2.size() == 0)
    return;
  if (m > s2.size())
    m = s2.size();
  std::vector<T> temp(m), clone(mSize);
  for (int i = 0; i < m; i++)
  {
    temp[m - i - 1] = s2.top(); // m - i -1
    s2.pop();
  }

  for (int i = 0; i < mSize; i++)
    clone[i] = mData[i];

  int total_sz = mSize + m;

  expand(total_sz);

  if (k > mSize)
    k = mSize;

  // int a , b ;

  for (int i = 0, j = 0; i < total_sz; i++, j++)
  {
    if (mSize - k == i) // mSize - k
    {
      for (int h = 0; h < m; h++)
        mData[i + h] = temp[h];
      i += m;
    }
    mData[i] = clone[j];
  }

  mSize = total_sz;
}
#endif
