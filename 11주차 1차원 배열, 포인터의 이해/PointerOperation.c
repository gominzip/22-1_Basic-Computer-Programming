//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 100, num2 = 100;  // int형 변수 선언 및 초기화
//	int* pnum;  // int형 포인터 변수 pnum
//
//	pnum = &num1;  // 포인터 pnum이 num1을 가리킴
//	(*pnum) += 30;  // num1+=30; 과 동일
//
//	pnum = &num2;  // 포인터 pnum이 num2를 가리킴
//	(*pnum) -= 30;  // num2-=30; 과 동일
//
//	printf("num1:%d, num2:%d \n", num1, num2);  // num1, num2 출력
//	return 0;
//}