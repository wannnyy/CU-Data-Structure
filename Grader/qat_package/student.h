#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  //
  // you need to return something
  // return 
  T ans; 
  if(idx >= 0)
  {
    ans = mData[(mFront + idx)%mCap];
  }
  else
  {
    ans = mData[(mFront+ mSize + idx)%mCap];
  }

  return ans; 
}

#endif
