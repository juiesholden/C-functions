#include <iostream>
using namespace std;

float computeArea(float width, float height); // prototype

int main() {
 float area = computeArea(20, 4);
 cout << "Area is " << area;
}

float computeArea(float width, float height) {
  return (width * height);
}