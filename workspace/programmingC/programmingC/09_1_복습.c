#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num = 0;
	printf("행의 갯수를 입력하세요: ");
	scanf("%d", &num);

	//사용자에게 행의 갯수를 입력받아 그 행의 갯수만큼 아래 모양의 별을 출력
		// *
		// **
		// ***
		// ****
		// *****
	for (int j = 0; j < num; j++) {
		for (int i = 0; i <= j; i++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//		 i	num-1-i	
	//     * 0	  4
	//    ** 1	  3
	//   *** 2	  2
	//  **** 3	  1
	// ***** 4	  0
	//#1
	for (int i = 0; i < num; i++) {
		for (int j = 0; i < num - 1 - j; j++) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//#2
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (j<num-1-i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n");


	//				i	" "(n-i-1)	"*"
	//     *		0		4		1
	//	  ***		1		3		3
	//   *****		2		2		5
	//  *******		3		1		7
	// *********	4		0		9
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");


	// n = 5 일때	i	j" "		j"*"	j" "
	//     *		0	0123		4		5678
	//    * *		1	012		  3 4 5		 678
	//   *   *		2	01		 2 345 6	  78
	//  *     *		3	0		1 23456 7	   8
	// *********	4		   0 1234567 8

	//     *		0	0123	      n-1		5678
	//    * *		1	012		    n-2 4 n		 678
	//   *   *		2	01		 n-3 345 n+1	  78
	//  *     *		3	0		n-4 23456 n+2	   8
	// *********	4			  012345678

	// "*" 출력: n-1-i, n-1+i
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 2 * num - 1; j++) {
			if (i == num - 1) {
				printf("*");
				continue;
			}

			if (j == num - 1 - i || j == num - 1 + i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}