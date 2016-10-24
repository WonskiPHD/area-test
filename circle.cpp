# include <iostream>

using namespace std;

int main( )
{
    float PI = 3.1416;                // variables can be initialized during declaration
    float rad;
    cout<< "Enter the radius: "<<endl;
    cin>>rad;
    cout<< "Area of the circle is: "<< PI * rad * rad;
    return 0;
}