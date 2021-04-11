#include <stdio.h> // 다른 사람이 이미 만들어놓은 라이브러리 사용
#include <string.h>
#include <stdlib.h> // system 함수 사용할 때 필요한 라이브러리

//헤더에 사용할 함수 미리 선언해두기 (언제나 다른 파일에서 가져가서 함수 내용 수정해서 사용 가능)

typedef int element; //element 자료형 선언
int score;
element score; // int score와 동일함

void func_st_push(element item);
element func_st_pop();
void func_st_del();
element func_st_peek();
void func_st_print();
