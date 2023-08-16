#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    vector<int> v1 = {0, 10, 20 ,30, 40, 50, 60, 70, 80};
    vector<float> v2 = {0.2, -4, 0.13, 3.14, 2.73};
    vector<int>::iterator it1 = v1.begin() + 3;
    vector<float>::iterator it2 = v2.end();

    //getting value at iterator by using "*" operator
    cout << *it1 << endl;
    cout << *(it2-1) << endl;
    cout << *it1+2 << endl;

    //iterator arithmetics
    vector<int>::iterator it3 = it1 + 2;
    cout << "data at it3: " << *it3 << endl;
    cout << "different of it3,it1: " << (it3 - it1) << endl;
    vector<float>::iterator it4 = v2.end();
    it4--;
    cout << "data at it4: " << *it4 << endl;
    //this cannot be done
    //cout << (it2 - it1) << endl;

    // Iterate all element by iterator
    cout << "----v1----" << endl;

    auto it = v1.begin();
    while (it < v1.end() )
    {
        cout << it - v1.begin() << ": " << *it << endl;
        it++;
    }

    cout << "----v2----" << endl;
    for (auto it = v2.begin(); it < v2.end(); it++)
    {
        cout << it - v2.begin() << ": " << *it << endl;
    }

    // Some functions that use iterator
    auto it11 = min_element(v1.begin(),v1.end());
    auto it22 = max_element(v2.begin()+2,v2.end());

    cout << *it11 << endl;
    cout << *it22 << endl;


    vector<string> p1 = {"somchai", "somying", "somsak"};
    //range-based for loop
    for (string x : p1) {
    // x is a copy of each element in v1
    cout << x << ", ";
    }
    cout << endl;

    //using reference
    // x is THE element of v1, meaning we can modify it
    for (auto &x : p1) { x.replace(0,4,"--"); }
    for (auto &x : p1) { cout << x << " ";}
    cout << endl;
}
