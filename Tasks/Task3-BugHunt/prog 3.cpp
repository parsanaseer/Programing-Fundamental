/*
*Lab    :  Programming Fundamental
*Name   :  Parsa Naseer
*Rollno :  2026-SE-30
*Date   :  11/24/26
*Purpose:  Print Student profile card
*/

#include <iostream>
using namespace std;                             /* BUG1: missing terminator after std*/
int main()
{ 
cout << "Welcome to the lab!" << endl;          /* BUG2: missing terminator*/
cout << "Today we learn \"C++\"." << endl;     /*BUG3:Capital cout*/
cout << "Files are in C:\\Lab01" << endl;     /*BUG4:mising one backslash for file path*/
cout << "Bye!" << endl;                      /*BUG5:missing end quote*/
return 0;
}
