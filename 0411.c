#include "stack_0411.h"

void main() {
	int data,num;
	while (1) {
		printf("\n");
		printf("1. ������ ����\n");
		printf("2. ������ ����\n");
		printf("3. ������ ��ȸ\n");
		printf("4. ���α׷� ����\n");
		printf("��ȣ �Է�: ");
		scanf("%d", &num);
		if (num == 1) {
			printf("���� �Է�: ");
			scanf("%d", &data);
			func_st_push(data);
			continue;
		}
		else if (num == 2) {
			func_st_del();
			continue;
		}
		else if (num == 3) {
			func_st_print();
			continue;
		}
		else if (num == 4) {
			break;
		}
	}

}