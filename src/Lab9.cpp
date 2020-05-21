#include <iostream>
#include <math.h>

using namespace std;


int main()
{
   double Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
   double d1,d2,d3,d4;

   setlocale(LC_ALL, "Ukrainian");

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

   d1=sqrt(pow((Ax-Bx),2) + pow((Ay-By),2)); // Дві сторони
   d2=sqrt(pow((Bx-Cx),2) + pow((By-Cy),2));
   d3=sqrt(pow((Ax-Cx),2) + pow((Ay-Cy),2)); // Дві діагоналі
   d4=sqrt(pow((Bx-Dx),2) + pow((By-Dy),2));

   if (d1 == d2 && d3 == d4){
	   cout << "Це є квадрат" << endl;
   }
   else {
	   cout << "Це не є квадрат" << endl;
   }

	return 0;
}
