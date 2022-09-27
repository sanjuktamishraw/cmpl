#include <bits/stdc++.h>
#define ll long long
using namespace std;
double func(double x){
    return (x*x*x)-(x*x)+x-7;
}
double func2(double x){
    return (3*x*x)-(2*x)+1;
}
void newtonrapson (double a,int N,double e){
     int step = 1;
     double fa = func(a);
     double ga;
     while(abs(fa)>e){
        fa = func(a);
        ga = func2(a);
        if(ga == 0){
            cout << "Division by zero\n";
            break;
        }
        double b = a - (fa/ga);
        printf("step=%d\ta=%lf\tf(a)= %lf\n",step,a,fa);
        a = b;
        if(step>N){
            printf("not convergent\n");
            break;
        }
        else{
          step = step + 1;
        }
     }
      cout << "Root  =   " << a  <<  endl;
}
int main()
{
   double a,N,e;
   cout << "Enter initial guess : ";
   cin >>  a ;
   cout << endl;
   cout << "Tolarable error : ";
   cin >> e ;
   cout << endl;
   cout << "Enter maximum amount of step :  ";
   cin >> N ;
   cout << endl;
   newtonrapson(a,N,e);

}
