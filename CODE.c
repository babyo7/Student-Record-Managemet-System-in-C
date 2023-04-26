#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void menu();
void add();
void view();
void search();
void login();
void login1();
void login2();



struct student{
	char name[20];
	char kid[7];
	char course[5];
	char phoneno[20];
}s;
FILE *fp;
long sz=sizeof(s);

void login(){

char user[10];
	char pass[10];
	login0:
	system("cls");	
	
	

	printf("\n");
			printf("\n       _________________________________________________________________\n");
			printf("\n\t\t\t          USER LOGIN  \t\t\t");
			printf("\n       _________________________________________________________________\n\n\n");
		

		printf("\n\n\t\t\t       USERNAME : ");
		gets(user);
		printf("\n\n\t\t\t       PASSWORD : ");
		gets(pass);	
	
if(strcmpi(user,"aman")==0 && strcmp(pass,"1234")==0 ){
      menu();

}
else if(strcmpi(user,"rafey")==0 && strcmp(pass,"1234")==0 )
	{
	menu();
	}
else 
{
	printf("\n\n\t\t\t        ");
   
    system("color c");
      sleep(00.10);
	 login1();}
}

void login1(){
char user[10];
	char pass[10];
	login0:
	system("cls");	
    system("color 7");	
	printf("\n");
			printf("\n       _________________________________________________________________\n");
			printf("\n\t\t\t          USER LOGIN  \t\t\t");
			printf("\n       _________________________________________________________________\n\n\n");
		

		printf("\n\n\t\t\t       USERNAME : ");
		gets(user);
		printf("\n\n\t\t\t       PASSWORD : ");
		gets(pass);
if(strcmpi(user,"aman")==0 && strcmp(pass,"1234")==0 ){
      menu();

}
else if(strcmpi(user,"rafey")==0 && strcmp(pass,"1234")==0 )
	{
	menu();
	}
else 
{
	printf("\n\n\t\t\t        ");
   
    system("color c");
      sleep(00.10);
	 login2();}
}

void login2(){

char user[10];
	char pass[10];
	login0:
	system("cls");	
	system("color 7");
	printf("\n");
			printf("\n       _________________________________________________________________\n");
			printf("\n\t\t\t          USER LOGIN  \t\t\t");
			printf("\n       _________________________________________________________________\n\n\n");
		

		printf("\n\n\t\t\t       USERNAME : ");
		gets(user);
		printf("\n\n\t\t\t       PASSWORD : ");
		gets(pass);
if(strcmpi(user,"aman")==0 && strcmp(pass,"1234")==0 ){
      menu();

}
else if(strcmpi(user,"rafey")==0 && strcmp(pass,"1234")==0 )
	{
	menu();
	}
else 
{
	printf("\n\n >>> Too many attempts        ");
   
    system("color c");
      sleep(1);
	 exit(0);}
}



