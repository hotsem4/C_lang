#define _CRT_SECURE_NO_WARNING		// strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h>

struct Person {			// ����ü ����
	char name[20];		// ����ü ��� 1
	int age;			// ����ü ��� 2
	char address[100];	// ����ü ��� 3
};

int main() {
	struct Person* p1 = malloc(sizeof(struct Person));			// ����ü ������ ����, �޸� �Ҵ�

	// ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� �Ҵ�
	strcpy(p1->name, "ȫ�浿");
	p1->age = 30;


}