#define _CRT_SECURE_NO_WARNING		// strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>

struct Person {			// 구조체 정의
	char name[20];		// 구조체 멤버 1
	int age;			// 구조체 멤버 2
	char address[100];	// 구조체 멤버 3
};

int main() {
	struct Person* p1 = malloc(sizeof(struct Person));			// 구조체 포인터 선언, 메모리 할당

	// 화살표 연산자로 구조체 멤버에 접근하여 값 할당
	strcpy(p1->name, "홍길동");
	p1->age = 30;


}