#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 void load();
  char ques[30][100];
  char opt1[30][100];
  char opt2[30][100];
  char opt3[30][100];
  char opt4[30][100];

int main()
{   int p=0;
	int rand_number;
	char ans[30];
	
	
	
	load();
	
	while(1)
	{
		srand(rand());
		rand_number = rand()%3;
		
		
		printf("\n%s",ques[rand_number]);
		printf("\n%s",opt1[rand_number]);
		printf("\n%s",opt2[rand_number]);
		printf("\n%s",opt3[rand_number]);
		printf("\n%s",opt4[rand_number]);
		
		printf("\nEnter your answer:");
		scanf("%s",ans);
		
		if(strcmp(ans,opt1[rand_number])==0)
		{
		  printf("\nCorrect answer");
		  ++p;
		  printf("\nyour point is %d",p);
	    }
		else
		  {
			  printf("\nNot correct");
		  }
	}
	
	return 0;
}

void load()
{  char ch,question[100];
  char answer_1[100];	  
  char answer_2[100];
  char answer_3[100];
  char answer_4[100];
 
  int i,j=0;
   
  FILE *fp; 
  fp=fopen("content_1.txt","r");
   
   
while(j<3)
{ 
  for(i=0;;i++)
   {
	   ch = getc(fp);
	   if(ch=='\n')
		break;
	   question[i]=ch;
   }   
   question[i] = '\0';
    
  for(i=0;;i++)
   {
	   ch = getc(fp);
	   if(ch=='\n')
		break;
	   answer_1[i]=ch;
   }
   answer_1[i] = '\0';   
  for(i=0;;i++)
   {
	   ch = getc(fp);
	   if(ch=='\n')
		break;
	   answer_2[i]=ch;
   }   
   answer_2[i] = '\0';
  for(i=0;;i++)
   {
	   ch = getc(fp);
	   if(ch=='\n')
		break;
	   answer_3[i]=ch;
   }   
   answer_3[i] = '\0';
  for(i=0;;i++)
   {
	   ch = getc(fp);
	   if(ch=='\n')
		break;
	   answer_4[i]=ch;
   }   
   answer_4[i] = '\0';
   strcpy(ques[j],question);
   strcpy(opt1[j],answer_1);
   strcpy(opt2[j],answer_2);
   strcpy(opt3[j],answer_3);
   strcpy(opt4[j],answer_4);
   j++; 
}
}
