#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

int main(){

	int arr[] = { 2, 5, 1, 3, 4 };

	for (auto &i : arr){//引用i，执行操作
		i *= 2;
	}

	for (auto i : arr){
		cout << i << endl;
	}

	system("pause");
	return 0;
}