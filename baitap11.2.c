#include <stdio.h>

int main() {
   char s[150];     
   int i = 0;
   int vowels = 0;                
   printf("Nhap cau bat ky: \n");
   scanf("%[^\n]",&s);
     
      
   while(s[i++] != '\0') {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
         vowels++;
   }
   
   printf("Chuoi '%s' co chua: %d nguyen am.", s, vowels);

   return 0;
}
