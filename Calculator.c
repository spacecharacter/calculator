#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    int num1 = 0 ,
        num2 = 0 ;
    unsigned char ch ;
    
    printf( "Enter expression: " ) ;

    scanf( "%d %c %d" , &num1 , &ch , &num2 ) ;

    switch( ch )
    {
    case 42 :
            num1 *= num2 ;
            break ;
    case 43 :
            num1 += num2 ;
            break ;
    case 45 :
            num1 -= num2 ;
            break ;
    case 47 :
            if( num2 )
            {
                num1 /= num2 ; 
                break ;
            }
    default : 
            printf( "Error in expression!\n" ) ;
            exit( 1 ) ;
    }

    printf( "Result is: %d\n" , num1 ) ;
    return 0 ;
}