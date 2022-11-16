#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define ESC 27

#define F1 59

#define F2 60


void signup(void);

void login(void);

void gotoxy(int x, int y);
 COORD coord ={0,0};
void gotoxy(int x,int y){

     coord.X=x;  coord.Y=y;

     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

struct{
char password[20];

char username[20];
}s;


FILE *fp;


void main()

{
    system("color 70");
int ch;

while(1)

{
    system("cls");


gotoxy(28,7);

printf("Yours Welcome Here...........");

gotoxy(28,9);
printf("Press F1 For Login");

gotoxy(28,11);

printf("Press F2 For Signup");

gotoxy(28,13);

printf("Press ESC For Exit");
gotoxy(20,15);

printf("___********_____\n");
getch();
ch=getch();

switch(ch)

{
case F1:
    system("cls");

login();
break;

case F2:
system("cls");

signup();
break;

case ESC:
exit(0);

break;
}

}

getch();



}

void login()

  {

   int c,i;
   char username[20];
   char pass[20];

 system("cls");
   gotoxy(23,5);
   printf("_____Login Zone___");
  gotoxy(23,7);

  fp=fopen("record.bin","rb");


  printf("Enter UserName         :");

  gets(username);

  gotoxy(23,9);

  printf("Enter PassWord         :");


  for(int i=0;c=getch()!=13;i++)

{
  pass[i]=c;
  printf("*");
  }

  pass[i]='\0';



   char lpass[30];
  while(fread(&s,sizeof(s),1,fp))

 {
strcpy(lpass,s.password);
 }
 for(int i=0; i < strlen(s.password);i++)
    {

   lpass[i]= lpass[i] + 0XAED;

    }


 if (strcmp(lpass,pass)== 0 )
    {
    printf(" correct pass");
    }
 else

 printf("Invalid password!!!!!!!!!!!!");

system("cls");
  gotoxy(20,10);

  printf("_Hello %s Welcome Here_ ",s.username);

  }



 void signup(){
   char c,i;
   char pass[30];

  fp=fopen("record.bin","ab");

   system("cls");
  gotoxy(23,5);

 printf("_____SignUp Zone____");

gotoxy(23,7);
  printf("Set UserName           :  ");

 gets(s.username);

  gotoxy(23,9);
  printf("Set Password :  ");
  for(i=0;c=getche()!=13;i++)
  {
  pass[i]=c;
  }

  gotoxy(23,11);

  printf("Press Enter to continue.........");

 for(int i=0; i < strlen(pass);i++)
    {
    pass[i]= pass[i]- 0XAED;

    }
  strcpy(s.password,pass);

 if(getch()==13)

{
   fwrite(&s,sizeof(s),1,fp);

     gotoxy(23,13);
   printf("\n Inforsmations Saved....");
   }

  else
   return;

 fclose(fp);


getch();
  }
