#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "map_bst_lite.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, const KeyT &a, const KeyT &b, std::vector<MappedT> &result) const {
    // you MAY need to use this function
    if(n == NULL) return ;
    int x,y;
    KeyT key = n->data.first;
    if(mLess(a,key))
    {
        x = -1;
    }
    else if(mLess(key,a))
    {
        x = 1 ;
    }
    else
    {
        x = 0;
    }

    if(mLess(key,b))
    {
        y = -1;
    }
    else if(mLess(b,key))
    {
        y = 1 ;
    }
    else
    {
        y = 0;
    }



    if(x <=0 )
        my_recur(n->left,a,b,result);

    if(x <= 0 && y <= 0)
    {
        result.push_back(n->data.second);
    }

    if(y    <= 0 )
        my_recur(n->right,a,b,result);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
std::vector<MappedT> CP::map_bst<KeyT, MappedT, CompareT>::value_in_key_range(const KeyT &a, const KeyT &b) const {
	/* write your code here */
	std::vector<MappedT> ans;
    my_recur(mRoot,a,b,ans);
    return ans;
}

#endif
