float value; 
int data_no;
char queue[20][4];

char* float_to_ascii(float value, int data_no){
    value+=33.33;
    
    int decimal= (int)value; // 33.00
    int tenth= value*100 - decimal*100; // 00.33
    
   
    queue[data_no][0]=(char)decimal;
    queue[data_no][1]='.';
    queue[data_no][2]=(char)tenth;
    queue[data_no][3]='\0';
       
    
    return queue[data_no];
}
