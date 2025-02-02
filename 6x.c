/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/
#include<stdio.h>
int main    () {
   int a = 0 ;
   float b = 0 , c = 0 ;
    printf( "Test case :\n " ) ;
    printf( "   Input the Employees ID(Max. 10 chars) :\n " ) ;
    scanf( "%d", &a ) ;
    printf( "   Input the working hrs :\n " ) ;
    scanf( "%f", &b ) ;
    printf( "   Salary amount/hr :\n " ) ;
    scanf( "%f", &c ) ;
    printf( "output :\n " ) ;
    printf( "   Expected Output : \n " ) ;
    printf( "   Employees ID = %d\n " , a  ) ;
    printf( "   Salary = U$ %.2f\n " , b * c ) ;
 return 0 ;
}//end function 