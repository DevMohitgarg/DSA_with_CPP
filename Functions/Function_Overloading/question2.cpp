#include <bits/stdc++.h>
using namespace std;

double calculateArea(double radius) {
    return M_PI * radius * radius; 
}

double calculateArea(double length, double width) {
    return length * width;
}

double calculateArea(double base, double height,bool b) {
    return 0.5 * base * height; 
}

int main() {
    double circleRadius = 5.0;
    double rectangleLength = 10.0;
    double rectangleWidth = 4.0;
    double triangleBase = 6.0;
    double triangleHeight = 7.0;
    bool b= true;

    cout << "Area of the circle: " << calculateArea(circleRadius) << endl;
    cout << "Area of the rectangle: " << calculateArea(rectangleLength, rectangleWidth) << endl;
    cout << "Area of the triangle: " << calculateArea(triangleBase, triangleHeight) << endl;

    return 0;
}
