#ifndef __STUDENT_H_
#define __STUDENT_H_

// #include <vector>
template <typename T>
void CP::stack<T>::deep_push(size_t pos, const T &value)
{
  // write your code here
  int n = mSize + 1;
  std::vector<T> v(n);
  for (int i = 0, j = 0; i < mSize  || j <= mSize; i++)
  {
    if (j == mSize - pos)
    {
      v[j] = value;
      j++;
    }
    if(i < mSize)
      v[j] = mData[i];
    j++;
  }
  ensureCapacity(mSize + 1);
  mSize++;
  for (int i = 0; i < mSize; i++)
  {
    mData[i] = v[i];
  }
}

#endif
