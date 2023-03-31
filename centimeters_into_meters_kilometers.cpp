#include <iostream>

using namespace std;

int main() {
  float centimeter, meter, kilometer;

  cout << "Enter Centimeter: ";
  cin >> centimeter;

  meter = centimeter * 0.01;
  kilometer = centimeter * 0.00001;

  cout << "In Meter is: " << meter << endl;
  cout << "In kilometer" << kilometer << endl;
  return 0;
}