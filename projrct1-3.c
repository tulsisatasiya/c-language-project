#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter two numbers a and b ");
   scanf("%d %d", &a, &b);
	
	

    c = a;
    a = b;
    b = c;

    
  printf("\n After swapping \na = %d\nb = %d\n", a, b);
}
