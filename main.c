#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
char name[10];
int age;
int sorce;
};

void init_student(struct student *stu,  char *name)
{
	strncpy(stu->name, name, sizeof(stu->name));
	stu->age = 18;
	stu->sorce = 60;

}

int main(void)
{	
	struct student *st_tom = (struct student *) malloc(sizeof(struct student));

	init_student(st_tom, "Tom");
	
	printf("the student name: %s\n", st_tom->name);	 
	printf("hello github\n");
}
