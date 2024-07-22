/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/
#include<stdio.h>
int main    () {
   int a = 0, b = 86400 ;
    printf( "Test case :\n " ) ;
    printf( " Input Days :\n " ) ;
    scanf( "%d", &a ) ;
    printf( "output :\n " ) ;
    printf("     %d day  = %d seconds "  ,a , a * b) ;
 return 0 ;
}//end function 