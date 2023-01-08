#include <stdio.h>

float value, op;
int decimal, intop, tenth, tenthf, number;
char decimal_char, tenth_char, convert;
    
int main(){

    printf("enter a float number\n");
    scanf("%f", &value);

    decimal= 32 + (int)value; // decimal part of the float
    op= value*100;
    intop= (int)op - 133;
    tenth= decimal*100- intop; // tenth part
    tenthf= tenth / 100 +32;
    
    decimal_char = (char)decimal;
    tenth_char = (char)tenthf;
    
    printf("%c.%c" , decimal_char, tenth_char);
    }
