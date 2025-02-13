#include <stdio.h>

int main() {
	int a, b, c;
	
	//nhap gia tri a, b va c
	printf("nhap gia tri a: ");
	scanf("%d", &a);
	printf("nhap gia tri b: ");
	scanf("%d", &b);
	printf("nhap gia tri c: ");
	scanf("%d", &c);
	
	if (a > b && a > c) 
		printf("%d la gia tri lon nhat.", a);
	else if (b > a && b > c)
		printf("%d la gia tri lon nhat.", b);
	else if (c > a && c > b)
		printf("%d la gia tri lon nhat.", c);
	else 
		printf("khong co so nao lon nhat!!!");
		
	return 0;
}
