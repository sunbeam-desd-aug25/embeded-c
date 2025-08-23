#include<stdio.h>
/*
	Arithematic Opr
	 - It is a Binary Opr
	 - It is used to perform arithematic operations
	 - It is used with numeric data types only
	 - It always returns numeric value
	 - It follows BODMAS rule

	 +  -> Addition
	 -  -> Subtraction
	 *  -> Multiplication
	 /  -> Division
	 %  -> Modulus (Reminder)  // It is used with integer data type only

	 
*/

int main()
{      
/*
	int n1,n2,res;
	printf("Enter The Two values : ");
	scanf("%d%d",&n1,&n2);

	res = n1 + n2;
	printf("Res : %d \n",res);

	res = n1 - n2;
	printf("Res : %d \n",res);

	res = n1 * n2; 
	printf("Res : %d \n",res);

	res = n1 / n2 ; // Quotient
	printf("Res : %d \n",res);
	
	res = n1 % n2 ; // Reminder
	printf("Res : %d \n",res);
*/

/*
	unsigned char n1,n2,res;
	scanf("%c%c",&n1,&n2); //  A= 65  B= 66

	res = n1 + n2;// 65 + 66
	printf("Res : %d \n",res);

	res = n1 - n2;// 65 -66  => -1
	printf("Res : %d \n",res);// 255

	res = n1 * n2; // 65 * 66
	printf("Res : %d \n",res);

	res = n1 / n2 ; // Quotient
	printf("Res : %d \n",res);
	
	res = n1 % n2 ; // Reminder
	printf("Res : %d \n",res);
*/
	float n1,n2,res;
	printf("Enter Two float Num : ");
	scanf("%f%f",&n1,&n2); 

	res = n1 + n2;
	printf("Res : %f \n",res);

	res = n1 - n2;
	printf("Res : %f \n",res);// 255

	res = n1 * n2;
	printf("Res : %f \n",res);

	res = n1 / n2 ; // Quotient  -> OK
	printf("Res : %f \n",res);
	
//	res = n1 % n2 ; // Reminder --> error
                    // It is used with integer data type only
//	printf("Res : %d \n",res);
	return 0;
}




