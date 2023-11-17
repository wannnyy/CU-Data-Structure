#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT>
CP::map_bst<KeyT, MappedT, CompareT> CP::map_bst<KeyT, MappedT, CompareT>::split(KeyT val)
{
  // your code here
  CP::map_bst<KeyT, MappedT, CompareT> result; // This must work but you have to change the compare operators.
  bool found = false;
  node *n = mRoot;
  if ((val  > mRoot->data.first))
  {
    while (n != NULL)
    {
      if (n->data.first >= val)
      {
        found = true;
        break;
      }
      n = n->right;
    }
    if(found)
    {
      n->parent->right = n->left;
      result.mRoot = n;
      result.mRoot->left = NULL;
      result.mRoot->parent = NULL;
    }
  }
  else if (val < mRoot->data.first)
  {

    while (n != NULL)
    {
      if (n->data.first < val)
      {
        found = true;
        break;
      }
      n = n->left;
    }

    if(found)
    {
      node *tmp = n;
      n->parent->left = NULL;
      result.mRoot = mRoot;
      mRoot = tmp;
      result.mRoot->parent = NULL;
    }
  }
  else
  {
    node *tmp = mRoot->left;
    mRoot->left = NULL;
    result.mRoot = mRoot;
    mRoot = tmp;
    result.mRoot->parent = NULL;
  }

  return result;
}

#endif
