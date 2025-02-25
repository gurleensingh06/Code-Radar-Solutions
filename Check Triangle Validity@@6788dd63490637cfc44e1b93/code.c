#include <stdio.h>

int main(){
    int  a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int t=a+b;
    if(t>c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}