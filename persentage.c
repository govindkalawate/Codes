#include <stdio.h>
int main()
{
int s1,s2,s3,s4,s5; 
float per;
scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
per=(float)(s1+s2+s3+s4+s5)*100/500;
printf("%.2f Percent",per);
if(per>=90)
printf("\nGrade A");
else if(per>=80)
printf("\nGrade B");
else if(per>=70)
printf("\nGrade C");
else if(per>=60)
printf("\nGrade D")
; else if(per>=40)
printf("\nGrade E");
else
printf("\nGrade F");
return 0;
}