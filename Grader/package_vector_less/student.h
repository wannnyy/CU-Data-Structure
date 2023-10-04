#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const
{
  // write your code here
  //  if you use std::vector, your score will be half (grader will report score BEFORE halving)
  // if (mSize == 0 && other.mSize != 0)
  // {
  //   return true;
  // }
  // else if (mSize < other.mSize)
  // {
  //   return true;
  // }
  // else if (mSize > other.mSize)
  // {
  //   return false;
  // }
  // else
  // {
  //   for (int i = 0; i < mSize; i++)
  //   {
  //     if(mData[i] < other.mData[i])
  //     {
  //       return true ;
  //     }
  //     else if(mData[i] > other.mData[i])
  //     {
  //       return false ;
  //     }
  //   }
  // }
  // return false ;
  // if (mSize < other.mSize)
  // {
  //   return true;
  // }
  // else if (mSize > other.mSize)
  // {
  //   return false;
  // }
  // else
  // {
  //   for (int i = 0; i < std::min(mSize,other.mSize); i++)
  //   {
  //     if (mData[i] < other.mData[i])
  //     {
  //       return true;
  //     }
  //     else if(mData[i] > other.mData[i])
  //     {
  //       return false ;
  //     }
  //   }
  // }
  // return false;

  if (this->size() == 0 && other.size() > 0)
  {
    return true;
  }
  else if (this->size() == 0 && other.size() == 0)
  {
    return false;
  }
  else if (mData[0] < other[0])
  {
    return true;
  }
  else
  {
    for (int i = 0; i < std::min(mSize, other.mSize); i++)
    {
      if (mData[i] < other[i])
      {
        return true;
      }
      else if (mData[i] > other[i])
      {
        return false;
      }
    }
  }
  return mSize < other.mSize;
}

#endif
