#include<stdio.h>

int main(){
	
	int i;
	
	struct student{
		
		char name[40];
		char surname[40];
		int number;
		int midtermGrade;	
	};	
	
	struct student person[10];
	
	for(i=0;i<3;i++)
	{
		printf("Ogrencinin ismini,soyadini,numarasini ve midterm notunu giriniz.\n");
		scanf("%s%s%d%d", person[i].name,person[i].surname, &person[i].number, &person[i].midtermGrade);
	}
	
	for(i=0;i<3;i++)
	{
		printf("%d. Ogrecinin bilgileri = \n",i+1);
		puts(person[i].name);
		puts(person[i].surname);
		printf("%d \nOgrencinin midterm notu = %d\n",person[i].number, person[i].midtermGrade);
	}
	return 0;
}
