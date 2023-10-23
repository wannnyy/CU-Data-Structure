#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T, size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const
{
    // write your code here
    std::vector<std::pair<T, size_t>> ans;
    std::map<T, size_t> cnt;
    for (int i = 0; i < mSize; i++)
    {
        cnt[mData[(mFront + i) % mCap]] += 1;
    }
    for (int i = 0; i < k.size(); i++)
    {
        ans.push_back(std::make_pair(k[i],cnt[k[i]]));
    }
    return ans;
}

#endif
