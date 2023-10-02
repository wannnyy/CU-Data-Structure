#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  // for(auto &x : pos)
    // std::cout << x  << " ";
  vector<T> ch ;
  int erase_index = 0 ;
  for(int i=0;i<mSize;i++)
  {
    if(erase_index < pos.size() && i == pos[erase_index] )
    {
      // std::cout << mData[i] << " " << pos[erase_index];  
        erase_index++;
    }
    else
    { 
      ch.push_back(mData[i]);
    }
  }
  // for(int i=0;i<5;i++ )
    // std::cout << pos[pos.size()] << " ";
  resize(ch.size()); 
  for(int i=0;i<mSize;i++){
    mData[i] = ch[i];
  }
}

#endif
