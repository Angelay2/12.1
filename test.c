#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��������Ϸ

int Menu(){
	printf("====================\n");
	printf("��ӭ������������Ϸ!\n");
	printf(" 1. ��ʼ��Ϸ\n");
	printf(" 0. ������Ϸ\n");
	printf("====================\n");
	printf(" ����������ѡ��:");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}

void Game(){
// 1. ������һ�����������(1-100).
	int toGuess = rand() % 100 + 1;
//rand���ɵ����ֱȽϴ�,% 100(����)���ֵ��[0,99]��,+ 1 ��ֵ�ķ�Χ��[0-100]
//rand������α���,�������Ϊͨ��һ����ѧ��ʽ���������,
//��ʼֵ(�������)��ͬ,�õ�������Ҳ��һ����
	while (1){
		// 2. ��ʾ�û���һ������
		printf("���������²������(1-100):");
		int num = 0;
		scanf("%d", &num);
		// 3. �����û���������ʾ�û���"�¸���","�µ���",����"�¶���".
		if (num < toGuess){
			printf("�µ���!\n");
		}
		else if (num > toGuess){
			printf("�¸���!\n");
		}
		else{
			printf("�¶���!\n");
			break;//û���ѭ������ʱ,����while(1)
		}
	}
	
}

int main(){
	srand((unsigned)time(0));
//time�����õ�����һ��ʱ���,��1970��1��1��0ʱ0��Ϊ��׼,ʱ���Ϊ���
	while (1){
		int choice = Menu();
		if (choice == 1){
			//��ʼһ����Ϸ.
			Game();
		}
		else if (choice == 0){
			printf("goodbye!\n");
			break;
		}
		else{
			printf("������������!\n");
		}
	}
	system("pause");
	return 0;
}

