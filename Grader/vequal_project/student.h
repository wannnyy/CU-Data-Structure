#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator==(const vector<T> &other) const
{
  // write your code only in this function
  int n = this->size();
  if (other.size() != n)
    return false;
  for (int i = 0; i < n; i++)
  {
    if (mData[i] != other.mData[i])
    {
      return false;
    }
  }
  return true;
}

#endif
