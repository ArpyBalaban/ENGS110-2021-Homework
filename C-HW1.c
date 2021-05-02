#include <stdio.h>

#include <stdlib.h>

#include <math.h>


void toBinary (int n)
{
	unsigned long bin = 8*sizeof(int);
	bin--;
	bin =pow(2,bin);
	while(n !=0)
	{
		if((n&bin) ==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		n = n<<1;
	}
}

int main(void)

{ 

    int age = 19;

    int a =0;

    int b= 1;

    int sum = 0;

while ( b < age){



   sum = sum + b;

    int temp = a;

    a = b;

     b = temp + b;



}

printf ( "Result : %d \n", sum);

toBinary(sum);

printf ("\n");

}
