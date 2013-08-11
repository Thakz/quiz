#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  
  int i;
  char a[100];
  char b[100];
  char c[100];
  char d[100];  
  char e[100];
  char g[100];
  FILE *fp;
  char z;
  
  
  
  fp=fopen("content_1.txt","r");
  
  for(i=0;;i++)
  {
	  z = getc(fp);
	  if(z == '\n')
		break;
	  a[i] = z;
  }
  a[i] = '\0';
  
    
  for(i=0;;i++)
  {
	  z = getc(fp);
	  if(z == '\n')
		break;
	  b[i] = z;
  }
  b[i] = '\0';
  
  
  
  for(i=0;;i++)
  {
	  z = getc(fp);
	  if(z == '\n')
		break;
	  c[i] = z;
  }
  c[i] = '\0';
  
  
  
  for(i=0;;i++)
  {
	  z = getc(fp);
	  if(z == '\n')
		break;
	  d[i] = z;
  }
  d[i] = '\0';
  
  
  
  for(i=0;;i++)
  {
	  z = getc(fp);
	  if(z == '\n')
		break;
	  e[i] = z;
  }
  e[i] = '\0';
  
  
  fclose(fp);
  
  
  printf("\n%s",a);
  printf("\n%s",b);
  printf("\n%s",c);
  printf("\n%s",d);
  printf("\n%s",e);
  
  
  printf("\nEnter ur answer:");
  scanf("%s",g);
  
  if(strcmp(g,e)==0)
  printf("\nCorrect answer");
  else
  printf("\nsorry.try again");

  
  
  
   
  
  
  
  
  
  
  return 0;
}
