#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *n)
{
  // write your code here
  if (n == NULL)
  {
    return 0;
  }
  int ls = process(n->left), rs = process(n->right);
  // delete n;
  return 1 + ls + rs;
  // if (n == NULL)
  // {
  //   return;
  // }
  // de(n->left);
  // de(n->right);
  // delete n;
  // return;
}

// void de(node *n)
// {
//   if(n == NULL)
//   {
//     return ;
//   }
//   de(n->left);
//   de(n->right);
//   delete n;
// }

template <typename KeyT, typename MappedT, typename CompareT>
std::pair<KeyT, MappedT> CP::map_bst<KeyT, MappedT, CompareT>::subtree(map_bst<KeyT, MappedT, CompareT> &left, map_bst<KeyT, MappedT, CompareT> &right)
{
  // write your code here
  KeyT ft = mRoot->data.first;
  MappedT sd = mRoot->data.second;
  if (mRoot == NULL)
    return std::make_pair(ft, sd);
  




  delete_all_nodes(left.mRoot);
  left.mSize = process(this->mRoot->left);
  // this->mRoot->left->parent = NULL;
  left.mRoot = this->mRoot->left;

  delete_all_nodes(right.mRoot);
  right.mSize = process(this->mRoot->right);
  // this->mRoot->right->parent = NULL;
  right.mRoot = this->mRoot->right;

  mRoot->left = NULL;
  mRoot->right = NULL;
  mSize = 1;

  return std::make_pair(ft, sd);
}

#endif
