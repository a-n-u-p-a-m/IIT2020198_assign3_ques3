/*Checking if input is alphabetic or numeric*/

#include <stdio.h>
int main(void)

{
   char ch;
   printf("Enter a character (if number between 0-9)\n");
   scanf("%c",&ch);
   
   
   
   if (ch>='0' && ch<='9')
   {
      printf("Input %c is numeric\n",ch);
   }
   else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
   {
      printf("Input is alphabetic\n");
      
        if (ch>='a' && ch<='z')
       {
      printf("Input %c is lowercase\n",ch);
       }
   
        if (ch>='A' && ch<='Z')
       {
      printf("Input %C is uppercase\n",ch);
       }  
   }
   else
   {
     printf("Input is neither of required types\n");
   }  

}            
   
