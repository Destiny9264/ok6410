#include "atag.h"
#include "string.h"

void (*theKernel)();

#define SDRAM_KERNEL_START 0x51000000

void test_led_on(){
	
	//1.��ȡLinux������ַ
	theKernel = (void (*)( ))SDRAM_KERNEL_START;

	theKernel();
	printf("qi dong linux nei he");
	
	}