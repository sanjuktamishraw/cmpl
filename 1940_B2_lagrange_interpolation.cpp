#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	 float x[100], y[100], xp, yp=0, p;
	 int i,j,n;

	 /* Input Section */
	 cout<<"Enter number of data: ";
	 cin>>n;
	 cout<<"Enter data:"<< endl;
	 for(i=1;i<=n;i++)
	 {
		  cout<<"x["<< i<<"] = ";
		  cin>>x[i];
		  cout<<"y["<< i<<"] = ";
		  cin>>y[i];
	 }
	 cout<<"Enter interpolation point: ";
	 cin>>xp;

	 /* Implementing Lagrange Interpolation */
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 cout<< endl<<"Interpolated value at "<< xp<< " is "<< yp;

	 return 0;
}
/*
Enter number of data: 5
Enter data:
x[1] = 5    x[2] = 7    x[3] = 11       x[4] = 13       x[5] = 17
y[1] = 150  y[2] = 392  y[3] = 1452     y[4] = 2366    y[5] = 5202

Enter interpolation point: 9
Interpolated value at 9 is 810
*/
