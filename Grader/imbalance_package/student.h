// Your code here
void check(int &mn, node *n, int &ans)
{
    if (n == NULL)
    {
        return;
    }

    // if(n)
    int rs, ls;
    if (n->right == NULL)
    {
        // std::cout << "a\n";
        rs = -1;
    }
    else
    {
        rs = max_level(n->right);
    }
    if (n->left == NULL)
    {
        // std::cout << "b\n";
        ls = -1;
    }
    else
    {
        ls = max_level(n->left);
    }
    int diff = ls - rs;
    // std::cout << n->data.first << " " << max_level(n->right) << " " << max_level(n->left) << '\n';
    // std::cout<<n->data.first << " " << diff << "\n";
    if (diff < 0)
    {
        diff *= -1;
    }
    if (diff > mn)
    {
        mn = diff;
        ans = n->data.first;
    }
    else if (diff == mn)
    {
        if (n->data.first < ans)
        {
            ans = n->data.first;
        }
    }
    check(mn, n->left, ans);
    check(mn, n->right, ans);
}

int max_level(node *n)
{
    if (n == NULL)
    {
        return -1;
        // std::cout << "sadadsd";
    }
    return 1 + std::max(max_level(n->left), max_level(n->right));
}

KeyT getValueOfMostImbalanceNode()
{
    // Your code here
    int mn = -10;
    int ans = 10000000;
    check(mn, mRoot, ans);
    return ans;
}
