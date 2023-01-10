#include <stdio.h>
#include <stdlib.h>

char* fta(float value[100], char queue[4]){ // fta = float to ascii

    for (int i=0; i<100; i++){
    value[i]+=32.32f;

    int decimal= (int)value[i]; // 33.00
    int tenth= value[i]100 - decimal100; // 00.33

    queue[0]=(char)decimal;
    queue[1]='.';
    queue[2]=(char)tenth;
    queue[3]='\0';

    return queue;
    }
}

int main(){

    float value[100];
    char queue[4];

    printf("enter a value\n"); // this value gonna be received in real
    scanf("%f", &value);
    printf("%s", fta(value,queue)); // huge convenience XD
    return 0;
}
