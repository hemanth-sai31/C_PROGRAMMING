#include<stdio.h>
main(){
int i,j,date,month,year,c=0;
float y;
char str[20],strdate[20],strmonth[20],stryear[20],temp[2],token[20];
printf("Enter date (dd/mm/yy): ");
scanf("%d/%d/%f", &date,&month,&y);
 year=(int)y;
 y=y-year;
if (year % 400 == 0) {
printf("%d is a leap year.", year);
 }
 else if (year % 100 == 0) {
printf("%d is not a leap year.", year);
 }
 else if (year % 4 == 0) {
printf("%d is a leap year.", year);
 }
 else {
printf("%d is not a leap year.", year);
 }
}
