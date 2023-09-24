#include<stdio.h>
int main(){
  int n;
    printf("enter number: ");
    scanf("%d",&n);
    int nsp=3;
    int nst=1;
    for(int i=1;i<=n;i++){
        // int a=1;
        for(int k=1;k<=nsp;k--){//logic maths
        printf(" ");
        }
        for (int j=1;j<=nst;j=j++){
           printf("*");
        //    a=a+2;   
        } 
            nst=nst+2;   printf("\n");
      }
    return 0;
}
