#include <iostream>
#include <cstring>

void go( int **p, int *z ) ;

int main() {
  int *a, b = 10, c = 20 ;
  go( &a, &b ) ;
  printf( "%d %p %p", *a, a, &a ) ;
  go( &a, &c ) ;
  printf( "%d %p %p", *a, a, &a ) ;
  return 0 ;
}//end function

void go( int **p, int *z ) {
  //เขียนคำสั่ง
}