#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Letter
{
public:
    string name;
    string address;
    string province;
    string district;
    int zip;
    bool operator<(const Letter &other) const
    {
        //**Begin Insert**
        // if (this->zip == other.zip)
        // {
        //     if (this->address == other.address)
        //     {
        //         if(this->name == other.name)
        //         {
        //             return this->district < other.province;
        //         }
        //         return this->name < other.name;
        //     }
        //     else
        //     {
        //         return this->address < other.address;
        //     }
        // }
        // return this->zip < other.zip;
        if (zip != other.zip)
            return zip < other.zip;
        if (address != other.address)
            return address < other.address;
        if (name != other.name)
            return name < other.name;
        return district < other.district; 
        //**End Insert**
    }
};
class ZipInfo
{
public:
    int zip;
    string province;
    string district;
};
void correctZipAndSortLetters(vector<ZipInfo> &zipinfo, vector<Letter> &letters)
{
    //**Begin Insert**
    // for (int i = 0; i < letters.size(); i++)
    // {
    //     for (int j = 0; j < zipinfo.size(); j++)
    //     {
    //         if(letters[i].province == zipinfo[j].province && letters[i].district == zipinfo[j].district)
    //         {
    //             letters[i].zip = zipinfo[j].zip;
    //             // cout << 1 << '\n';
    //             break;
    //         }
    //     }
    // }
    map<string, int> zp;
    for (auto e : zipinfo)
    {
        string temp = e.district + " " + e.province;
        zp[temp] = e.zip;
    }

    for (int i = 0; i < letters.size(); i++)
    {
        string temp = letters[i].district + " " + letters[i].province ;
        if(zp.find(temp) != zp.end())
        {
            letters[i].zip = zp[temp];
        }
    }

    sort(letters.begin(), letters.end());
    //**End Insert**
}
int main()
{
    int nzip;
    cin >> nzip;
    vector<ZipInfo> zipinfo;
    for (int i = 0; i < nzip; i++)
    {
        ZipInfo z;
        cin >> z.zip >> z.district >> z.province;
        zipinfo.push_back(z);
    }
    int n;
    cin >> n;
    vector<Letter> letters;
    for (int i = 0; i < n; i++)
    {
        Letter l;
        cin >> l.name >> l.address >> l.district >> l.province >> l.zip;
        letters.push_back(l);
    }
    correctZipAndSortLetters(zipinfo, letters);
    for (auto &l : letters)
    {
        cout << l.name << " " << l.address << " " << l.district << " " << l.province << " " << l.zip << endl;
    }
}