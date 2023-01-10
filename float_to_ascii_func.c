float value; 
int data_no;
char queue[20][4];

char* float_to_ascii(float value, int data_no) {
    int decimal = (int)value;
    int tenth = (int)((value - decimal) * 100);
    
    sprintf(queue[data_no], "%d.%02d", decimal, tenth);
    return queue[data_no];
}
