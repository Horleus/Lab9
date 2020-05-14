#include <iostream>
#include <math.h>

using namespace std;


int main()
{
   double Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
   double d1,d2;

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

   d1=sqrt(pow((Ax-Bx),2) + pow((Ay-By),2));
   d2=sqrt(pow((Bx-Cx),2) + pow((By-Cy),2));


	return 0;
}
