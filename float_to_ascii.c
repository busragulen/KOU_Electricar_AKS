#include <stdio.h>
#include <stdlib.h>

float value; 
char queue[4];

char* float_to_ascii(float value){
    int decimal = (int)value;
    int tenth = (int)((value - decimal) * 100);
    
    sprintf(queue, "%d.%02d", decimal, tenth);
    return queue;
}

int main(){
    printf("enter a value\n"); // this value gonna be received in real
    scanf("%f", &value);
    printf("%s", float_to_ascii(value));
    return 0;
}
