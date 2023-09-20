#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sort_song(vector<vector<string>> &v)
{
    sort(v.begin(),v.end(),[](auto lhs,auto rhs){
        if(lhs[1] != rhs[1])  return lhs[1] < rhs[1];
        if(lhs[2] != rhs[2])  return lhs[2] < rhs[2];
        if(lhs[0] != rhs[0])  return lhs[0] < rhs[0];
        return true ;
    });
    return  ;
}

int main()
{
    vector<vector<string>> v = {{"HoshiShong", "Fumi", "Urusei Album"},
                                {"Aum No Song", "Fumi", "Urusei Album"},
                                {"Baka Song", "CKo", "BiBiAlbum"},
                                {"Aoi Song", "CKo", "AiAiAlbum"},
                                {"BumBum Song", "Fumi", "Annivesary Album"}};

    sort_song(v);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}