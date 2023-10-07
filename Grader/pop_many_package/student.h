#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::multi_pop(size_t K)
{
  // write your code here
  if (K < mSize)
    mSize -= K;
  else
      mSize = 0;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K)
{
  // write your code here
  //
  // don't forget to return an std::stack
  if(mSize < K)K = mSize;
  std::stack<T> ans, tp;
  int n = K;
  while (K--)
  {
    tp.push(top());
    pop();
  }
  while (n--)
  {
    ans.push(tp.top());
    tp.pop();
  }

  return ans;
}

#endif
