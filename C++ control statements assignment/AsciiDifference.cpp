#include <iostream>
using namespace std;
int main()
{
    char a, b;
    cout << "Enter 1st character : ";
    cin >> a;
    cout << "Enter 2nd character : ";
    cin >> b;
    int x = (int)a;
    int y = (int)b;
    int z = x - y;
    cout << "The difference between ASCII of the characters is : " << z;
    return 0;
}