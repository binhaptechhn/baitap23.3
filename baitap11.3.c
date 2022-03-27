#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int num[100];
	int n,i;
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d", &num[i]);		
	}	
	for(i=0;i<n/2;i++){
		int ind = n - i - 1;
		int temp = num[ind];
		num[ind] = num[i];
		num[i] = temp;
	}
	for(i=0;i<n;i++){
		printf("\nThu tu dao nguoc lai lan luot la %d",num[i]);
	}
	return 0;
	}
