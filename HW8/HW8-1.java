package sudoku;
public class Sudoku {

    public static void main(String[] args) {
        int n[][] = {{ 5, 3, 4, 6, 7, 8, 9, 1, 2 },
                     { 6, 7, 2, 1, 9, 5, 3, 4, 8 },
                     { 1, 9, 8, 3, 4, 2, 5, 6, 7 },
                     { 8, 5, 9, 7, 6, 1, 4, 2, 3 },
                     { 4, 2, 6, 8, 5, 3, 7, 9, 1 },
                     { 7, 1, 3, 9, 2, 4, 8, 5, 6 },
                     { 9, 6, 1, 5, 3, 7, 2, 8, 4 },
                     { 2, 8, 7, 4, 1, 9, 6, 3, 5 },
                     { 3, 4, 5, 2, 8, 6, 1, 7, 9 }} ;
        System.out.println("ROW") ;
        for( int i=0 ; i<n.length ; i++ ) {
            boolean num[] = { true, true, true, true, true, true, true, true, true,true } ;
            for( int j=0 ; j<n[i].length ; j++ ) {
                int x ;  
                x = n[i][j] ;
                if( num[x] == true ) {
                    System.out.print(num[x]+" ");
                } else {
                    System.out.print("      ");
                }
                num[x] = false ;
            }
            System.out.println( );
        }
        System.out.println( );
        
        System.out.println("COLLUMN") ;
        for( int j=0 ; j<n.length ; j++ ) {
            boolean num[] = { true, true, true, true, true, true, true, true, true,true } ;
            for( int i=0 ; i<n[j].length ; i++ ) {
                int x ;  
                x = n[i][j] ;
                if( num[x] == true ) {
                    System.out.print(num[x]+" ");
                } else {
                    System.out.print("      ");
                }
                num[x] = false ;
            }
            System.out.println( );
        }
        System.out.println( );
        
        System.out.println("3 X 3") ;
        int r = 0 ;
        while( r < 9 ) {
            int c = 0 ;
            while( c < 9 ) {
                boolean num[] = { true, true, true, true, true, true, true, true, true,true } ;
                for( int i=0 ; i<3 ; i++ ) {
                    for( int j=0 ; j<3 ; j++ ) {
                        int x ;
                        x = n[r + i][c + j] ;
                        if( num[x] == true ) {
                            System.out.print(num[x]+" ");
                        } else {
                            System.out.print("     ");
                        }
                        num[x] = false ;
                    }
                    System.out.println( );
                }
                c += 3 ;
                System.out.println( );
            }
            r += 3 ;
            System.out.println( );
        }
    }
}// main
