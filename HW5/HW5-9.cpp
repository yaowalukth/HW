/*
    ผู้ใช้กรอกพิกัดจำนวน 2 จุดลงในโปรแกรม ให้คุณเขียนโปรแกรมคำนวณหาจุดกึ่งกลางของ 2 จุดนี้

    Test case:
        Input A Point :
            2 2
        Input B Point :
            4 4

    Output:
        Mid Point of A and B is ( 3.0, 3.0 )

    Test case:
        Input A Point :
            -3 9
        Input B Point :
            4 -19

    Output:
        Mid Point of A and B is ( 0.5, -5.0 )

    Test case:
        Input A Point :
            6 -8
        Input B Point :
            3 3

    Output:
        Mid Point of A and B is ( 4.5, -2.5 )
*/
#include <stdio.h>
int main() {
    float a , b , c , d ;
    float num1 , num2 ;
    printf( "Input A Point : " ) ;
    scanf( "%f %f", &a , &b ) ;
    printf( "Input B Point : " ) ;
    scanf( "%f %f", &c , &d ) ;
    num1 = ( a + c ) / 2 ;
    num2 = ( b + d ) / 2 ;
    printf( "Mid Point of A and B is ( %.1f , %.1f )", num1 , num2 ) ;
    return 0 ;
}
