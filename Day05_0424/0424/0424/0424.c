#include <stdio.h>


void main(){
	char c1, c2, c3, c4, c5;
	char str[6];
	char str2[6] = "Hello"; // ���ڹ迭�� ���ڿ��� ������ֱ�
	// ���ڹ迭�� ���ڿ��� �ٲٰ�  Hello ������ �ʱ�ȭ
	char str3[15] ="Hello World";	// Hello World�� �ּҰ� ( H�� ù �ּҰ� = �����ּ�)
	char *ptr;	//  �����ʹ� �ּ�
	int i,j;
	char * ptr1 = "Hello";
	char * ptr2 = "World";
	char * p_arr[2];
	// �����ʹ� 4����Ʈ
	char * ptr3[2] = {"Korea", "Seoul"};
	char ** pptr; // ���� ������


	p_arr[0] = ptr1;	//p_arr[0] = "Hello"; �� ���� >> H�� �����ּҸ� ������ ���� "Hello"�� p_arr[0]�� ��������
	p_arr[1] = ptr2;	//p_arr[1] = "World"; �� ����
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
	printf("%s\n",str);	// \0�� ����Ͽ� ���ڿ����� �ν��ϰ� ���ֱ� (���ڹ迭�� ����ϱ�)
	printf("%s\n",str2);	// ���ڿ��� ����ϱ�
	printf("%s\n","Hello World");
	printf("%s\n", "Hello World"+3);
	// ���ڹ迭�� �̸��� �������� ù �ε����� �ּҰ�

	str3[0] = 'C';
	//�迭�� �̸��� ��� >> �迭�� �̸��� �ּҰ�

	// ptr[0] = 'C'; >> ����!!! > �迭�� �����Ͱ� �ٸ� �� (�迭�� ���, �����ʹ� ����)
	// ptr[0]�� Hello DataStructure�� �ּҰ��̶� �ּҰ���  'C' (����) �������ϱ� ���� X
	// �迭�� ������ ����̹Ƿ� �ٸ� ������ ����ų �� ����, �����ʹ� �����̹Ƿ� ������ �����մϴ�.

	// ptr[0]�� �迭�� �ƴ� >> �ּҰ� �˷��ִ� ���� >> ���� �ڵ�� ���� ���� >> ������ �������� ���� ���� X
	printf("ptr : %s\n",ptr); // ptr ������ ������ ���ڿ� %s�� ����ϱ� 
	printf("str : %s\n", str);

	for(i=0;i<10;i++){
		printf("%c",*(ptr+i));	// �ּҰ� �ϳ��ϳ��� �ҷ�����
	} // ptr�� H�� �ּ� ptr, e�� ptr+1 ... �ش� �ּ� �����ϴϱ� ������ ��� (�ε��� 10�� ����)

	printf("%s %s\n", ptr1, ptr2);

	for(j=0;j<2;j++){
		printf("%s",p_arr[j]);	// �ּҰ��� �� ���� �������� ( �ּҰ� �ȿ�  Hello �ּҰ�)
		// %s�� ���� ���ڿ� ������ ���� (�ش� ���ڿ��� �ּҰ��� ������ �ͼ�  Hello�� World�� ���!
	}	//%s�� ���ڿ��Ӹ� �ƴ϶� ���ڿ��� ���� �ּҸ� ������ �ش� �ּҿ� �����Ͽ� ���ڿ� ��� (\0 ���� ������)
	printf("\n");

	ptr3[0] = "Korea";
	ptr3[1] = "Seoul";

	pptr = ptr3;	// ptr3�� ���� �����ּ� ���� ��
	// ***�迭�� �̸��� �迭�� �����ּ�!!!

	printf("ptr3= %p/ pptr = %p\n",ptr3,pptr);
	printf("\n");

	printf("pptr�� �ּ� : %p / pptr = %p\n",&pptr, pptr);	// pptr�� �ּҿ� pptr�� ���� �ּ�
	printf("ptr3[0]�� �ּ� : %p /  ptr3[0] = %p\n",&ptr3[0], ptr3[0]); // ptr3�� �ּ�(ptr3�� �����ּ�)�� ptr3[0] ���� Korea(�ּ� �������� ǥ��)
	printf("*ptr3[0] = %c / *ptr3=%s\n", *ptr3[0], *ptr3);	//�ּҰ� �����ؼ� �� �����ϱ� (%c�� �� ���ڸ�, %s�� ���ڿ�)

	printf("ptr3[1]�� �ּ� : %p / ptr3[1] : %p\n", &ptr3[1], ptr3[1]);
	printf("*ptr3[1] = %c / *ptr3 = %s\n", *ptr3[1], *(ptr3+1));	
	//*(ptr+1) : ptr3�� �����ּ��̹Ƿ� +1�� ���� ���� �ε����� �ּҰ����� �����ϱ� = *(�ε���1�� �ּҰ� + 1 (���� �ε���)) = *(�ε��� 2�� �ּҰ�)
	printf("\n");

	printf("&pptr = % p / pptr = %p \n", &pptr, pptr); // pptr�� ptr3�� �����ּ�, &pptr�� pptr�� �ּҰ�
	printf("*(*pptr) = %c / *pptr = %s\n", *(*pptr), *pptr);
	printf("\n");
	// %p = �ּ� ���� (���� ������)
	printf("*(*(pptr+1)) = %c / *(pptr+1) = %s\n", *(*(pptr+1)), *(pptr+1));	// pptr = ptr3�̹Ƿ� pptr+1 = ptr3[0] + 1 = ptr3[1]
	// ptr3[1]�� �ּҰ�, �ش� �ּҰ��� �����Ͽ� �� ����
	printf("\n");
	*(pptr+1) = "Busan";
	printf("*(pptr+1) = ptr3[0]�� ���� �ε���(+1)��  ptr3[1]�� �� = %s\n", *(pptr+1));
	printf("\n");
	for(i = 0; i<2; i++){
		printf("%s\n", *(pptr+i));
	}

}