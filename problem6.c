// We give you a string. In string, every character have decimal value. If the decimal value of character is even then
// make the character in uppercase. Implement this by using function.
// Note - It is guaranteed that input string is always in lowercase.


#include<stdio.h>
#include<string.h>
void myFunc(char str[]){
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            if(str[i]%2==0){
                str[i]-=32;
            }
        }
    }
}
int main(){
    char str[100];
    fgets(str,100,stdin);
    myFunc(str);
    printf("%s",str);
    return 0;
}

