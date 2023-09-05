#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int, int>> v)
{
  // WRITE YOUR CODE HERE
  int ans = 0;
  stack<int> tp;
  for (auto e : v)
  {
    if (e.first == 1)
    {
      tp.push(e.second); // push in the number.
    }
    else // +, -, *, /
    {
      int ft, sd;
      sd = tp.top();
      tp.pop();
      ft = tp.top();
      tp.pop();
      if (e.second == 0)
      {
        tp.push(ft + sd);
      }
      else if (e.second == 1)
      {
        tp.push(ft - sd);
      }
      else if (e.second == 2)
      {
        tp.push(ft * sd);
      }
      else
      {
        tp.push(ft / sd);
      }
    }
  }

  return tp.top();

  // DON"T FORGET TO RETURN THE RESULT
}

#endif
