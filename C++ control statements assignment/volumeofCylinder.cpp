#include <iostream>
using namespace std;
int main()
{
    float r, h, pi = 3.1415, volume;
    cout << "Enter the radius : ";
    cin >> r;
    cout << "Enter the height : ";
    cin >> h;
    volume = pi * r * r * h;
    cout << "The volume of cylinder is : " << volume;

    return 0;
}