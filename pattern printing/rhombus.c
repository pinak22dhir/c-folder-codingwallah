#include<stdio.h>
int main(){
  int n;
    printf("enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){//logic maths
        printf(" ");
        }
        for (int k=1;k<=n;k++){
           printf("*");   
        }
             
            printf("\n");
            }
    return 0;
  
}