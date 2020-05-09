/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************

*/
#include <stdio.h>
#include <stdint.h>

void array_display(uint8_t *pArray, uint32_t length);

void swap_Arrays(uint8_t *pArray1,uint8_t *pArray2, uint32_t length);


// displays array contents
void array_display(uint8_t *pArray, uint32_t length)
{
	for(uint32_t i = 0;i<length;i++){
		printf("Contents = %x \n", pArray[i]);


	}
}

// swap Array contents and print them before and after swapping
void swap_Arrays(uint8_t *pArray1,uint8_t *pArray2, uint32_t length)
{
	printf("Array1 before swapping: \n");
	array_display(pArray1,length);
	printf("Array2 before swapping: \n");
	array_display(pArray2,length);

	uint8_t temp;
	for(uint32_t i = 0;i<length;i++)
	{
		 temp = pArray2[i];

		 pArray2[i]= pArray1[i];
		 pArray1 [i] = temp;


	}

	printf("First Array1 after swapping: \n");
	array_display(pArray1,length);
	printf("Second Array2 after swapping: \n");
	array_display(pArray2,length);


}




int main(void)
{
	uint8_t someData1[3] = {0xff,0xf3,0xff};
	uint8_t someData2[3] = {0x11,0x12,0x13};
    uint32_t nItems = 0;


	nItems = sizeof(someData1)/sizeof(uint8_t);



    swap_Arrays(someData1, someData2, nItems);



}

