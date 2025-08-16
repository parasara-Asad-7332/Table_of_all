#include <stdio.h>

int main(){
    int num;
    printf("Enter the number you can table: ");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        int table = num * i;
        
        printf("%d * %d = %d\n",num,i,table);
    }
    
    return 0;
}


