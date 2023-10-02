#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
#include <vector>
// you can include any other file here
// you are allow to use any data structure

template <typename T>
void CP::vector<T>::uniq()
{
  std::set<T> ch ;
  std::vector<T> tmp ;
  for(int i=0;i<mSize;i++)
  {
    if(ch.find(mData[i]) == ch.end())
    {
      tmp.push_back(mData[i]);
      ch.insert(mData[i]);
    }
  }
  resize(tmp.size());
  for(int i=0;i<tmp.size();i++)
  {
    mData[i] = tmp[i];
  }


  // do someting here
}

#endif
