#include "stack_0411.h"

void main() {
	int data,num;
	while (1) {
		printf("\n");
		printf("1. 데이터 삽입\n");
		printf("2. 데이터 삭제\n");
		printf("3. 데이터 조회\n");
		printf("4. 프로그램 종료\n");
		printf("번호 입력: ");
		scanf("%d", &num);
		if (num == 1) {
			printf("숫자 입력: ");
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