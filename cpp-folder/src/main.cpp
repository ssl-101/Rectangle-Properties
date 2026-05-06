// This program displayes perimeter
// and area of a rectangle.
#include <iostream>
using namespace std;

// establish functions.
void getLengthWidth (double& length, double& width)
{
    do{
        cout << "Enter length (greater than 0):" ;
        cin >> length;

        if (length <=0) {
            cout << " Error! Enter a number greater than 0: \n";
        }

    } while (length <=0);
    do {
        cout << " Enter width ( greater than 0 ): " ;
         cin >> width ;

         if (width <=0) {
            cout << "Error! Enter a number greater than 0 : \n";
         }
    } while (width <= 0);
      
}
// calculation functions

double calcPerimeter ( double length, double width)
{
    return 2 * (length + width);
}
double calcArea ( double length, double width)
{
    return length * width ;
}
void displayProperties (double perimeter, double area)
{
    cout<< " Perimeter: "  << perimeter << endl;
    cout << " Area: " << area << endl;
}
int main()

{ 
 

    return 0;

}