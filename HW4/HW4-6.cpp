#include <stdio.h>

int main() {

    int employeesID ;
    int workinghours ;
    int salaryperhour ;
    printf( "Input the Employees ID : " ) ;
    scanf( "%d", &employeesID ) ;

    printf( "Input the working hrs : " ) ;
    scanf( "%d", &workinghours ) ;

    printf( "Salary amount/hrs : ") ;
    scanf( "%d",&salaryperhour ) ;

    printf( "The Employees ID : %d \n", employeesID ) ;
    printf( "The salary : U$%d \n", workinghours * salaryperhour ) ;

    return 0 ;
}
