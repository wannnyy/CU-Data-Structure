#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T &value, iterator a, iterator b, CP::list<T> &output)
{
  // write your code here
  // int cnt = 0;
  for (auto it = a; it != b;)
  {
    if (*it == value)
    {
      // delete value;
      iterator tmp(it.ptr->next); // Wonder why we need these two lines.
      // std::cout << cnt++ << '\n';
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      delete it.ptr;
      mSize--;
      it = tmp; // and this one.

      // add it to the front;
      node *n = new node(value, output.mHeader, output.mHeader->next);
      // output.begin().ptr->prev->next = n;
      // output.begin().ptr->prev = n;
      output.mHeader->next->prev = n; // be careful with these two lines.
      output.mHeader->next = n;
      output.mSize += 1;
    }
    else
      it++;
  }
}

#endif
