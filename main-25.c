//Any character is entered through the keyboard,
//wap to determine whether the character entered is a capital letter,
//a small case letter, a digit or a special symbol.

#include<stdio.h>
main(){
    int ascii;
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    ascii=ch;
    printf("ascii value of %c is %d",ch,ascii);
    if(ascii>=65 && ascii<=90)
    printf("\nit is a capital letter"); // for capital characters A to Z
    else if (ascii>=97 && ascii<=122)
    printf("\nit is a small letter");   // for small character a to z
    else if (ascii>=48 && ascii <=57)
    printf("\nit is a digit ");          // for digits 0 to 9
    else if (ascii>=0 && ascii<=47 || ascii>=58 && ascii<=64
    ||ascii>=91 && ascii<=96||ascii>=123 && ascii<=127)
    printf("\nit is a special symbol");
    else
    printf("i dont know");
    
    
}
