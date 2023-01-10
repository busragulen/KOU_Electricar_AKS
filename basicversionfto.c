#include <stdio.h>
#include <stdlib.h>

float value; 
char queue[4];

char* float_to_ascii(float value){
    value+=33.33;
    
    int decimal= (int)value; // 33.00
    int tenth= value*100 - decimal*100; // 00.33
    
    queue[0]=(char)decimal;
    queue[1]='.';
    queue[2]=(char)tenth;
    queue[3]='\0';
    
    return queue;
}

int main(){
    printf("enter a value\n"); // this value gonna be received in real
    scanf("%f", &value);
    printf("%s", float_to_ascii(value));
    return 0;
}
