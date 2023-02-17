#include <stdio.h>

void mergesort( int t[], int k ) ;
void merge( int *u, int m, int *v, int n, int *t ) ;

int main() {
  int data[ 7 ] = { 4, 6, 1, 2, 5, 1, 8 } ;
  int n = 7 ;
  mergesort( data, n ) ;
  for( int i = 0 ; i < n ; i++ ) printf( "%d ", data[ i ] ) ;
  return 0 ;
}//end function

void mergesort( int t[], int k ) {
  // เขียนคำสั่ง
}

void merge( int *u, int m, int *v, int n, int *t ) {
  // เขียนคำสั่ง
}