void add(){



	
	fp=fopen("student.txt","a");
	char name,kid,course;
			char ch;
			char phoneno;
		    do{
			
			system("cls");
			printf("\n\n\t  ____________________________________________________________\n");
			printf("\n\t\t\t     ADD STUDENT INFORMATION  \t\t\t");
			printf("\t\t  ____________________________________________________________\n\n");
			
			
			
			 
			printf("\n\n\t  FULL NAME : ");
			fflush(stdin);
			gets(s.name);
			if(s.name[0] == '0'){
				menu();
			}
			
			printf("\n\t  ENTER KID : ");
			fflush(stdin);
			gets(s.kid);
		
			printf("\n\t  ENTER COURSE : ");
				fflush(stdin);
			gets(s.course);
			
			printf("\n\t  ENTER PHONE NO : ");
				fflush(stdin);
			gets(s.phoneno);
			
			if(s.name[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t   Record not added");
				sleep(1);
				printf("\n\n\t\t\t   Fill all the blanks");
				
			goto z;
			}
			
			if(s.kid[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t   Record not added");
				sleep(1);
				printf("\n\n\t\t\t   Fill all the blanks");
				
			goto z;
			}
			
			if(s.course[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t   Record not added");
				sleep(1);
				printf("\n\n\t\t\t   Fill all the blanks");
				
			goto z;
			}
			
			if(s.phoneno[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t   Record not added");
				sleep(1);
				printf("\n\n\t\t\t   Fill all the blanks");
				
			goto z;
			}
			
			
			fwrite(&s,sz ,1,fp);
			sleep(0.10);
			printf("\n\n\t\t\t   Successfully added");
			
			
		
			
			
			z:
	
			printf("\n\n\t\t\t   Do you want to add more?(y/n)");
			scanf("%s",&ch);
			
		}
			while(ch == 'y'|| ch =='Y');
			fclose(fp);
			
			
		menu();	
}
void view(){
	char input[100];
int i=1;
	system("cls");
			printf("\n\n\t  \n");
			printf("\n\t\t\t     ALL STUDENT INFORMATION  \t\t\t");
			printf("\t\t \n\n");		
			
			printf("\t  ____________________________________________________________\n\n");
				printf("\t   %-20s %-10s %-10s     %-15s \n"," S.NO  NAME","KID"," COURSE"," PHONE NO");
				printf("\t  %-20s\n\n\n","____________________________________________________________");
			fp=fopen("student.txt","r");
				if(fp == NULL)
							{printf("\n\n\n\t   Nothing to view first add data from ==> Add student info");
							getch();
							menu();
							}
				while(fread(&s,sz,1,fp) == 1)
				{
				printf("\t     %d    %-14s%-10s  %-10s     %-15s  \n\n",i,s.name,s.kid,s.course,s.phoneno);
				i++;	
							}		
						
							fclose(fp);
							
						printf("\t  ____________________________________________________________\n");
						printf("\n          To add records [A]      To Manage [M]      To Exit [any key]\n");
						printf("\t  ____________________________________________________________\n");
					gets(input);
					if(strcmpi(input,"A")==0)
					{
						add();
					}
					else if(strcmpi(input,"M")==0)
					{
						search();
					}
							menu();
				
		
			}
		
			
			
			
			
void search(){
				char na[100];
				char manage[100];
				int found=0;
				system("cls");
			printf("\n\n\t  __________________________________________________________ \n");
			printf("\n\t\t\t   MANAGE STUDENT INFORMATION \t\t\t");
			printf("\t\t  __________________________________________________________ \n\n\n");
			
			printf("\t\t\t   ENTER KID TO SERACH : ");
			
			fflush(stdin);
			gets(na);
			if(strcmpi(na,"e")==0)
			{
				menu();
			}
			printf("\n");
			
				fp = fopen("student.txt","r");
				while(fread(&s,sz,1,fp)==1)
				{
					if(strcmpi(na,s.kid)==0){
						
						found=1;
						printf("\n\t\t\t   NAME : %s \n\n",s.name);
						printf("\t\t\t   KID : %s \n\n",s.kid);
						printf("\t\t\t   COURSE : %s \n\n",s.course);
						printf("\t\t\t   PHONE NO : %s \n\n",s.phoneno);
							
				
					}
				}
				fclose(fp);
				
				if(found==0){
					printf("\n\n                  \t  << Record  not found >>\t\n");
					printf("\n   _______________________________________________________________________\n");
						printf("\n   Search Again [Y]    To View [V]    To Add [A]    To Exit [any key]");
						printf("\n   _______________________________________________________________________\n");
					
					gets(manage);
					if(strcmpi(manage,"Y")==0){
						search();	
					}
					else if(strcmpi(manage,"V")==0)
					{
						view();
					}
					else if(strcmpi(manage,"A")==0)
					{
						add();
					}
					else{
					menu();
				}
					
				}
				else{
					
					printf("   _______________________________________________________________________\n");
						printf("\n   Search Again [Y]    To Delete [D]    To Modify [M]    To Exit [any key]");
						printf("\n   _______________________________________________________________________\n");
					
					gets(manage);
					if(strcmpi(manage,"Y")==0)
					{
						search();
					}
					
					else if(strcmpi(manage,"m")==0)
					{
						z:
						system("cls");
			printf("\n\n\t  __________________________________________________________ \n");
			printf("\n\t\t\t   MODIFY STUDENT INFORMATION  \t\t\t");
			printf("\t\t  __________________________________________________________ \n\n");
							fp = fopen("student.txt","r+");
				while(fread(&s,sz,1,fp)==1)
				{
					if(strcmpi(na,s.kid)==0){
						found=1;
			printf("\n\n\t  FULL NAME : ");
			fflush(stdin);
			gets(s.name);
			
			
			printf("\n\t  ENTER KID : ");
			fflush(stdin);
			gets(s.kid);
		
			printf("\n\t  ENTER COURSE : ");
				fflush(stdin);
			gets(s.course);
			
			printf("\n\t  ENTER PHONE NO : ");
				fflush(stdin);
			gets(s.phoneno);
			if(s.name[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t     Record not modified");
				sleep(1);
				printf("\n\n\t\t\t     Fill all the blanks");
				getch();
				
			goto z;
			}
			
			if(s.kid[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t     Record not modified");
				sleep(1);
				printf("\n\n\t\t\t     Fill all the blanks");
				getch();
			goto z;
			}
			
			if(s.course[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t     Record not modified");
				sleep(1);
				printf("\n\n\t\t\t    Fill all the blanks");
				getch();
				
			goto z;
			}
			
			if(s.phoneno[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t     Record not modified");
				sleep(1);
				printf("\n\n\t\t\t     Fill all the blanks");
				getch();
			goto z;
			}
			
			fseek(fp,-sz,1);
			fwrite(&s,sz,1,fp);		
							fclose(fp);
				break;
					}
				}
				
				if(found==0){
					printf("no");
				}else{
					sleep(1);
					printf("\n\n\t\t\t     Successfully modified\n");
						printf("\n\t  ____________________________________________________________\n");
						printf("\n          Modify another [Y]      To view [V]      To Exit [any key]\n");
						printf("\t  ____________________________________________________________\n");
					
					gets(manage);
					if(strcmpi(manage,"Y")==0)
					{
						search();
					}
					else if(strcmpi(manage,"V")==0)
					{
						view();
					}
					else 
					{
						menu();
					}
										
				
					getch();
					menu();
			}
				
				
					}
					
					
					
					else if(strcmpi(manage,"d")==0)
					{
						
						FILE *ft;
		
			
				fp = fopen("student.txt","r");
				ft=fopen("temp.txt","a");
				while(fread(&s,sz,1,fp)==1)
				{
					if(strcmpi(na,s.kid)==0){
						found=1;
					}
					else{
						fwrite(&s,sz,1,ft);
					}
				}
				fclose(fp);
				fclose(ft);
				remove("student.txt");
				rename("temp.txt","student.txt");
				system("cls");
			printf("\n\n\t  __________________________________________________________ \n");
			printf("\n\t\t\t   MANAGE STUDENT INFORMATION \t\t\t");
			printf("\t\t  __________________________________________________________ \n\n\n");
			
				printf("\n\n\n\n\t\t\t     SUCCESSFULLY DELETED \n\n\n\n\n\n");
			printf("\n   _______________________________________________________________________\n");
						printf("\n   Delete another [Y]    To View [V]    To Add [A]    To Exit [any key]");
						printf("\n   _______________________________________________________________________\n");			gets(manage);
					if(strcmpi(manage,"Y")==0)
					{
						search();
					}
					else if (strcmpi(manage,"V")==0)
					{
						view();
					}
					else if (strcmpi(manage,"A")==0)
					{
						add();
					}
					
					menu();
			
		
				}
				else{
					
					menu();
				}
					
	}
}

void more(){
	
				char na[100];
				char manage[100];
				int found=0;
				system("cls");
			printf("\n\n\t  __________________________________________________________ \n");
			printf("\n\t\t\t   MANAGE STUDENT INFORMATION \t\t\t");
			printf("\t\t  __________________________________________________________ \n\n\n");
			
			printf("\t\t\t   ENTER NAME TO SERACH : ");
			
			fflush(stdin);
			gets(na);
			if(strcmpi(na,"e")==0)
			{
				menu();
			}
			printf("\n");
			
				fp = fopen("student.txt","r");
				while(fread(&s,sz,1,fp)==1)
				{
					if(strcmpi(na,s.name)==0){
						
						found=1;
						printf("\n\t\t\t   NAME : %s \n\n",s.name);
						printf("\t\t\t   KID : %s \n\n",s.kid);
						printf("\t\t\t   COURSE : %s \n\n",s.course);
						printf("\t\t\t   PHONE NO : %s \n\n",s.phoneno);
							
				
					}
				}
				fclose(fp);
				
				if(found==0){
					printf("\n\n                  \t  << Record  not found >>\t");
					printf("\n\n\n   ________________\t\t\t\t\t_________________\n");
						printf("\n   Search again [Y]\t\t\t\t\tTo Exit [any key]");
						printf("\n   ________________\t\t\t\t\t_________________");
					
					gets(manage);
					if(strcmpi(manage,"Y")==0){
						more();	
					}
					else{
					menu();
				}
					
				}
				else{
					
					printf("   _______________________________________________________________________\n");
						printf("\n   Search Again [Y]    To Delete [D]    To Modify [M]    To Exit [any key]");
						printf("\n   _______________________________________________________________________\n");
					
					gets(manage);
					if(strcmpi(manage,"Y")==0)
					{
						more();
					}
					
					else if(strcmpi(manage,"m")==0)
					{
						z:
						system("cls");
			printf("\n\n\t  __________________________________________________________ \n");
			printf("\n\t\t\t   MODIFY STUDENT INFORMATION  \t\t\t");
			printf("\t\t  __________________________________________________________ \n\n");
							fp = fopen("student.txt","r+");
				while(fread(&s,sz,1,fp)==1)
				{
					if(strcmpi(na,s.name)==0){
						found=1;
			printf("\n\n\t  FULL NAME : ");
			fflush(stdin);
			gets(s.name);
			
			
			printf("\n\t  ENTER KID : ");
			fflush(stdin);
			gets(s.kid);
		
			printf("\n\t  ENTER COURSE : ");
				fflush(stdin);
			gets(s.course);
			
			printf("\n\t  ENTER PHONE NO : ");
				fflush(stdin);
			gets(s.phoneno);
			if(s.name[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t     Record not modified");
				sleep(1);
				printf("\n\n\t\t\t     Fill all the blanks");
				getch();
				
			goto z;
			}
			
			if(s.kid[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t     Record not modified");
				sleep(1);
				printf("\n\n\t\t\t     Fill all the blanks");
				getch();
			goto z;
			}
			
			if(s.course[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t     Record not modified");
				sleep(1);
				printf("\n\n\t\t\t    Fill all the blanks");
				getch();
				
			goto z;
			}
			
			if(s.phoneno[0] == 	'\0'){	
			sleep(1);
			printf("\n\n\t\t\t     Record not modified");
				sleep(1);
				printf("\n\n\t\t\t     Fill all the blanks");
				getch();
			goto z;
			}
			
			fseek(fp,-sz,1);
			fwrite(&s,sz,1,fp);		
							fclose(fp);
				break;
					}
				}
				
				if(found==0){
					printf("no");
				}else{
					sleep(1);
					printf("\n\n\t\t\t     Successfully modified\n");
						printf("   _______________________________________________________________________\n");
						printf("\n    To Modify Another [Y]                               To Exit [any key]");
						printf("\n   _______________________________________________________________________\n");
					
					gets(manage);
					if(strcmpi(manage,"Y")==0)
					{
						more();
					}
					else 
					{
						menu();
					}
										
				
					getch();
					menu();
			}
				
				
					}
					
					
					
					else if(strcmpi(manage,"d")==0)
					{
						
						FILE *ft;
		
			
				fp = fopen("student.txt","r");
				ft=fopen("temp.txt","a");
				while(fread(&s,sz,1,fp)==1)
				{
					if(strcmpi(na,s.name)==0){
						found=1;
					}
					else{
						fwrite(&s,sz,1,ft);
					}
				}
				fclose(fp);
				fclose(ft);
				remove("student.txt");
				rename("temp.txt","student.txt");
				system("cls");
			printf("\n\n\t  __________________________________________________________ \n");
			printf("\n\t\t\t   MANAGE STUDENT INFORMATION \t\t\t");
			printf("\t\t  __________________________________________________________ \n\n\n");
			
				printf("\n\n\n\n\t\t\t     SUCCESSFULLY DELETED \n\n\n\n\n\n");
				printf("   _______________________________________________________________________\n");
						printf("\n    To delete Another [Y]                               To Exit [any key]");
						printf("\n   _______________________________________________________________________\n");
					gets(manage);
					if(strcmpi(manage,"Y")==0)
					{
						more();
					}
					menu();
			
		
				}
				else{
					
					menu();
				}
					
	}
}
int main()
{
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\4 STUDENT RECORD MANAGEMENT SYSTEM \4");                                                                                                                
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t    Press any key to start");
	getch();
	login();
}
void menu()
{

	char ch[100];
		x: 
	
		
			system("cls");
			printf("\n");
			printf("\n       _________________________________________________________________\n");
			printf("\n\t\t\t STUDENT RECORD MANAGEMENT SYSTEM  \t\t\t");
			printf("       _________________________________________________________________");
			printf("\n\n\n");
			
		printf("\n\t\t\t      1. Add Student Info \n");
		printf("\n\t\t\t      2. View \n");
		printf("\n\t\t\t      3. Manage \n");
		printf("\n\t\t\t      4. Exit \n");
		
		printf("\n\n \t\t\t      Enter The No : ");
		fflush(stdin);
		gets(ch);
		
		if(strcmp(ch,"1")==0)
		{
			add();
			
							}
							else if(strcmp(ch,"2")==0)
							{
								view();
		
								
							}
							else if(strcmp(ch,"3")==0){
								search();
			
						}
							else if(strcmp(ch,"4")==0){
								system("cls");
							
							printf(" \n\n\n\n\n\n\n\n\n\n");
printf("\t  ---   --- -  - -   --   - - - - -- - - -   - - -- -- -  - -\n");
printf("\t     = =  = ==== =  =  =  =  == = = =   = === = =  = = =  = =\n");
printf("\t     - -  -  --  - - -- - - - ` -  -     -   -- -  - - -  - -\n");
printf("\t     = =  = =  = == ==== == ==  = = =     = = = ==== = ==== =\n");
printf("\t     ---  ---  -----    ----- --- - --    ---  ------ ------ \n\n\n\n\n\n\n\n\n");                                                                                                                                                                                                                                    
							sleep(1);
							exit(0);
							
			
							}
							else if(strcmpi(ch,"DD")==0)
							{
								more();
																								}																	
							
							else{
								 printf("\n  Invalid key \n");
								system("color c");
								sleep(000.1);
								system("color 7");
								goto x;
							}

}
