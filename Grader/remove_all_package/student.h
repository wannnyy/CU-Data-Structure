#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T &value)
{
  // write your code here

  for (auto it = begin(); it != end(); it++)
  {
    if(*it == value)
    {
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      delete it.ptr ;
      mSize--;
    }
  }
}

#endif
