#include <stdio.h>

int main() {

    char FN[10] ;
    char LN[10] ;
    printf( "Input Your name : " ) ;
    scanf( "%s" ,&FN) ;
    printf( "Input your Lastname : " ) ;
    scanf( "%s" ,&LN) ;
    printf( "----------------------------------- \n" ) ;
    printf( "Your name is %s %s \n" , FN , LN ) ;
    printf( "Thank you \n" ) ;
    return 0 ;
}
/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
