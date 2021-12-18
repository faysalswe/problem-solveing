#include <iostream>
using namespace std;

int main() {
  string name, designation;

  cout << "Enter your name and designation: ";

  cin >> name >> designation;

  cout << "Welcome " << name << "! you are a " << designation;

  return 0;
}