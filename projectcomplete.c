struct information {
	char name[228];
	char father_name[134];
	int a,b,c;
	char school_name[178];
	int roll_no;
	char sde[12];
};
void jio(void);
void nju(struct information *s);
void bhy(void);
void main(void)
{
   int 	a;
   bhy();
   printf("\n \t \t\t NAWABSHAH BOARD HIGH SCHOOL CERIFICAT EXAMINATION\n");
   hello();
   struct information j;
   strcpy(j.name,"Manav kumar");
   strcpy(j.sde,"10th");
   j.roll_no=9999;
   strcpy(j.father_name,"Sanjay Kumar");
   j.a=12;j.b=1;j.c=2004;
   strcpy(j.school_name,"Haji Roshan Din");
   nju(&j);
   bhy();
   printf("  \n\tSUBJECTS");
   printf("  \tMAX MARKS");
   printf("  \tMIN MARKS");
   printf("  \tTHEORY MARKS\n");
   bhy();
   jio();
}
void bhy(void)
{
	int a;
	for(a=0;a<=100;a++)
	{
		printf("-");
	}
}
void nju(struct information *s)
{
	printf("\nSTUDENT NAME: %s\t",(*s).name);
	printf("CLASS: %s\t",(*s).sde);
    printf("ROLL NUMBER: %d\n",(*s).roll_no);
	printf("FATHER NAME: %s\n",(*s).father_name);
	printf("BARTH OF DATE: %d/%d/%d\n",(*s).a,(*s).b,(*s).c);
	printf("SCHOOL NAME: %s\n",(*s).school_name);
}
void jio(void)
{
	int a;
	int english,pak_study,chemistry,physics,math;
	printf("     \n\tENGLISH       \t 100     \t  33     \t   ");
	scanf("%d",&english);
	printf("     \tPAK-STUDY      \t 100     \t  33     \t   ");
	scanf("%d",&pak_study);
	printf("     \tCHEMISTRY     \t 100     \t  33     \t   ");
	scanf("%d",&chemistry);
    printf("     \tPHYSICS        \t 100     \t  33     \t   ");
    scanf("%d",&physics);
	printf("     \tMATHEMATICS    \t 100     \t  33     \t   ");
	scanf("%d",&math);
	for(a=0;a<=100;a++)
	{
		printf("-");
	}
	int sum;
	sum=english+pak_study+chemistry+physics+math;
	printf("     \n\t          \t 500\t|    GRAND TOTAL\t   %d\n",sum);
	bhy();
    if(sum>=401)
    {
    printf("\nRESULT : PASS IN A1 DIVISION\n");
    printf("GRAND :  A1\n");
	 bhy();
	}
	else if(sum>=301)
	{
	  printf("\nRESULT : PASS IN FIRST DIVISION\n");
	  printf("GRAND :  A\n");
	   bhy();
	}
	
	else if(sum>=201)
	{
		printf("\nRESULT : PASS IN SCONDE DIVISION\n");
	    printf("GRAND :  B\n");
	     bhy();
	}
	else if(sum>=101)
	{
	   printf("\nRESULT : PASS IN THRID DIVISION\n");
	   printf("GRAND :  C\n");	
	   bhy();
	}
	else
	{
		printf("\nRESULT : FAIL\n");
	    printf("GRAND :  FAIL\n");	
	}
	
	
void hello(void){
	
}
}
