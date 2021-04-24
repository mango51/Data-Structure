#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BS		4096
#define SN		5

void main(){
	// 학생의 점수 데이터 관리
	// 학생 수를 입력 받고, 입력 받은 학생 수 만큼의 점수를 저장하기 위한 메모리 할당
	// 전체 학생의 총점과 평균을 구하는 프로그램

	//int * ptr;	// 배열 = 포인터 >> 배열은 상수, 포인터는 변수
	//int num,i;
	//int sum =0;
	//float avg;

	//printf(" 학생 수 입력 : ");
	//scanf("%d",&num);
	//// num개 만큼의 점수 필요함 (num개의 메모리 필요)
	//
	//ptr = (int*) malloc(num*sizeof(int));  // 필요한 바이트 (num개 * int형 4바이트)의 int형 (int *)메모리 할당 요청 (malloc)
	//if( ptr == NULL){	//메모리 할당하는데 주소 0에 접근하면 할당  X >>  항상 주소 0은 비어있어야함 (하드웨어와 가까워서 안정성 위험)
	//	printf("메모리 할당 실패!! \n");
	//	return;
	//}
	//for(i=0;i<num;i++){
	//	printf("%d번째 학생 점수 입력 : ", i+1);
	//	scanf("%d",(ptr+i)); //ptr+i는 주소 형식이니 & 사용 X 
	//	// ptr+0 이면 시작 주소에 값 입력 (ex) 100 , 그 다음은 ptr + 1이라서 다음 메모리의 주소에 값 입력 (ex) 104

	//	sum += ptr[i];
	//	// 입력한 값을  sum에 더해서 sum의 총점에 저장
	//}
	//printf("\n");

	//avg = sum / (float) num;

	//for(i=0;i<num;i++){
	//	printf("%d번째 학생 점수: %d\n", i+1, ptr[i]);	//입력한 ptr의 내용을 하나씩 
	//}
	//printf("\n총점 : %d점\n",sum);
	//printf("평균 : %.1f점\n", avg);

	//free(ptr); // *** 사용한 메모리 운영체제(컴퓨터)에 반환하기/돌려보내기 >> 사용 다 했으니 다음에 또 사용할 수 있도록 반환해두기



	// 문제 : 2차원 배열을 이용해서 5명의 학생의 메모를 저장한 후 출력해보세요
	//char memo[5][1024];
	//int i;
	//for(i=0;i<5;i++){
	//	printf("%d번 학생 메모 : ", i+1);
	//	// gets() 줄단위로 가져옴
	//	// scanf(%s, 주소값) 하나의 단어만 입력 
	//	gets(memo[i]);	// 배열의 이름은 주소값이라서 & 사용 X
	//}
	//printf("\n 메모 출력 \n");
	//for(i=0;i<5;i++){
	//	printf("%d번 학생 메모 :  %s \n", i+1,memo[i]);
	//}
	// 메모리 낭비가 심하여 비효율적 >> 메모리가 넘어가면 사용 X , 메모리를 다 못 채우면 낭비



	// 문제2. 동적 할당으로 해보기
	// 학생 5명의 메모를 동적 할당 받아서 저장한 후 출력해보기
	//char buf[BS];	//정해진 크기니까 정적 할당
	//char*memo[SN];	// 포인터를 통해 메모리 동적 할당 가능!!!
	//int i,size;

	//for(i=0;i<SN;i++){
	//	printf("%d 학생 메모 : ", i+1);
	//	gets(buf);
	//	size = strlen(buf) + 1; 
	//	// 문자열 사이즈가 얼마인지 알 수 있는  strlen()
	//	// +1 은 NULL (\0) 값도 넣어준 것
	//	memo[i] = (char*)malloc(size);	// size(입력한 문자열의 크기+'\0' 널 값)를 저장해줄 수 있는 메모리 공간 동적 할당 to memo[i]
	//	// i 변수가 for문을 통해 돌려 달라지는 것 처럼 입력하는 내용 및 크기도 모두 상이
	//	if(memo[i]==NULL){	//메모리 주소가 0에 있으면 X >> 메모리 주소 0은 항상 비어있음
	//		printf("메모리 할당 실패 \n");
	//		return;
	//	}
	//	strcpy(memo[i],buf);
	//	//  입력한 문자열 내용 buf를 memo[i]에 복사하기
	//}
	//printf("메모 출력\n");
	//for(i = 0; i<SN; i++){
	//	printf("%d번 학생 메모 : %s\n", i+1,memo[i]);
	//}
	//for(i=0;i<SN;i++){
	//	free(memo[i]);
	//}	// memo 메모리를 컴퓨터에 반환 >> 다음에도 새롭게 사용할 수 있도록

	//  문제3. 학생의 수도 입력 받아 동적할당으로 해보기 (이중포인터 사용)
	// 학생의 수를 입력 받아서 입력 받은 학생 수 만큼의 메모를 동적 할당 받은 메모리에 저장하고 출력하기
	char buf[BS];	//정해진 크기니까 정적 할당
	int i,size,num;
	char*memo[num];	// 포인터를 통해 메모리 동적 할당 가능!!!

	printf(" 학생 수 입력 : ");
	scanf("%d",&num);
}