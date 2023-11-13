#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it, size_t pos)
{
  // write your code here
  CP::list<T> result;
  int szR = mSize - pos ;

  if (it == end())
    return result;

  // auto it1 = begin(),it2 = begin();
  // for (int i = 0; i < pos; i++)
  // {
  //   it1++;
  //   it2++;   // this will be at the first ele that we want to split it to the new list ;
  // }
  // it1--;

  auto it1 = it;
  it1--;


  // the result list;
  result.mHeader->next = it.ptr;
  it.ptr->prev = result.mHeader;

  result.mHeader->prev = mHeader->prev;
  mHeader->prev->next = result.mHeader;
  
  // the remaining list;
  it1.ptr->next = mHeader;
  mHeader->prev = it1.ptr;

  mSize = pos;
  result.mSize = szR;
  

  return result;
}

#endif
