// #include "list.h"

void splitList(list<T> &list1, list<T> &list2)
{
    // Add your code here
    if(mSize == 0)return ;
    int sz = mSize / 2;
    if (mSize % 2 != 0)
        sz++;
    auto it1 = begin();
    auto it2 = begin();
    for(int i=0;i<sz;i++)
    {
        it1++;
        it2++;               // at the end it will be at the begining of the node that we want to split to list2;
    }

    it1--;

    // list1 
    node *tmp1 = list1.mHeader;
    tmp1->prev->next =  mHeader->next;
    mHeader->next->prev = tmp1->prev;             // connect last node of ls1 to first node of this.

    tmp1->prev = it1.ptr ;
    it1.ptr->next = tmp1;
    list1.mSize += sz;


    // list 2
    node *tmp2 = list2.mHeader;
    tmp2->prev->next = it2.ptr;
    it2.ptr->prev = tmp2->prev;

    tmp2->prev = mHeader->prev;
    mHeader->prev->next = tmp2;
    list2.mSize += mSize - sz;
    
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0 ;
}
