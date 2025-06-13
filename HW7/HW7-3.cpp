/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103
*/
#include <stdio.h>
int main() {
    int num , i = 1 , sum = 0, number = 9 ;
    printf( "Enter number : " ) ;
    scanf( "%d", &num ) ;
    while( i < num ) {
        if( i == 1 ) {
            printf( "Series = %d ", number ) ;
            sum += number ;
        }
        number = number * 10 + 9 ;
        printf( "+ %d ", number ) ;
        sum += number ;
        i ++ ;
    }
    printf( "\n" ) ;
    printf( "Sum = %d", sum ) ;
    return 0 ;
}
