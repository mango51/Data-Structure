void main(){
	/*char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';
	printf("%c%c%c\n",ch1,ch2,ch3);
*/
	/*char str[5] = {'H','e','l','l','o'};
	int i;
	for (i=0;i<5;i++){
		printf("%c",str[i]);
	}
	printf("\n");*/

	/*char str1[4]={'H','i','!','\0'};
	char str2[6]="Hello";
	printf("%s\n",str1);
	printf("%s\n",str2);*/

	/*scanf(%s): 단어를 읽어와서 변수에 저장
	gets(변수주소):  입력한 라인(문자열)을 읽어 와서 변수에 저장*/

	// 문자열을 입력 받고, 입력 받은 문자열의 문자의 개수를 출력하기

	// c++ 2010 은 선언부 구현부 나눠야함

	//char sent[1024], ch;
	//int i, count=0; // 선언부

	//printf("문자열 입력 : "); //구현부

	//		//scanf("%s",sent); // 배열의 이름 = 배열의 시작 주소 (scanf() 입력함수에 &(주소값) 사용  X)
	//gets(sent);
	//printf("%s\n",sent);
	//for(i=0;i<1024;i++){
	//	ch =sent[i];
	//	if(ch!= '\0'){
	//		count++;
	//	}else{
	//		break;
	//	}
	//}

	//while(1){
	//	count++;
	//	if(sent[i]!='\0'){
	//		continue;
	//	}
	//	break;
	//}

	// printf("문자의 개수: %d\n",count);

	//int a[3][2]={{1,2},{3,4},{5,6}};
	//int i,j;
	//for(i=0;i<3;i++){
	//	for(j=0;j<2;j++){
	//		printf("a[%d][%d] = %d\n",i,j,a[i][j]);
	//	}
	//	printf("\n");
	//}

	/*char a[3][5] = {"Kim","Lee","Park"}; // 5칸에 값 넣어지고 끝에 자동으로 널값 붙음 (문자열 끝내기 위함)
	int i;
	for(i=0;i<3;i++){
		printf("a[%d] = %s\n",i,a[i]);
	}
	printf("\n");*/

	//위의 내용을 입력받아서 출력

	//char family[3][10];
	//int i;
	//for(i = 0 ;i<3;i++){
	//	printf("이름 %d을 입력 : ", i+1);
	//	scanf("%s",family[i]); // 각 행에 이름 작성
	//}
	//printf("\n");
	//for(i=0;i<3;i++){
	//	printf("family[%d]=%s\n",i,family[i]); // 각 행에 적은 이름 출력
	//}
	//printf("\n");

	/*scanf(%s): 단어를 읽어와서 변수에 저장
	gets(변수주소):  입력한 라인(문자열)을 읽어 와서 변수에 저장*/

	//char fname[3][20];
	//char fn[20];	// 내용 입력받는 변수
	//int i;
	//for(i=0;i<3;i++){
	//	printf("이름: ");
	//	gets(fn); // 입력한 내용 fn 변수에 대입
	//	strcpy(fname[i],fn); // 입력한 내용 있는 fn(문자열)을 fname[i]에 복사하기 (값 대입하기)
	//}
	//printf("[ 이름 출력 ]\n");
	//for(i=0;i<3;i++){
	//	printf("이름 출력하기 : %s\n",fname[i]); // 저장한 내용 있는 배열 포문을 통해 출력하기
	//}

	// 학생에 대한 정보 입력받기
	// 두 명의 학생 정보를 입력 받아 저장한 후 출력해 보세요
	// 이름:
	// 학과:
	// 학번:

	//char students[2][3][100];
	//char cont[100];
	//int i,j;

	//for(i=0;i<2;i++){
	//	printf("학생 %d \n",i+1);
	//	for(j=0;j<3;j++){
	//		if(j==0){
	//		printf("학생 %d 이름: ",i+1);
	//		}
	//		else if(j==1){
	//			printf("학생 %d 학과: ",i+1);
	//		}
	//		else{
	//			printf("학생 %d 학번: ",i+1);
	//		}
	//		//scanf("%s",students[i][j]);
	//		gets(cont);
	//		strcpy(students[i][j],cont);
	//	}
	//}
	//printf("\n출력하기! \n\n");
	//for(i=0;i<2;i++){
	//	printf("학생 %d \n",i+1);
	//	for(j=0;j<3;j++){
	//		if(j==0){
	//		printf("학생 %d 이름: %s\n",i+1,students[i][j]);
	//		}
	//		else if(j==1){
	//			printf("학생 %d 학과: %s\n",i+1,students[i][j]);
	//		}
	//		else{
	//			printf("학생 %d 학번: %s\n",i+1,students[i][j]);
	//		}
	//	}
	//}

		

	system("pause");
}