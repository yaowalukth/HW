/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/

#include <stdio.h>

int main() {

    int day = 0 ;
    printf( "Input day : " ) ; 
    scanf( "%d", &day ) ;
    printf( "%d day = %d", day , day * 86400 ) ;
    return 0 ;
}
