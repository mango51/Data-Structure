#include "stack_0411.h" // ����ڰ� ������ ���� (in �������)  ��  " "����ؼ� include�ϱ�

element stack[5];
int top = -1;

void func_st_push(element item) { //���ÿ� ������ ����
	++top;
	if (top > (sizeof(stack)/4-1)) {
		printf("overflow!");
	}
	else {
		stack[top] = item;
		printf("������ ���� �Ϸ�!\n");
	}
}
element func_st_pop() { //�������� ���� ������ ���� (���ÿ��� ������ ����)
	if (top == -1) {
		printf("error");
		return 0;
	}
	else {
		printf("������ ���� �Ϸ�!\n");
		return 0;
	}
}
void func_st_del() { //���ÿ� �ִ� ������ ���� (������ �ʿ��� ������)
	if (top == -1) {
		printf("error");
	}
	else {
		stack[top] = 0;
		--top;
	}	
}
element func_st_peek() { //����� ���� ������ �˻� (���� ���� ������ �ִ��� üũ)
	return top;
}
void func_st_print() { //������ ��� �����͸� ���
	for (int i = 0; i < 5; i++) {
		printf("stack[%d]=%d\n", i, stack[i]);
	}
}