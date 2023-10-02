#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    T* ans = new T[mSize]();
    for(int i=0;i<mSize;i++)
    {
        ans[i] = mData[i];
    }
    delete(mData);
    mData = ans ;
    mCap = mSize;
    // std::cout << &mData << " " << &ans ;
    // delete[] ans;
}

#endif
