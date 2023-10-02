#include <iostream>

int main()
{
    int n,mCap = 1 ; 
    std::cin >> n ; 
    if(n == 1 )
    {
        std::cout << 0 ;
    }
    while(n>mCap){
        mCap *= 2 ;
        if(n <= mCap)
        {
            std::cout << mCap-n;
        }
    }
    return 0; 
}