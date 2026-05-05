// This program displayes perimeter
// and area of a rectangle.
#include <iostream>
using namespace std;

// establish functions.
void getLengthWidth (double& length, double& width)
{
    do{
        cout << "Enter length (greather than 0):" ;
        cin >> length;

        if (length <=0) {
            cout << "Error! Enter a number greater than 0. \n";
        }

    } while (length <=0);//;;;

    
}
int main()

{ 
 

    return 0;

}