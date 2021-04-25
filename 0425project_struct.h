#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee{
	char name[10];
	int year;
	int pay;
}Emp;

typedef struct student{
	char name[20];
	int kor, eng, math;
	int sum;
	float avg;
}Student;

typedef struct score{
	int kor, eng, math;
	int sum;
}Score;

void func_struct(){
	//struct employee kim={"김사원", 1999, 7500 };
	//Emp kim={"김사원", 1999, 7500 };
	//struct employee lee, park;

	//strcpy(lee.name,"이사원");
	//lee.year = 2010;
	//lee.pay = 5000;

	//strcpy(park.name, "박사원");
	//park.year = 2019;
	//park.pay = 2800;

	//printf("[사원 정보 출력]\n");
	//printf("이름 : %s\n", kim.name);
	//printf("입사 : %d년\n", kim.year);
	//printf("연봉 : %d만원\n", kim.pay);
	//printf("\n");

	//printf("이름 : %s\n", lee.name);
	//printf("입사 : %d년\n", lee.year);
	//printf("연봉 : %d만원\n", lee.pay);
	//printf("\n");

	//printf("이름 : %s\n", park.name);
	//printf("입사 : %d년\n", park.year);
	//printf("연봉 : %d만원\n", park.pay);
	//printf("\n");

	//Student st[3];
	//int i;

	//printf("***학생정보 입력***\n");
	//for(i=0; i<3; i++){		
	//	printf("[%d번 학생 정보]\n", i+1);
	//	printf("이름 : ");
	//	gets(st[i].name);

	//	printf("국어 : ");
	//	scanf("%d", &st[i].kor);

	//	printf("영어 : ");
	//	scanf("%d", &st[i].eng);

	//	printf("수학 : ");
	//	scanf("%d", &st[i].math);
	//	fflush(stdin);

	//	st[i].sum = st[i].kor + st[i].eng + st[i].math;
	//	st[i].avg = st[i].sum / 3.0;
	//}

	//printf("\n***학생정보 출력***\n");
	//for(i=0; i<3; i++){		
	//	printf("[%d번 학생 정보]\n", i+1);
	//	printf("이름 : %s\n", st[i].name);
	//	printf("국어 : %d\n", st[i].kor);
	//	printf("영어 : %d\n", st[i].eng);
	//	printf("수학 : %d\n", st[i].math);
	//	printf("총점 : %d\n", st[i].sum);
	//	printf("평균 : %.1f\n", st[i].avg);
	//	printf("\n");
	//}

	//Score sc[3] = {{10,10,10}, {20,20,20}, {30,30,30}};
	//Score * ptr;
	//int i;

	//ptr = sc;

	//for(i=0; i<3; i++){
	//	sc[i].sum = sc[i].kor + sc[i].eng + sc[i].math;
	//	printf("sc[%d].sum=%d\n", i, sc[i].sum);

	//	ptr[i].sum = ptr[i].kor + ptr[i].eng + ptr[i].math;
	//	printf("ptr[%d].sum=%d\n", i, ptr[i].sum);

	//	(*(ptr+i)).sum = (*(ptr+i)).kor + (*(ptr+i)).eng + (*(ptr+i)).math;
	//	printf("(*(ptr+%d)).sum=%d\n", i, (*(ptr+i)).sum);

	//	(ptr+i)->sum = (ptr+i)->kor + (ptr+i)->eng + (ptr+i)->math;
	//	printf("(ptr+%d)->sum=%d\n", i, (ptr+i)->sum);
	//	printf("\n");
	//}
	
	Student * ptr;
	int i, num;

	printf("학생 수 입력 : ");
	scanf("%d", &num);

	ptr = (Student *)malloc(num * sizeof(Student) );
	if(ptr == NULL){
		printf("메모리 할당 실패!!!\n");
		return;
	}

	printf("***학생정보 입력***\n");
	for(i=0; i<num; i++){		
		fflush(stdin);
		printf("[%d번 학생 정보]\n", i+1);
		printf("이름 : ");
		gets(ptr[i].name);

		printf("국어 : ");
		scanf("%d", &ptr[i].kor);

		printf("영어 : ");
		scanf("%d", &ptr[i].eng);

		printf("수학 : ");
		scanf("%d", &ptr[i].math);

		ptr[i].sum = ptr[i].kor + ptr[i].eng + ptr[i].math;
		ptr[i].avg = ptr[i].sum / 3.0;
	}

	printf("\n***학생정보 출력***\n");
	for(i=0; i<num; i++){		
		printf("[%d번 학생 정보]\n", i+1);
		printf("이름 : %s\n", ptr[i].name);
		printf("국어 : %d\n", ptr[i].kor);
		printf("영어 : %d\n", ptr[i].eng);
		printf("수학 : %d\n", ptr[i].math);
		printf("총점 : %d\n", ptr[i].sum);
		printf("평균 : %.1f\n", ptr[i].avg);
		printf("\n");
	}


}

