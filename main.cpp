#include <iostream>
using namespace std;

class Rectangle {
  private:
    int length;
    int width;
  public:
    void setLength(int len);
    void setWidth(int wi);
    int calcArea();

    int getLength(); // getter
    int getWidth();
    int getcalcArea();
};
// Setters
// private
// . dataType property
// void setPropert(dataType var) {
// property

void Rectangle::setLength(int len) {
  if(len > 0)
    length = len;
  else
    length = 10;
}
void Rectangle::setWidth(int wi) {
  if(wi > 0)
    width = wi;
  else
    width = 10;
}

// can you see why length and width
// are not parameters below
int Rectangle::calcArea() {
  return length * width;
}

int Rectangle::getLength() {
  return length;
}
int Rectangle::getWidth() {
  return width;
}

int main() {
  Rectangle r1, r2;
  r1.setWidth(-5);
  r1.setLength(20);
  r2.setWidth(5);
  r2.setLength(10);
  cout << "R1 Area " << r1.calcArea()<< endl;
  cout << "R2 Area " << r2.calcArea() << endl;
  cout << r1.getLength() << endl;
  return 0;

}
