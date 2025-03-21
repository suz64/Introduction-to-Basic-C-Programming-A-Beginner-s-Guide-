#include<stdio.h>
int  main()
{
int id;
char name[10];
float salary;
int i;

FILE*fp;
fp=fopen("empolye.txt","w");

 printf(" Enter the details of " );
for(i=0;i<3;i++)
{
    printf("Employee %d:\n", i + 1);
    scanf("%d %s %f",&id,name,&salary);
    fprintf(fp," id:%d\n  Name:%s\n  salary:%f\n",id,name,salary);
}
fclose(fp); // Close the file
printf("Employee details have been written to empolye.txt.\n");
return 0;

}