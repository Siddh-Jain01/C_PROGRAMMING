#include <stdio.h>
#include <string.h>
int main(){
char id[20], pass[20]; int age, marks;
printf("Enter ID: "); scanf("%s", id);
printf("Enter Password: "); scanf("%s", pass);
if(strcmp(id,"siddh123")==0 && strcmp(pass,"sj@123")==0){
printf("Login Success!\nEnter age: "); scanf("%d",&age);
if(age>=18){ printf("Enter marks: "); scanf("%d",&marks);
if(marks>=90) printf("Grade A\nSuitable Candidate\n");
else printf("You are not suitable candidate\n");}
else printf("You are under 18!\n");}
else printf("Invalid Login!\n");
}
