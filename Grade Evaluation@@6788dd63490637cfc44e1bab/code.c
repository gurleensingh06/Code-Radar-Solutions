#include <stdio.h>

int main(){
    char a[5];
    scanf("%s",&a);
    if(a=='A'){
        printf("Excellent");
    }   
    else if(a=='B'){
        printf("Good");
    }
    else if(a=='C'){
        printf("Average");
    }
    else if(a=='D'){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
}