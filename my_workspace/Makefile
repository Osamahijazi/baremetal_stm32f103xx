CC=arm-none-eabi-gcc
MACH=cortex-m3
CFLAGS= -c -mcpu=$(MACH) -mthumb  -std=gnu11 -Wall -O0
LDFLAGS= -mcpu=$(MACH) -mthumb -nostdlib -T stm32_ls.ld -Wl,-Map=final.map


all :main.o GPIO_Program.o RCC_Program.o STK_Program.o FPEC_program.o USART_program.o stm32_startup.o final.elf  final.hex

main.o:main.c
	$(CC) $(CFLAGS) -o $@ $^

GPIO_Program.o:GPIO_Program.c
	$(CC) $(CFLAGS) -o $@ $^

RCC_Program.o:RCC_Program.c
	$(CC) $(CFLAGS) -o $@ $^		

STK_Program.o:STK_Program.c
	$(CC) $(CFLAGS) -o $@ $^	

FPEC_program.o:FPEC_program.c 
	$(CC) $(CFLAGS) -o $@ $^


USART_program.o:USART_program.c 
	$(CC) $(CFLAGS) -o $@ $^
	
	
stm32_startup.o:stm32_startup.c
	$(CC) $(CFLAGS) -o $@ $^

	
final.elf   : main.o GPIO_Program.o RCC_Program.o stm32_startup.o STK_Program.o FPEC_program.o USART_program.o
	$(CC) $(LDFLAGS) -o $@ $^
	
final.hex   : final.elf
	arm-none-eabi-objcopy -O ihex final.elf final.hex	
	
arm-none-eabi-gcc -S -mcpu=cortex-m3 -mthumb main.c
   
   

   
	

	
clean:
	rm -rf *.o *.elf
