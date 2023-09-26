#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror()
{
  // write your code here
  size_t br = mSize;
  resize(mSize*2);
  for(size_t i=0;i<br;i++)
  {
    mData[br+i] =  mData[br-i-1];
  }
} 


#endif
