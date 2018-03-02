#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char a[100], b[100];
    int c = 0, d;
    printf("Enter a String \n");
    gets(a);
    while(a[c] == ' '){
        c++;
    }
 
    for(d = 0;a[c] != '\0'; c++){
      if(a[c]==' ' && a[c-1]==' '){
          continue;
      }
      b[d] = a[c];
      d++;
    }
    b[d] = '\0';
    printf("String without extra spaces\n%s", b);
    getch();
    
}
