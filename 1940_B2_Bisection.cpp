#include <bits/stdc++.h>
using namespace std;
double eq(double x)
{
  return pow(x, 3) - pow(x, 2) + x - 7.0;
}
int main()
{
  double i=0;
  for(;;i++){
        double a=eq(i);
        double b=eq(i+1);
        if(a*b<0){
            break;
        }
  }
    double e=0.0001;
    double a=(double)i;
    double c=a;
    double b=(double)i+1;
    while((b-a)>=e)
    {
        c = (a+b)/2;
        cout << "a=" << a << "     " << "b=" << b << "     " << "c=" << c << "     "<< "fc=" << eq(c) << "\n";
        if (eq(c) == 0.0)
            break;
        else if (eq(c)*eq(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}
