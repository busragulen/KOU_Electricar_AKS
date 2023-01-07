// my own function to split the data that arrives from other units of the car.

#include <stdio.h>
#include <stdlib.h>

int lenght(char array[]){
    int i=0;
    while(array[i]!='\0'){
        i++;
    }
    return i;
}

// we need this "split" function to have meaningful datas from Battery Management System or Motor Driver Unit that car have. 

void split(char array[10], char parameter, char destination[100][100]){
    int counter_x=0;
    int counter_y=0;
    int i=0;
    for(i=0; i<10; i++){
        if(array[i]==parameter){
            counter_y++;
            counter_x=0;
        }
        else{
            destination[counter_y][counter_x]=array[i];
            counter_x++;
        }
    }
}

// data will arrive to the AKS like a bunch of arrays that splitted with commas.
// with this function we'll split those arrays and have individual and meaningful datas.
