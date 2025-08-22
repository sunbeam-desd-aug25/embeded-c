#include<stdio.h>

int main()
{
/*
	int x;
	//printf("Sunbeam"); 
	// it will print Sunbeam on console
	// here printf() will return number of characters printed on console
	// so we can store that return value in variable x

	x= printf("Sunbeam");
	printf("x = %d \n ",x); // 7
	 
	x=printf("1234\n");// here \n is also a character
	printf("x = %d \n ",x);//5


	int n1=12;
	printf("%d\n",n1);//12

	printf("%5d\n",n1);//12
	//     ___12
	//     _____
	printf("%-5d\n",n1);//12
    //      12___
    //      _____


	int n2=123456;
	printf("%d\n",n2);//12

	printf("%5d\n",n2);//12
        //     123456
	//     ___12
	//     _____
	printf("%-5d\n",n2);//12
        //     123456
        //     12___
        //     _____




*/
	float p1=3.142;
	printf("%f\n",p1);//3.142000
	printf("%.2f\n",p1);//3.14
	printf("%.3f\n",p1);//3.14
	printf("%.4f\n",p1);//3.14

	printf("%15f\n",p1);
        //       3.142000
        //_______________


	printf("%15.2f\n",p1);
        //                3.14
        //     _______________

	// Here * is used to specify width and precision at runtime
	// instead of giving width and precision in format specifier we can give it in argument list
	// first * is for width and second * is for precision
	// width and precision value will be given in argument list before variable to be printed
	// width and precision value should be of int type
	printf("%*.*f\n",15,2,p1);
       //      %15.2f

}





