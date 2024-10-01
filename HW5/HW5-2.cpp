/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>

int main() {

    int Input1, Input2, Input3 ;
    printf( "Enter your number : " ) ;
    scanf( "%d", &Input1 ) ;

    printf( "Enter your number : " ) ;
    scanf( "%d", &Input2 ) ;

    printf( "Enter your number : " ) ;
    scanf( "%d", &Input3 ) ;

    int a, b, c ;
    if( Input1 > Input2 && Input1 > Input3 ) {
        a = Input1 ;
        if( Input2 > Input3 ) {
            b = Input2 ;
            c = Input3 ;
        } else {
            b = Input3 ;
            c = Input2 ;
        }//end if
    } else if( Input2 > Input1 && Input2 > Input3 ) {
        a = Input2 ;
        if( Input1 > Input3 ) {
            b = Input1 ;
            c = Input3 ;
        } else {
            b = Input3 ;
            c = Input2 ;
        }//end if
    } else {
        a = Input3 ;
        if( Input1 > Input2 ) {
            b = Input1 ;
            c = Input2 ;
        } else {
            b = Input2 ;
            c = Input1 ;
        }//end if
    }//end if-else
    printf( "%d %d %d", a, b ,c ) ;
    return 0 ;
}//end function
