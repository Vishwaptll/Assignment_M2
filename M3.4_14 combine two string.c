//14.Write a program in C to combine two strings manually
#include <stdio.h>
 
 main()
{
 
    char s[] = "My name is vishwa.";
    char s1[] = "I am from patan.";
 
    strcat(s, s1);
    printf("\n\n\t Final combine string is: %s ", s);
    
}