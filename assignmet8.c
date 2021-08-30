#include<stdio.h>
#include<string.h>

struct Student{
	char firstname[10];
	char subject[20];
	int marks;
};


int main(){
	struct Student std[10];
	
	int num,i;
	printf("Enter number of students to enter\n");
	scanf("%d",&num);

	for(i=0;i<num;i++){
		printf("Enter student first name: \n");
		scanf("%s",std[i].firstname);
		printf("Enter subject: \n ");
		scanf("%s",std[i].subject);
		printf("Enter marks: \n");
		scanf("%d",&std[i].marks);
	}

	printf("---------------Student Details----------------\n");

	for(i=0;i<num;i++){
		printf("First Name: %s \n Subject: %s \n Marks: %d \n",std[i].firstname,std[i].subject,std[i].marks);
	}

	return 0;





}
