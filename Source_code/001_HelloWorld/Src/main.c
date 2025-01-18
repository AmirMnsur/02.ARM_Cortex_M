/**
  ******************************************************************************
  * @file    main.c
  * @author  AmirMnsur by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include<stdio.h>

int main(void)
{
	/* This message is going to be displayed on SWV ITM data console of the IDE.
	 * Make sure the message terminates with '\n' character.
	 * syscalls.c must contain code given in the below link
	 * https://https://github.com/AmirMnsur/2.ARM_Cortex_M
	 */
	printf("Hello world\n");

	for(;;);
}
