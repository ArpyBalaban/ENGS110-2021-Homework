#include <stdio.h>

#include <stdlib.h>



int power(double base, double exponent)

{

	int i = 0;

	int result = 1;


	while (i < exponent)

	{

		result *=base;

		i++;

	}

	return (result);

}



void decimal_to_binary(int decimal ){



	char input_bits[50];



	printf("How many bit representation: ");

	scanf("%s", input_bits);



	int bits = atoi(input_bits);



	int values = power(2, bits - 1);

	while (values > 0)

	{

		values = power(2, bits - 1);



		if (values > decimal)

		{

			printf("0");

		}

		else

		{

			printf("1");

			decimal = decimal - values;

		}

		values = values - (2^bits);

		bits--;

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

decimal_to_binary(sum);

printf ("\n");

}
