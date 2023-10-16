#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"
#include <cmath>

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const
{
  // Write code here
  std::vector<std::stack<T>> ans;
  std::vector<T> clone(mSize);
  for (int i = 0; i < mSize; i++)
    clone[i] = mData[i];

  int vsize = 0;
  int stack_left = k;
  int n = mSize;
  while (n > 0)
  {
    std::stack<T> tmp, ans_tmp;
    vsize = ceil(float(n) / float(stack_left));
    //::cout << n << " " << stack_left <<'\n';
    // std::cout << vsize << "\n";
    for (int i = 0; i < vsize; i++)
    {
      tmp.push(clone.back());
      clone.pop_back();
    }

    for (int i = 0; i < vsize; i++)
    {

      ans_tmp.push(tmp.top());
      if (!tmp.empty())
        tmp.pop();
    }

    ans.push_back(ans_tmp);

    n -= vsize;
    stack_left--;
  }

  output = ans;
}

#endif
