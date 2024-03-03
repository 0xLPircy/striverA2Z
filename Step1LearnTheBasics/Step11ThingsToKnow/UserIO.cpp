#include<stdio.h>

int main(){
    // Write your code here.
    char ch;
    scanf("%c", &ch);
    int res;
    if(ch >= 'A' && ch<='Z'){
        res=1;
    } else if(ch >= 'a' && ch<='z'){
        res=0;
    } else{
        res=-1;
    }
    printf ("%d", res);
    return 0;
}
