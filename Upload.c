#include <stdio.h>
int main()
{
int l,w,h;
printf("ENTER THE LENGTH\n");
scanf("%d",&l);
printf("Enter the width\n");
scanf("%d",&w);
printf("Enter the height\n");
scanf("%d", &h);
if((w<l)||(h<l)){
printf("UPLOAD ANOTHER");
}
else if(w==h){
    printf("ACCEPTED");
}
else{
printf("CROP IT");
}
return 0;
}