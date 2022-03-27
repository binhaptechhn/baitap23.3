#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
    int n,i,num,max,min;
    printf("nhap vao so n = ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("nhap nhung so can xac dinh :");
        scanf("%d",&num);
        if(i==0){
            max=num;
            min=num;
            }
            if(i>0 && num>max){
                max=num;}
            if(i>0 && num<min){
                min=num;}
                }
                printf("so lon nhat %d\n",max);
                printf("so nho nhat %d",min);}
