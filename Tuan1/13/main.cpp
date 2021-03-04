#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x,y,khoangcach;
    cout << "Nhap tung do la: ";
    cin >> x ;
    cout << "Nhap hoanh do la: ";
    cin >> y;
    khoangcach = sqrt(x*x+y*y);
    cout << "Khoang cach la : " << khoangcach << endl;
    return 0;
}
