#include <stdio.h>
void dencrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main (){
    char c[] = "Bcijobw";
    dencrypt(c);
    printf("Decrypted string is: %s", c);
    return 0;
}