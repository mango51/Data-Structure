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

	/*scanf(%s): �ܾ �о�ͼ� ������ ����
	gets(�����ּ�):  �Է��� ����(���ڿ�)�� �о� �ͼ� ������ ����*/

	// ���ڿ��� �Է� �ް�, �Է� ���� ���ڿ��� ������ ������ ����ϱ�

	// c++ 2010 �� ����� ������ ��������

	//char sent[1024], ch;
	//int i, count=0; // �����

	//printf("���ڿ� �Է� : "); //������

	//		//scanf("%s",sent); // �迭�� �̸� = �迭�� ���� �ּ� (scanf() �Է��Լ��� &(�ּҰ�) ���  X)
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

	// printf("������ ����: %d\n",count);

	//int a[3][2]={{1,2},{3,4},{5,6}};
	//int i,j;
	//for(i=0;i<3;i++){
	//	for(j=0;j<2;j++){
	//		printf("a[%d][%d] = %d\n",i,j,a[i][j]);
	//	}
	//	printf("\n");
	//}

	/*char a[3][5] = {"Kim","Lee","Park"}; // 5ĭ�� �� �־����� ���� �ڵ����� �ΰ� ���� (���ڿ� ������ ����)
	int i;
	for(i=0;i<3;i++){
		printf("a[%d] = %s\n",i,a[i]);
	}
	printf("\n");*/

	//���� ������ �Է¹޾Ƽ� ���

	//char family[3][10];
	//int i;
	//for(i = 0 ;i<3;i++){
	//	printf("�̸� %d�� �Է� : ", i+1);
	//	scanf("%s",family[i]); // �� �࿡ �̸� �ۼ�
	//}
	//printf("\n");
	//for(i=0;i<3;i++){
	//	printf("family[%d]=%s\n",i,family[i]); // �� �࿡ ���� �̸� ���
	//}
	//printf("\n");

	/*scanf(%s): �ܾ �о�ͼ� ������ ����
	gets(�����ּ�):  �Է��� ����(���ڿ�)�� �о� �ͼ� ������ ����*/

	//char fname[3][20];
	//char fn[20];	// ���� �Է¹޴� ����
	//int i;
	//for(i=0;i<3;i++){
	//	printf("�̸�: ");
	//	gets(fn); // �Է��� ���� fn ������ ����
	//	strcpy(fname[i],fn); // �Է��� ���� �ִ� fn(���ڿ�)�� fname[i]�� �����ϱ� (�� �����ϱ�)
	//}
	//printf("[ �̸� ��� ]\n");
	//for(i=0;i<3;i++){
	//	printf("�̸� ����ϱ� : %s\n",fname[i]); // ������ ���� �ִ� �迭 ������ ���� ����ϱ�
	//}

	// �л��� ���� ���� �Է¹ޱ�
	// �� ���� �л� ������ �Է� �޾� ������ �� ����� ������
	// �̸�:
	// �а�:
	// �й�:

	//char students[2][3][100];
	//char cont[100];
	//int i,j;

	//for(i=0;i<2;i++){
	//	printf("�л� %d \n",i+1);
	//	for(j=0;j<3;j++){
	//		if(j==0){
	//		printf("�л� %d �̸�: ",i+1);
	//		}
	//		else if(j==1){
	//			printf("�л� %d �а�: ",i+1);
	//		}
	//		else{
	//			printf("�л� %d �й�: ",i+1);
	//		}
	//		//scanf("%s",students[i][j]);
	//		gets(cont);
	//		strcpy(students[i][j],cont);
	//	}
	//}
	//printf("\n����ϱ�! \n\n");
	//for(i=0;i<2;i++){
	//	printf("�л� %d \n",i+1);
	//	for(j=0;j<3;j++){
	//		if(j==0){
	//		printf("�л� %d �̸�: %s\n",i+1,students[i][j]);
	//		}
	//		else if(j==1){
	//			printf("�л� %d �а�: %s\n",i+1,students[i][j]);
	//		}
	//		else{
	//			printf("�л� %d �й�: %s\n",i+1,students[i][j]);
	//		}
	//	}
	//}

		

	system("pause");
}