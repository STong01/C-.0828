#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

//黑红梅方
struct Poker{
	char type;
	int point;
};

enum{
	SPADES,//黑桃
	HEARTS,//红桃
	CLUBS,//梅花
	DIAMONDS,//方片
	JOKER,//大小王
	
};

void inputpoker(Poker * pk){
	scanf("%c%d", &pk->type, &pk->point);
	pk->type -= 'a';
	if (pk->type == JOKER){
		pk->point += 13;
	}
	getchar();
}

void outputpoker(Poker k){
	char * type[5] = { "黑桃", "红桃", "梅花", "方片" ,""};
	char * point[16] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "小王", "大王" };
	printf("%s%s\n", type[k.type], point[k.point]);



}

bool cmppoker(Poker a, Poker b){
	return (a.type < b.type) || 
		   (a.type == b.type && a.point < b.point);
}

void InsertSort(Poker * src, int n, bool(*cmp)(Poker, Poker) = cmppoker){
	int i, j;
	Poker tmp;
	for (i = 1; i < n; i++){
		tmp = src[i];
		for (j = i; j>0 && cmp(tmp, src[j - 1]); j--){
			src[j] = src[j - 1];
		}

		src[j] = tmp;
	}
}



int main1(){

	Poker p[5];
	int i;
	for (i = 0; i < 5; i++){
		inputpoker(p + i);
	}
	//while (1){
	//	
	//	inputpoker(&p);
	//	outputpoker(p);
	//	
	//}

	InsertSort(p, 5);

	for (auto i : p){
		outputpoker(i);
	}
	

	system("pause");
	return 0;
}