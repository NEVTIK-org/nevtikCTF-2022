#include <stdio.h>
#include <string.h>

void main(void){
	int input;
	char flag[50];
	strcpy(flag, "nevtikCTF{sc4n_f0r_flaggss_234f}");

	printf("input 6 number : ");
	scanf("%d", &input);

	if (input == 141509){
		printf("%s", flag);
	} else {
		printf("Your Not Lucky!");
	}
}
