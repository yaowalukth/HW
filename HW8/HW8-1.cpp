#include <stdio.h>
int main() {
    int Sudoku[9][9] = {{ 5, 3, 4, 6, 7, 8, 9, 1, 2 },
                        { 6, 7, 2, 1, 9, 5, 3, 4, 8 },
                        { 1, 9, 8, 3, 4, 2, 5, 6, 7 },
                        { 8, 5, 9, 7, 6, 1, 4, 2, 3 },
                        { 4, 2, 6, 8, 5, 3, 7, 9, 1 },
                        { 7, 1, 3, 9, 2, 4, 8, 5, 6 },
                        { 9, 6, 1, 5, 3, 7, 2, 8, 4 },
                        { 2, 8, 7, 4, 1, 9, 6, 3, 5 },
                        { 3, 4, 5, 2, 8, 6, 1, 7, 9 }
                    } ;
    bool result = true ;
    for( int i = 0 ; i < 9 ; i ++ ) {
        bool num[10] = { false } ; // เพื่อติดตามว่าตัวเลขใดเคยพบแล้วในแถวนี้
        for( int j = 0 ; j < 9 ; j ++ ) { // ตรวจสอบแถว
            int x = Sudoku[i][j] ;
            if( num[x] ) { //เพื่อตรวจสอบว่าเคยพบตัวเลขนี้หรอยัง 
                result = false ;
            }
            num[x] = true ;
        }
        for( int j = 0 ; j < 9 ; j ++ ) { // ตรวจสอบหลัก
            bool num[10] = {false} ;
            for( int i = 0 ; i < 9 ; i ++ ) {
                int x = Sudoku[i][j] ;
                if( num[x] ) {
                    result = false ;
                }
                num[x] = true ;
            }
        }
        int r = 0 ;
        while( r < 9 ) { // ตรวจสอบ 3 x 3
            int c = 0 ;
            while ( c < 9 ) {
                bool num[10] = {false} ;
                for( int i = 0 ; i < 3 ; i ++ ) {
                    for( int j = 0 ; j < 3 ; j ++ ) {
                        int x = Sudoku[ r + i ][ c + j ] ;
                        if( num[x] ) {
                            result = false ;
                        }
                        num[x] = true ;
                    }
                }
                c += 3 ;
            }
            r += 3 ;
        }
        if( result ) {
            printf( "correct\n" ) ;
        } else {
            printf( "Wrong\n" ) ;
        }
    }
    return 0 ;
}
