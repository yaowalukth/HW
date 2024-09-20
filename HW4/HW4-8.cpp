/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/
#include <stdio.h>

int main() {

    char hex[20] ;
    int index = 0 ;

    printf( "Plese enter your hexadecimal : " ) ;
    scanf( "%s", hex ) ;
    printf( "Your hexadecimal is : %s \n", hex ) ;

    printf( "Binary equivalent : " ) ;
    while( hex[index] != '\0' ) {
        if( hex[index] == '0' ) {
            printf( "0000" ) ;
        }else if( hex[index] == '1' ) {
            printf( "0001" ) ;
        }else if( hex[index] == '2' ) {
            printf( "0010" ) ;
        }else if( hex[index] == '3' ) {
            printf( "0011" ) ;
        }else if( hex[index] == '4' ) {
            printf( "0100" ) ;
        }else if( hex[index] == '5' ) {
            printf( "0101" ) ;
        }else if( hex[index] == '6' ) {
            printf( "0110" ) ;
        }else if( hex[index] == '7' ) {
            printf( "0111" ) ;
        }else if( hex[index] == '8' ) {
            printf( "1000" ) ;
        }else if( hex[index] == '9' ) {
            printf( "1001" ) ;
        }else if( hex[index] == 'A' ) {
            printf( "1010" ) ;
        }else if( hex[index] == 'B' ) {
            printf( "1011" ) ;
        }else if( hex[index] == 'C' ) {
            printf( "1100" ) ;
        }else if( hex[index] == 'D' ) {
            printf( "1101" ) ;
        }else if( hex[index] == 'E' ) {
            printf( "1110" ) ;
        }else if( hex[index] == 'F' ) {
            printf( "1111" ) ;
        }
        index ++ ;
    }
    return 0 ;
}
