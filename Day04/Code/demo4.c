#include<stdio.h>
#include<limits.h>

int main()
{

	//printf("Data Type    Format Specifier    Size   Min Range       Max Range  \n");
	//printf("sighned char     %%c             %ld      %d               %d \n ",sizeof(char),SCHAR_MIN,SCHAR_MAX );

printf("----------------------------------------------------------------------------\n");
printf("%-15s %-18s %-15s %-15s %-15s \n ","Data Type","Format Specf", "Size" , "Min Range", "Max Range" );
printf("----------------------------------------------------------------------------\n");
printf("%-15s %-15s %-15ld  %-15d %-15d \n","signed char","%c",sizeof(char),SCHAR_MIN,SCHAR_MAX);
printf("%-15s %-15s %-15ld  %-15d %-15d \n","Unsigned Char","%c",sizeof(char),0,UCHAR_MAX);
printf("%-15s %-15s %-15ld  %-15d %-15d \n","signed short","%hd",sizeof(short),SHRT_MIN,SHRT_MAX);
printf("%-15s %-15s %-15ld  %-15d %-15d \n","Unsigned short","%hu",sizeof(short),0,USHRT_MAX);
printf("%-15s %-15s %-15ld  %-15d %-15d \n","signed int","%d",sizeof(int),INT_MIN,INT_MAX);

	return 0;
}
