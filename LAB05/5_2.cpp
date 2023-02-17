#include <iostream>
#include <cstring>

struct studentNode {
  char name[20] ;
  int age ;
  char sex ;
  float gpa ;
  struct studentNode *next ;
} ;

void ShowAll( struct studentNode **walk ) ;
void InsNode( struct studentNode **walk, const char *name,int age, char sex, float gpa ) ;
void GoNext( struct studentNode ***walk ) ;
void DelNode( struct studentNode **walk ) ;


int main() {
  struct studentNode *start, **now ;
  start = NULL ; now = &start ;
  InsNode( now, "one", 6, 'M', 3.11 ) ; ShowAll( &start ) ;
  InsNode( now, "two", 8, 'F', 3.22 ) ; ShowAll( &start ) ;
  GoNext( &now ) ;
  InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( &start ) ;
  InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( &start ) ;
  GoNext( &now ) ;
  DelNode( now ) ; ShowAll( &start ) ;
  return 0 ;
}//end function

void showAll( struct studentNode **walk ) {
  while( *walk != NULL ) {
    printf( "%s ", (*walk)->name ) ;
    walk = &(*walk)->next ;
  }//end while
  printf( " " ) ;
}//end function

void InsNode( struct studentNode **walk, const char *name,int age, char sex, float gpa ) {
  //เขียนคำสั่ง
}

void GoNext( struct studentNode ***walk ) {
  //เขียนคำสั่ง
}

void DelNode( struct studentNode **walk ) {
  //เขียนคำสั่ง
}