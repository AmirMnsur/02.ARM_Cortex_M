/**
 ******************************************************************************
 * @file           : main.c
 * @author         : AmirMnsur by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
*/


#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include<stdint.h>
#include<stdio.h>

void SVC_Handle_c(uint32_t *pBaseStackFrame);

int32_t (int32_t x , int32_t y )
{

}


int32_t sub_numbers(int32_t x , int32_t y )
{

}

int32_t mul_numbers(int32_t x , int32_t y )
{

}

int32_t div_numbers(int32_t x , int32_t y )
{

}


int main(void)
{

    for(;;);
}


__attribute__( ( naked ) ) void SVC_Handler( void )
{
    __asm ("MRS r0,MSP");
    __asm( "B SVC_Handler_c");
}


void SVC_Handler_c(uint32_t *pBaseOfStackFrame)
{
    printf("in SVC handler\n");

    int16_t arg0, arg1,res;

    uint8_t *pReturn_addr = (uint8_t*)pBaseOfStackFrame[6];

    //2. decrement the return address by 2 to point to
    //opcode of the SVC instruction in the program memory
    pReturn_addr-=2;


    //3. extract the SVC number (LSByte of the opcode)
    uint8_t svc_number = *pReturn_addr;

    printf("Svc number is : %d\n",svc_number);



}
