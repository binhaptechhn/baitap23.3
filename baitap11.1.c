#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(int argc, char *argv[]) {
     char name[7][20], temp[20];
     int  i,j;

     for(i=0 ; i < 7 ; i++)
     {  printf("nhap 7 ten ma ban muon:");
       scanf("%s", &name[i]);
     }
     for (i=0 ; i<6; i++){
         for(j=i+1 ; j<7 ; j++){
             if (strcmp(name[i], name[j])>0){
                 strcpy(temp, name[i]);
                 strcpy(name[i], name[j]);
                 strcpy(name[j], temp);
             }
         }
     }
     for(i=0; i<7; i++){
         printf("%s \n", name[i]);
     }
    return 0;
}
