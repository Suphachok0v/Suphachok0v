/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/
#include<stdio.h>
int main    () {
   float a = 0;
    printf( "Test case :\n " ) ;
    printf( "   User input :\n " ) ;
    scanf( "%f", &a ) ;
    printf( "output :\n " ) ;
    printf("     %.0f degree Celsius = %.1f degree Fahrenheit "  , a , (a * 1.8 ) + 32 ) ;
 return 0 ;
}//end function 