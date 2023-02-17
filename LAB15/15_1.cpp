#include <stdio.h>

double f( double x ) ;
double RootOfFunction( double xl, double xr, double epsilon ) ;

int main() {
  double root ;
  root = RootOfFunction( -1, 10, 0.1 ) ;
  printf( "Root = %.1f", root ) ;
  return 0 ;
}//end function

double f( double x ) {
  return 2 * x - 5 ;
}//end function

double RootOfFunction( double xl, double xr, double epsilon ) {
  // เขียนคำสั่ง
}