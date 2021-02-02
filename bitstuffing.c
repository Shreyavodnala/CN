#include<stdio.h>
#include<string.h>
int main() {
  int i = 0;
  int c= 0;
  char str[100];
  char flag[9]="01111110";

  printf("Enter Data Bits: ");
  scanf("%s", str);
 
 
  printf("\nData Bits After Bit stuffing :");
  printf("%s ", flag);
  for(i = 0; i < strlen(str); i++) {
     if(str[i] == '1'){
         c++;
     }
     else{
         c = 0;
     }
     printf("%c", str[i]);
     if(c == 5){
         printf("0");
         c = 0;
     }
  }
  printf(" %s", flag);
  return 0;
}