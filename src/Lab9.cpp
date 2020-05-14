#include <iostream>
#include <math.h>

using namespace std;


int main()
{
   double Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;

   cout << "A(x,y)";
   cin >> Ax >> Ay;
   cout << endl;

   cout << "B(x,y)";
      cin >> Bx >> By;
      cout << endl;

   cout << "C(x,y)";
      cin >> Cx >> Cy;
      cout << endl;

      cout << "D(x,y)";
         cin >> Dx >> Dy;
         cout << endl;

    x1=Ax;
    x2=Bx;
    y1=Ay;
    y2=By;

   d=sqrt((x1-x2)^2+(y1-y2)^2);



	return 0;
}
