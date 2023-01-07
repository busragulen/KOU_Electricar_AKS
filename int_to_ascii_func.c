char convert;
int number;
    
int intconvert(number){
     
    convert = (char*)number+32;
    printf("%c", convert);
    
    return convert;
}
