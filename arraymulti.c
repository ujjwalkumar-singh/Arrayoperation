#include<stdio.h>
int main(){
    int i,j;
    int a[3][3],b[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
        printf("enter element of a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
    }
    printf("\n");
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
        printf("enter element of b[%d][%d]=",i,j);
        scanf("%d",&b[i][j]);
    }
    printf("\n");
    }
    printf("your entered element a array shown beelow\n");
     for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
        printf(" %d",a[i][j]);
        }
    printf("\n");
    }
    printf("your entered element of b array is shown below \n\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
        printf(" %d",b[i][j]);   
    }
    printf("\n");
    }
    int c[3][3];
  //  int 
    for(int i=0;i<=2;i++){
        int k=1;
        for(int j=0;j<=2;j++){
            c[i][j]=0;
            //for(int k=0;k<=2;k++){
            step1:
             c[i][j]=c[i][j]+a[i][k]*b[k][j];
             k++;
             
            }
        }
    
    printf("after multiplication we have \n");
     for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
        printf(" %d",c[i][j]);   
    }
    printf("\n");
    }
    return 0;
}
