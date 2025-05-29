#include <stdio.h>
#include <stdlib.h>

int main(void) {
int num1,num2;
printf("Enter 2 Number : ");
scanf("%d%d",&num1,&num2);
if(num1>num2) {
printf("Greatest Number Is : %d",num1);
}else{
printf("Greatest Number Is : %d",num2);
}

return EXIT_SUCCESS;
}