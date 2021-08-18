#include <stdio.h>
#include <string.h>
int main() {
   char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
   char str[20];

   printf("Enter a value: ");
   scanf("%c", &str);

   int a=0,i;
   for(i = 0; i < 32; i++) {
      if(strcmp(str,keyword[i])==0) {
         a=1;
      }
   }
   if(a==1)
      printf("Entered String is a keyword",str);
   else
      printf("Entered String is not a keyword",str);
}
