#include<stdio.h>
struct std
{
char name[50],branch[50];
int roll,marks;
}s[50];
main()
{
int i,n;
printf("Enter the no. of students:- ");
scanf("%d",&n);
printf("Enter details:-\n");
for(i=0;i<n;i++)
{
printf("Enter Name: ");
scanf("%s",s[i].name);
printf("Enter Branch: ");
scanf("%s",s[i].branch);
printf("Enter Roll no.: ");
scanf("%d",&s[i].roll);
printf("Enter Marks: ");
scanf("%d",&s[i].marks);
}
printf("Name:\tBranch:\tRollNo:\tMarks:\n");
for(i=0;i<n;++i)
{
printf("%s\t%s\t%d\t%d\n",s[i].name,s[i].branch,s[i].roll,s[i].marks);
}
}
