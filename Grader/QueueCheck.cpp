#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int mFront, mSize, mCap, last, correction, ans = 10`000`001;
        cin >> mFront >> mSize >> mCap >> last >> correction;
        bool result = true;

        if (correction == 1)
        {
            if ((mFront + mSize) % mCap != last)
            {
                result = false;
                ans = (mCap + last - mSize) % mCap; // Might be right now
            }
        }
        else if (correction == 2)
        {
            if (mSize > mCap)
            {
                ans = mCap;
                result = false;
            }
            if (last == mFront && mSize != mCap)
            {
                ans = min(ans, mCap);
                result = false;
            }
            else if (mSize != (mCap + last - mFront) % mCap && last != mFront)
            {
                ans = min(ans, (mCap + last - mFront) % mCap); // this is the case where mFront is behind last.
                result = false;
            }
        }
        else if (correction == 3)
        {
            if (mFront == last && mCap != mSize)
            {
                ans = mSize;
                result = false;
            }
            else if (mFront < last && mCap <= last)
            {
                ans = min(ans, last + 1);
                result = false;
            }
            else if (mFront > last && mCap <= mFront)
            {
                ans = min(ans, mFront + 1);
                result = false ;
            }
            else if(mSize > mCap)
            {
                ans = mSize;
                result = false;
            }
        }
        else if (correction == 4)
        {
            if ((mFront + mSize) % mCap != last)
            {
                result = false;
                ans =
            }
        }

        if (result)
        {
            cout << "OK ";
        }
        else
        {
            cout << "WRONG ";
        }
        if (correction != 0)
        {
            cout << ans << '\n';
        }
    }

    return 0;
}