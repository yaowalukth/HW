#include <stdio.h>

int main() {

    char FirstN[10] , Lastn[10] ;
    printf( "Input Name = " ) ;
    scanf( "%s %s" , &FirstN , &Lastn ) ;
    printf( "------------------------------ \n" ) ;
    printf( "Your name is %s %s" , FirstN , Lastn ) ;
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
