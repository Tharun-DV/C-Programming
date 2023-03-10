
#include <stdio.h>
#include <string.h>


void addBinary(char b1[], char b2[], int l1, int l2)
{
	int carry = 0, temp, num1, num2, i;
	char result[100];

	result[l1 + 1] = '\0';


	while (l2 > 0) {
		num1 = b1[l1 - 1] - '0';
		num2 = b2[l2 - 1] - '0';
		temp = num1 + num2 + carry;
		if (temp >= 2) {
			carry = 1;
			temp = temp % 2;
		}
		result[l1] = temp + '0';
		l1--;
		l2--;
	}

	while (l1 - 1 >= 0) {
		temp = b1[l1 - 1] + carry - '0';
		if (temp >= 2) {
			carry = 1;
			temp = temp % 2;
		}
		result[l1] = temp + '0';
		l1--;
	}


	if (carry) {
		result[0] = '1';
	}
	else {

		for (i = 0; i < strlen(result) - 1; i++) {
			result[i] = result[i + 1];
		}
		result[strlen(result) - 1] = '\0';
	}

	printf("%s + %s = %s\n", b1, b2, result);
}


int main()
{
	char b1[100],b2[100];
	int l1, l2;

	printf("Enter binary number 1: ");
	scanf("%s", b1);
	printf("Enter binary number 2: ");
	scanf("%s", b2);
	l1 = strlen(b1);
	l2 = strlen(b2);


	if (l1 > l2) {
		addBinary(b1, b2, l1, l2);
	}
	else {
		addBinary(b2, b1, l2, l1);
	}

	return 0;
}
