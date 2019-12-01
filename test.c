#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//猜数字游戏

int Menu(){
	printf("====================\n");
	printf("欢迎来到猜数字游戏!\n");
	printf(" 1. 开始游戏\n");
	printf(" 0. 结束游戏\n");
	printf("====================\n");
	printf(" 请输入您的选择:");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}

void Game(){
// 1. 先生成一个随机的整数(1-100).
	int toGuess = rand() % 100 + 1;
//rand生成的数字比较大,% 100(求余)后的值在[0,99]内,+ 1 后值的范围在[0-100]
//rand函数是伪随机,可以理解为通过一个数学公式算出的数列,
//初始值(随机种子)相同,得到的数列也是一样的
	while (1){
		// 2. 提示用户猜一个数字
		printf("请输入您猜测的数字(1-100):");
		int num = 0;
		scanf("%d", &num);
		// 3. 根据用户的输入提示用户是"猜高了","猜低了",还是"猜对了".
		if (num < toGuess){
			printf("猜低了!\n");
		}
		else if (num > toGuess){
			printf("猜高了!\n");
		}
		else{
			printf("猜对了!\n");
			break;//没想出循环条件时,可用while(1)
		}
	}
	
}

int main(){
	srand((unsigned)time(0));
//time函数得到的是一个时间戳,从1970年1月1日0时0分为基准,时间戳为求差
	while (1){
		int choice = Menu();
		if (choice == 1){
			//开始一局游戏.
			Game();
		}
		else if (choice == 0){
			printf("goodbye!\n");
			break;
		}
		else{
			printf("您的输入有误!\n");
		}
	}
	system("pause");
	return 0;
}

