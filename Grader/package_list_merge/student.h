#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for(auto it = ls.begin();it != ls.end();it++)
  {
    // for(auto it2 = it->begin();it2 != it->end();it2++)   // This will get timeout.
    // {
    //   push_back(*it2);
    //   it->erase(it2);
    // }
    
    
    if(it->mSize ==0 )
      continue;
    
    // Connect last node to first of it.
    mHeader->prev->next = it->mHeader->next;
    it->mHeader->next->prev = mHeader->prev ;

    // Connect mHeader to last of it.
    mHeader->prev = it->mHeader->prev;
    it->mHeader->prev->next = mHeader;

    // link it mHeader to itself (mSize == 0).
    it->mHeader->next=it->mHeader;
    it->mHeader->prev=it->mHeader;

    mSize += it->mSize ;
    it->mSize = 0 ;

  }
  
}

#endif
