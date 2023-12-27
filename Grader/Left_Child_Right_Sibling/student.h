// You may include library here







int depth(node *n)
{
  // Write Code Here
    if(n == NULL){return -1;}
    int lc = 0,rsb = 0;
    if(n->left_child != NULL)
    {
        lc = 1 + depth(n->left_child);
    }
    if(n->right_sibling != NULL)
    {
        rsb = depth(n->right_sibling);
    }
    return std::max(lc,rsb);
}
