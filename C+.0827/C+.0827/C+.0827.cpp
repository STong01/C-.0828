#include <iostream>
#include <stdlib.h>
using namespace std;

//void InsertSort(int * src, int n){
//	int i, j;
//	int tmp;
//	for (i = 1; i < n; i++){
//		tmp = src[i];
//		for (j = i; j>0 && src[j - 1] > tmp; j--){
//			src[j] = src[j - 1];
//		}
//
//		src[j] = tmp;
//	}
//}

//void InsertSort(float * src, int n){
//	int i, j;
//	float tmp;
//	for (i = 1; i < n; i++){
//		tmp = src[i];
//		for (j = i; j>0 && src[j - 1] > tmp; j--){
//			src[j] = src[j - 1];
//		}
//
//		src[j] = tmp;
//	}
//}
//
//bool cmpnum(int a, int b){
//	return a < b;
//}
//
//void InsertSort(int * src, int n, bool(*cmp)(int ,int) = cmpnum){
//	int i, j;
//	int tmp;
//	for (i = 1; i < n; i++){
//		tmp = src[i];
//		for (j = i; j>0 && cmp(tmp, src[j - 1]); j--){
//			src[j] = src[j - 1];
//		}
//
//		src[j] = tmp;
//	}
//}
//
//void sort(int * src, int n, int flag = 0){
//	switch (flag){
//	case 0:
//		InsertSort(src, n);
//		break;
//	case 1:
//		break;
//	case 2:
//		break;
//	}
//}
//
//bool cmpwaytest(int a, int b){
//	return a > b;
//}
//
//
//
//int main(){
//	int a[5] = { 5, 1, 4, 2, 3 };
//	float f[5] = { 8.2, 1.7, 3.5, 2.6, 4.8 };
//
//	//InsertSort(a, 5, cmpnum);
//	InsertSort(a, 5, cmpwaytest);
//	InsertSort(f, 5);
//
//	for (auto i : a){
//		cout << i << endl;
//	}
//
//	for (auto i : f){
//		cout << i << endl;
//	}
//
//	system("pause");
//	return 0;
//}

bool strtoi(const char * src, int &res){

	if (!src){
		return false;
	}
	while (*src <= ' '){
		src++;
	}

	int flag = 1;
	if (*src == '-'){
		flag = -1;
		src++;
	}

	if (*src  > '9 '|| *src < '0'){
		return false;
	}
	int sum = 0,tmp ;
	int i;
	for (i = 0; src[i] <= '9' && src[i] >= '0'; i++){
		tmp = src[i] - '0';
		sum = sum * 10 + tmp;
	}
	res = sum * flag;

	return true;
}

void sysReverse(int &num, int hex){

	int i;
	int tmp, sum = 0;
	for (i = num; i; i /= hex){
		tmp = i % hex;
		sum = sum * hex + tmp;
	}
	num = sum;
}

int main2(){

	int res;
	int num = 1723;
	sysReverse(num, 16);
	cout << num <<endl;


	/*if(strtoi("\\n\n\nn\n\n\      -127", res)){
		cout << res << endl;
	}
	else{
		cout << "fail\n";
	}*/
	system("pause");
	return 0;

}