#include <iostream>

using namespace std;

void pass_by_value(int x) // x won't change
{
    cout << "a is " << x << endl;
    x = 30;
}

void pass_by_reference(int &x) // x will change
{
    cout << "a is " << x << endl ;
    x = 40;
}

int main()
{
    // IF-ELSE statement
    cout << "IF-ELSE Statement" << '\n' ;
    int age;
    cout << "Please Enter age: " ;
    cin >> age;
    if(age < 5)
    {
        cout << "You are a baby\n"  ;
    }else if(age < 100)
    {
        cout << "You are not old.\n" ;
    }else
    {
        cout <<  "You live long.\n";
    }

    cout << "FOR-LOOP" << '\n' ;

    // FOR-LOOP
    for(int i=0;i<10;i++)
    {
        cout << "i = " << i << '\n' ;
    }

    cout << "WHILE-LOOP" << '\n' ;

    // WHILE-LOOP
    int x = 0 ;
    while(x<10)
    {
        cout << "x = " << x << '\n' ;
        x++ ;
    }

    cout << "Pass by value & reference"  << '\n' ;

    // Pass by value Vs. Pass by reference
    cout << "Pass by Value, direct" << '\n' ;
    pass_by_value(10) ;
    cout << endl;

    int a = 20 ;
    cout << "Pass by value, variable" << '\n' ;
    pass_by_value(a) ;
    cout << "outside PbR function a = " << a << endl ;

    cout << "Pass by reference (pass the variable)" << '\n' ;
    pass_by_reference(a) ;
    cout << "outside PbR function a = " << a <<" (a get modified)" << endl ;

    // The following line cannot be compiled
    // because we need reference (The variable itself)
    // pass_by_reference(20);


    return 0;
}
