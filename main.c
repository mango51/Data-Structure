#include <stdio.h>

//char grade[3];
//char printGrade(int a,int b){
//	if(a>=90){
//		grade[b] = 'A';
//	}
//	else if(a>=80){
//		grade[b]='B';
//	}
//	else if(a>=70){
//			grade[b]='C';
//	}
//	else if(a>=60){
//		grade[b] = 'D';
//	}
//	else{
//		grade[b] = 'F';
//	}
//	return grade[b];
//}

void main(){	// ()함수입니다
	/*int i, ia[100];
	char c, ca[100];
	float f, fa[100];
	double d, da[100];

	printf("i: %dbyte / ia: %dbyte\n",sizeof(i),sizeof(ia));
	printf("c: %dbyte / ca: %dbyte\n",sizeof(c),sizeof(ca));
	printf("f: %dbyte / fa: %dbyte\n",sizeof(f),sizeof(fa));
	printf("d: %dbyte / da: %dbyte\n",sizeof(d),sizeof(da));
	system("pause");*/

	int a[5];
	int b[5] = {1,2,3,4,5};
	int c[5]={1,2,3};  //남은 공간은 0으로 채워짐
	int d[] = {1,2,3,4,5};  //배열 크기 자유로움
	int e[] = {1};

	//int i;
	//for(i = 0;i<5;i++){
	//	printf("c[%d]=%d\n",i, c[i]);
	//}
	//printf("\n");
	//for(i = 0;i<5;i++){
	//	printf("d[%d]=%d\n",i, d[i]);
	//}
	//printf("\n");
	//for(i = 0;i<5;i++){
	//	printf("e[%d]=%d\n",i, e[i]);  //[0]은 값이 있지만 [1],[2],[3],[4]에는 값이 없기 때문에 쓰레기 값 할당함
	//}

	//학년별 점수를 입력 받아서 등급을 설정하고 배열에 저장한 후 전체 학년의 총점과 각 학년의 등급과 점수를 출력해보세요
	// [학년별 성적]
	// 1학년 : 점수 = __점 / 등급 = ___등급
	// 2학년 : 점수 = __점 / 등급 = ___등급
	// 3학년 : 점수 = __점 / 등급 = ___등급
	//  전체 총점 : __ 점

	//int score[3];

	//printf("1학년 점수: ");
	//scanf("%d",&score[0]);
	//printf("2학년 점수: ");
	//scanf("%d",&score[1]);
	//printf("3학년 점수: ");
	//scanf("%d",&score[2]);

	//printf("[학년별 성적]\n");
	//for(int i=0;i<3;i++){
	//	printf("%d 학년 : 점수 = %d 점 / 등급 = %c 등급 \n", i, score[i], printGrade(score[i],i));
	//}

	int score1[3], sc;
	char grade1[3];
	int sum =0, i;
	for(i = 0;i<3;i++){
		printf("%d학년 점수 입력 : ", i+1);
		scanf("%d",&sc);
		score1[i]=sc;
	}
	if(sc>=90){
		grade1[i]='A';
	}else if(sc>=80){
		grade1[i]='B';
	}else if(sc>=70){
		grade1[i]='C';
	}else if(sc>=60){
		grade1[i]='D';
	}else {
		grade1[i]='F';
	}
	sum=sum+score1[i];

	for(i=0;i<3;i++){
		printf("%d 학년 : 점수 = %d 점 / 등급 = %c 등급 \n", i+1, score1[i],grade1[i]);
	}

	//정수를 입력받고, 입력 받은 수의 구구단을 출력해 보세요
}