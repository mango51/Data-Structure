#include <stdio.h>

char grade[3];
char printGrade(int a,int b){
	if(a>=90){
		grade[b] = 'A';
	}
	else if(a>=80){
		grade[b]='B';
	}
	else if(a>=70){
			grade[b]='C';
	}
	else if(a>=60){
		grade[b] = 'D';
	}
	else{
		grade[b] = 'F';
	}
	return grade[b];
}

void main() {	// ()�Լ��Դϴ�
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
	int b[5] = { 1,2,3,4,5 };
	int c[5] = { 1,2,3 };  //���� ������ 0���� ä����
	int d[] = { 1,2,3,4,5 };  //�迭 ũ�� �����ο�
	int e[] = { 1 };

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
	//	printf("e[%d]=%d\n",i, e[i]);  //[0]�� ���� ������ [1],[2],[3],[4]���� ���� ���� ������ ������ �� �Ҵ���
	//}

	//�г⺰ ������ �Է� �޾Ƽ� ����� �����ϰ� �迭�� ������ �� ��ü �г��� ������ �� �г��� ��ް� ������ ����غ�����
	// [�г⺰ ����]
	// 1�г� : ���� = __�� / ��� = ___���
	// 2�г� : ���� = __�� / ��� = ___���
	// 3�г� : ���� = __�� / ��� = ___���
	//  ��ü ���� : __ ��

	int score[3];

	printf("1�г� ����: ");
	scanf("%d",&score[0]);
	printf("2�г� ����: ");
	scanf("%d",&score[1]);
	printf("3�г� ����: ");
	scanf("%d",&score[2]);

	printf("[�г⺰ ����]\n");
	for(int i=0;i<3;i++){
		printf("%d �г� : ���� = %d �� / ��� = %c ��� \n", i+1, score[i], printGrade(score[i],i));
	}

	/*int score1[3], sc;
	char grade1[3];
	int sum = 0, i;
	for (i = 0; i < 3; i++) {
		printf("%d�г� ���� �Է� : ", i + 1);
		scanf("%d", &sc);
		score1[i] = sc;
		if (sc >= 90) {
			grade1[i] = 'A';
		}
		else if (sc >= 80) {
			grade1[i] = 'B';
		}
		else if (sc >= 70) {
			grade1[i] = 'C';
		}
		else if (sc >= 60) {
			grade1[i] = 'D';
		}
		else {
			grade1[i] = 'F';
		}
		sum = sum + score1[i];
	}

	for (i = 0; i < 3; i++) {
		printf("%d �г� : ���� = %d �� / ��� = %c ��� \n", i + 1, score1[i], grade1[i]);
	}*/

	//������ �Է¹ް�, �Է� ���� ���� �������� ����� ������
	printf("\n");
	int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	printf("%d�� ������\n",num);
	for (int i = 0; i <= 10; i++) {
		printf("%d * %d = %d\n",num,i,num*i);
	}
}