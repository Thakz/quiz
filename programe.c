#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  
  int i;
  char a[100];
  char b[100];
  char e[100];
  char d[100];  
  char f[100];
  char g[100];
  FILE *fp;
  char c;
  
  
  
  fp=fopen("content_1.txt","r");
  
  for(i=0;;i++)
  {
	  c = getc(fp);
	  if(c == '\n')
		break;
	  a[i] = c;
  }
  a[i] = '\0';
  
    
  for(i=0;;i++)
  {
	  c = getc(fp);
	  if(c == '\n')
		break;
	  b[i] = c;
  }
  b[i] = '\0';
  
  
  
  for(i=0;;i++)
  {
	  c = getc(fp);
	  if(c == '\n')
		break;
	  e[i] = c;
  }
  e[i] = '\0';
  
  
  
  for(i=0;;i++)
  {
	  c = getc(fp);
	  if(c == '\n')
		break;
	  d[i] = c;
  }
  d[i] = '\0';
  
  
  
  for(i=0;;i++)
  {
	  c = getc(fp);
	  if(c == '\n')
		break;
	  f[i] = c;
  }
  f[i] = '\0';
  
  
  fclose(fp);
  
  
  printf("\n%s",a);
  printf("\n%s",b);
  printf("\n%s",e);
  printf("\n%s",d);
  printf("\n%s",f);
  
  
  printf("\nEnter ur answer:");
  scanf("%s",g);
  
  if(strcmp(g,f)==0)
  printf("\nCorrect answer");
  else
  printf("\nsorry.try again");

  
  
  
   
  
  
  
  
  
  
  return 0;
}
