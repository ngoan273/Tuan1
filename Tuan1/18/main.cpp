#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   float x1,y1,x2,y2,khoangcach;
   cout << "Hoanh do diem 1: ";
   cin >> x1 ;
   cout << "Tung do diem 1: ";
   cin >> y1;
   cout << "Hoanh do diem 2: ";
   cin >> x2;
   cout << "Tung do diem 2: ";
   cin >> y2;
   khoangcach=pow((x1-x2),2) + pow((y1-y2),2);
   cout << "Khoang cach giua 2 diem la :" << khoangcach;
}
