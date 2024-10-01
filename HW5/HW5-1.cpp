/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    
    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/
#include <stdio.h>

int main() {

    char a, b, c, d ;
    printf( "Plese enter Enter 4 letters : " ) ;
    
    if( scanf( "%c %c %c %c", &a, &b, &c, &d ) == 4 ) {
        printf( "Result : %c %c %c %c \n", d, c, b, a ) ;
    } else {
        printf( "Information is incomplete. \n" ) ;
    }//end if-else
    return 0 ;
}//end function
