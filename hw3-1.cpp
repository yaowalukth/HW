//TODO: #8 Arrange this C coding into CODEX pattern.
#include <stdio.h>
#include <conio.h>

int main() {
    int a = 10 ;
    int b = 20 ;
    int c = 30 ; 
    int d = 40 ; 
    printf( "This is %d + %d = %d \n" , a , b , a + b ) ;
    for( int i = 0 ; i < d - 30 ; i++ ) {
        if( i < 30 ) {
            printf( "Here \n" ) ;
            if( i == 8 ) { 
                printf( "This is 8. \n" ) ;
            }
        }
    }
    printf( "ok \n" ) ;
    return 0;
}
