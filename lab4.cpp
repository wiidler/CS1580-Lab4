// Programmer: Will Weidler
// Student ID: wawq97
// Section: 301
// Date: 2/22/22
// File: lab4.cpp
// Purpose: This program uses template functions to demonstrate its uses with different variable types.

#include <iostream>
using namespace std;

// Description: Swaps the values given by the user based on the type of variable entered in the program. (Integer, Boolean, String)
// Pre: The inputs need to be the value suggested by the cout phrase. (Integer, Boolean, String)
// Post: v1 should always equal the initial v2 and v2 should always equal the initial v1.
template <typename T>
void trick(T & v1, T & v2){
    const T temp = v1;
    v1 = v2;
    v2 = temp;
    return;
}

int main(){
    int userInt1 = 0, userInt2 = 0;
    cout << "Give me 2 integer based Slime souls" << endl;
    cin >> userInt1;
    cin >> userInt2;
    cout << "The soul values are " << userInt1 << " and " << userInt2 << endl;
    cout << "-Performing a trick-" << endl;
    trick(userInt1, userInt2);
    cout << "The soul values are " << userInt1 << " and " << userInt2 << endl;
    cout << endl;

    bool userBool1 = 0, userBool2 = 0;
    cout << "Give me 2 boolean based Slime souls" << endl;
    cin >> userBool1;
    cin >> userBool2;
    cout << "The soul values are " << userBool1 << " and " << userBool2 << endl;
    cout << "-Performing a trick-" << endl;
    trick(userBool1, userBool2);
    cout << "The soul values are " << userBool1 << " and " << userBool2 << endl;
    cout << endl;

    string userStr1 = "", userStr2 = "";
    cout << "Give me 2 string based Slime souls" << endl;
    cin >> userStr1;
    cin >> userStr2;
    cout << "The soul values are " << userStr1 << " and " << userStr2 << endl;
    cout << "-Performing a trick-" << endl;
    trick(userStr1, userStr2);
    cout << "The soul values are " << userStr1 << " and " << userStr2 << endl;

    return 0;
}