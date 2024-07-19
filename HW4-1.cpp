/*
    จงแสดงผลตัวแปรทั้งหมดเรียงลำดับดังนี้ a b c d

    Output:
        10 20.0 Haha a
*/
#include <stdio.h>

int main() {
    int a = 10 ;
    float b = 20 ; 
    char c[] = "Haha" ;//string
    char d = 'a' ; 
    printf( "\n\n" ) ;

    printf( "%d %.1f %s %c",a, b, c, d ) ;
    
    printf ( "\n\n" ) ;
    return 0 ;
}
