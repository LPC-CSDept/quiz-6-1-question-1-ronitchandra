#include <iostream>
#include <iomanip>
using namespace std;


void getinput(int &num1, int &num2)
{
    cin >> num1 >> num2;

}
void getinput(float &num1, float &num2)
{
    cin >> num1 >> num2;

}
void swapTwoValues(int &num1, int &num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}
void swapTwoValues(float &fnum1, float &fnum2)
{
    float tmp = fnum1;
    fnum1 = fnum2;
    fnum2 = tmp;
}
