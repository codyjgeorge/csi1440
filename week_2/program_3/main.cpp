/*
Author: Cody George
Assignment Title: Program 3
Assignment Description: Basics of Pointers with Arrays
Due Date: 9/3/25
Date Created: 9/2/25
Date Last Modified: 9/3/25
*/

#include <iostream>

using namespace std;

int main() {

  int data[25];
  int *p = data;

  cout << "Enter 25 integers: " << endl;
  for (int i = 0; i < 25; i++) {
    cin >> *(p + i);
  }
  cout << endl;
  cout << "Original values: " << endl;
  for (int i = 0; i < 25; i++) {
    cout << *(p + i) << " ";
  }
  cout << endl;
  cout << "Modified values: " << endl;
  for (int i = 0; i < 25; i++) {
    *(p + i) = 2 * *(p + i);
    cout << *(p + i) << " ";
  }
  return 0;
}
