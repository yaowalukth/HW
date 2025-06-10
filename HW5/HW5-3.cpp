/*
    จงแปลงตัวเลขที่ผู้ใช้ป้อนเข้ามาให้กลายเป็นตัวหนังสือ เช่น ผู้ใช้กรอกว่า 3 ให้แสดงผลลัพธ์ว่า Three
    (กำหนดให้สามารถกรอกเลขได้แค่ 0 ถึง 30 เท่านั้น)
    (กำหนดให้ใช้คำสั่ง switch case เท่านั้น)
    
    Test case:
        User input :
            12
    Output:
        Twelve

    Test case:
        User input :
            4
    Output:
        Four
*/
#include <stdio.h>
int main() {
    int num ;
    printf( "Enter your number : " ) ;
    scanf( "%d", &num ) ;
    switch( num ) {
        case 1 : printf( "one" ) ;
            break ;
        case 2 : printf( "two" ) ;
            break ;
        case 3 : printf( "tree" ) ;
            break ;
        case 4 : printf( "four" ) ;
            break ;
        case 5 : printf( "five" ) ;
            break ;
        case 6 : printf( "six" ) ;
            break ;
        case 7 : printf( "seven" ) ;
            break ;
        case 8 : printf( "eight" ) ;
            break ;
        case 9 : printf( "nine" ) ;
            break ;
        case 10 : printf( "ten" ) ;
            break ; 
        case 11 : printf( "eleven" ) ;
            break ;
        case 12 : printf( "twelve" ) ;
            break ;
        case 13 : printf( "thirteen" ) ;
            break ;
        case 14 : printf( "fourteen" ) ;
            break ;
        case 15 : printf( "fifteen" ) ;
            break ;
        case 16 : printf( "sixteen" ) ;
            break ;
        case 17 : printf( "seventeen" ) ;
            break ;
        case 18 : printf( "eightteen" ) ;
            break ;
        case 19 : printf( "nineteen" ) ;
            break ;
        case 20 : printf( "tenteen" ) ;
            break ; 
        case 21 : printf( "twenty-one" ) ;
            break ;
        case 22 : printf( "twenty-two" ) ;
            break ;
        case 23 : printf( "twenty-tree" ) ;
            break ;
        case 24 : printf( "twenty-four" ) ;
            break ;
        case 25 : printf( "twenty-five" ) ;
            break ;
        case 26 : printf( "twenty-six" ) ;
            break ;
        case 27 : printf( "twenty-seven" ) ;
            break ;
        case 28 : printf( "twenty-eight" ) ;
            break ;
        case 29 : printf( "twenty-nine" ) ;
            break ;
        default : printf( "thirty" ) ;
            break ; 
        }
    return 0 ;
}
