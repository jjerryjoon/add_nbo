#include<stdio.h>
#include<stdint.h>
#include<arpa/inet.h>

int main(int argc, char *argv[]){
	FILE *file1 = fopen(argv[1], "rb");
	FILE *file2 = fopen(argv[2], "rb");

	uint32_t a, b, result;
	
	fread(&a, sizeof(a), 1, file1);
	fread(&b, sizeof(b), 1, file2);

	a = ntohl(a); 
	b = ntohl(b);
	result = a + b;

	printf("%u(0x%x) + %u(0x%x) = %u(0x%x)", a, a, b, b, result, result);
	
	fclose(file1);
	fclose(file2);
	
	return 0;
}
