#include <iostream>
using namespace std;

int main() {
    float length, width, area, perimeter;

    
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    
    area = length * width;
    perimeter = 2 * (length + width);

    
    cout << "Area of Rectangle = " << area << endl;
    cout << "Perimeter of Rectangle = " << perimeter << endl;

    return 0;
}

