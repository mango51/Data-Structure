#include <stdio.h>


void main(){
	char c1, c2, c3, c4, c5;
	char str[6];
	char str2[6] = "Hello"; // 문자배열을 문자열로 만들어주기
	// 문자배열을 문자열로 바꾸고  Hello 값으로 초기화
	char str3[15] ="Hello World";	// Hello World의 주소값 ( H의 첫 주소값 = 시작주소)
	char *ptr;	//  포인터는 주소
	int i,j;
	char * ptr1 = "Hello";
	char * ptr2 = "World";
	char * p_arr[2];
	// 포인터는 4바이트
	char * ptr3[2] = {"Korea", "Seoul"};
	char ** pptr; // 이중 포인터


	p_arr[0] = ptr1;	//p_arr[0] = "Hello"; 과 동일 >> H의 시작주소를 가지고 가서 "Hello"를 p_arr[0]에 가져오기
	p_arr[1] = ptr2;	//p_arr[1] = "World"; 과 동일
	ptr = "Hello DataStructure";


	c1 = 'h';
	c2 = 'e';
	c3 = 'l';
	c4 = 'l';
	c5='o';

	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4]='o';
	str[5] = '\0';


	printf("\n");
	printf("%c%c%c%c%c\n", c1,c2,c3,c4,c5);
	printf("%c%c%c%c%c\n",str[0],str[1],str[2],str[3],str[4]);
	printf("%s\n",str);	// \0을 사용하여 문자열임을 인식하게 해주기 (문자배열로 출력하기)
	printf("%s\n",str2);	// 문자열로 출력하기
	printf("%s\n","Hello World");
	printf("%s\n", "Hello World"+3);
	// 문자배열의 이름은 변수이자 첫 인덱스의 주소값

	str3[0] = 'C';
	//배열의 이름은 상수 >> 배열의 이름은 주소값

	// ptr[0] = 'C'; >> 오류!!! > 배열과 포인터가 다른 점 (배열은 상수, 포인터는 변수)
	// ptr[0]은 Hello DataStructure의 주소값이라서 주소값에  'C' (문자) 넣으려니까 실행 X
	// 배열은 포인터 상수이므로 다른 번지를 가리킬 수 없고, 포인터는 변수이므로 대입이 가능합니다.

	// ptr[0]은 배열이 아님 >> 주소값 알려주는 변수 >> 위의 코드와 같이 못함 >> 포인터 변수에서 문자 수정 X
	printf("ptr : %s\n",ptr); // ptr 포인터 내용을 문자열 %s로 출력하기 
	printf("str : %s\n", str);

	for(i=0;i<10;i++){
		printf("%c",*(ptr+i));	// 주소값 하나하나를 불러오기
	} // ptr의 H는 주소 ptr, e는 ptr+1 ... 해당 주소 참조하니까 값으로 출력 (인덱스 10개 나옴)

	printf("%s %s\n", ptr1, ptr2);

	for(j=0;j<2;j++){
		printf("%s",p_arr[j]);	// 주소값을 한 번에 가져오기 ( 주소값 안에  Hello 주소값)
		// %s를 통해 문자열 가지고 오기 (해당 문자열의 주소값들 가지고 와서  Hello와 World로 출력!
	}	//%s는 문자열뿐만 아니라 문자열의 시작 주소를 가져와 해당 주소에 접근하여 문자열 출력 (\0 있을 때까지)
	printf("\n");

	ptr3[0] = "Korea";
	ptr3[1] = "Seoul";

	pptr = ptr3;	// ptr3과 같은 시작주소 갖게 됨
	// ***배열의 이름은 배열의 시작주소!!!

	printf("ptr3= %p/ pptr = %p\n",ptr3,pptr);
	printf("\n");

	printf("pptr의 주소 : %p / pptr = %p\n",&pptr, pptr);	// pptr의 주소와 pptr의 시작 주소
	printf("ptr3[0]의 주소 : %p /  ptr3[0] = %p\n",&ptr3[0], ptr3[0]); // ptr3의 주소(ptr3의 시작주소)와 ptr3[0] 값인 Korea(주소 형식으로 표현)
	printf("*ptr3[0] = %c / *ptr3=%s\n", *ptr3[0], *ptr3);	//주소값 참조해서 값 접근하기 (%c는 한 글자만, %s는 문자열)

	printf("ptr3[1]의 주소 : %p / ptr3[1] : %p\n", &ptr3[1], ptr3[1]);
	printf("*ptr3[1] = %c / *ptr3 = %s\n", *ptr3[1], *(ptr3+1));	
	//*(ptr+1) : ptr3은 시작주소이므로 +1을 통해 다음 인덱스의 주소값으로 참조하기 = *(인덱스1의 주소값 + 1 (다음 인덱스)) = *(인덱스 2의 주소값)
	printf("\n");

	printf("&pptr = % p / pptr = %p \n", &pptr, pptr); // pptr은 ptr3의 시작주소, &pptr은 pptr의 주소값
	printf("*(*pptr) = %c / *pptr = %s\n", *(*pptr), *pptr);
	printf("\n");
	// %p = 주소 형식 (서식 지정자)
	printf("*(*(pptr+1)) = %c / *(pptr+1) = %s\n", *(*(pptr+1)), *(pptr+1));	// pptr = ptr3이므로 pptr+1 = ptr3[0] + 1 = ptr3[1]
	// ptr3[1]은 주소값, 해당 주소값에 참조하여 값 접근
	printf("\n");
	*(pptr+1) = "Busan";
	printf("*(pptr+1) = ptr3[0]의 다음 인덱스(+1)인  ptr3[1]의 값 = %s\n", *(pptr+1));
	printf("\n");
	for(i = 0; i<2; i++){
		printf("%s\n", *(pptr+i));
	}

}