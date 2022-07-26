#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc, char* argv[]){

	FILE *fp1 = fopen(argv[1], "rb");
	FILE *fp2 = fopen(argv[2], "rb");

	uint32_t n1 = 0;
	uint32_t n2 = 0;
	fread(&n1, 1, sizeof(uint32_t), fp1);
	fread(&n2, 1, sizeof(uint32_t), fp2);


	n1 = ntohl(n1);
	n2 = ntohl(n2);
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", n1, n1, n2, n2, n1+n2, n1+n2);
	
	fclose(fp1);
	fclose(fp2);

	return 0;	
}
