#include <stdio.h>

int KnapsackBT( int *w, int *v, int n, int wx, int i, int *x ) ;

int main() {
  int n = 5, wx = 11 ;
  int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
  int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
  int *x, vx ;
  x = new int[ n ] ;
  vx = KnapsackBT( w, v, n, wx, 0, x ) ;
  printf( "Value = %d ", vx ) ;
  for( int i = 0 ; i < n ; i++ ) 
    printf( "%d ", x[ i ] ) ;
  return 0 ;
}//end function

int KnapsackBT( int *w, int *v, int n, int wx, int i, int *x ) {
  // เขียนคำสั่ง
}