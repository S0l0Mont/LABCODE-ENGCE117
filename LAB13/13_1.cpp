#include <stdio.h>

int *KnapsackDP( int *w, int *v, int n, int wx ) ;

int main() {
  int n = 5 , wx = 11 ;
  int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
  int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
  int *x ;
  x = KnapsackDP( w, v, n, wx ) ;
  for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
  return 0 ;
}//end function

int *KnapsackDP( int *w, int *v, int n, int wx ) {
  // เขียนคำสั่ง
}