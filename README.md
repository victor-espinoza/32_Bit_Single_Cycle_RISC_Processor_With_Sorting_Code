Project Overview:  
 
Single Cycle RISC Processor with additional sorting code to verify the correctness of the processor.  
  
The purpose of this lab was to build off of the Single Cycle MIPS Processor that I created in the previous lab and use it to solve a problem. For this problem, I was given an assortment of values filling data memory addresses 0x200 to 0x3FF. I then had to add the 32 largest values within this memory space together and store that value in data memory address 0x100.   
  
After this, I needed to add the 32 smallest values within this memory space together and store that value into data memory address 0x101. Finally, I needed to AND all of the values together, OR all of the values together, and perform a checksum on all of the data located within this address range and store those values in data memory addresses 0x102, 0x103, and 0x104, respectively. In order to do this, I needed to write the machine code to sort the data values first and then perform the respective operations on the data afterwards.   
     
The verilog source code files contain an in-depth discussion of each module and its purpose within the project.  

Project Machine Code:  
00:	  addi $r1,  $r0, 0x0001 	   
04:	  addi $r10, $r0, 0x01FF	   
08:	  addi $r11, $r0, 0x01FF  
0C:	  addi $r2,  $r0, 0x0000	      
10:	  addi $r3,  $r0, 0x0000   
14:	  addi $r4,  $r0, 0x0800	  
18:	  lw   $r5,  $r4, 0x0000	  
1C:	  lw   $r6,  $r4, 0x0004	  
20:	  slt  $r7,  $r5, $r6	   	  
24:	  bne  $r7,  $r1, 0x0008		  
28:	  sw   $r5,  $r4, 0x0004		  
2C:	  sw   $r6,  $r4, 0x0000	  
30:	  addi $r4,  $r4, 0x004		  
34:	  addi $r3,  $r3, 0x0001	  
38:	  bne  $r3,  $r11, 0xFFDC		  
3C:	  addi $r2,  $r2, 0x0001	  
40:	  sub  $r11, $r11, $r1		  
44:	  bne  $r2,  $r10, 0xFFC8	 	  
48:	  addi $r8, $r0, 0x0800		  
4C:	  addi $r9, $r0, 0x0FFC		  
50:  	addi $r10, $r0, 0x0020	  
54:	  addi $r15, $r0, 0x0000		  
58:	  addi $r11, $r0, 0x0000	  
5C:	  addi $r12, $r0, 0x0000		  
60:	  lw $r13, $r8(0x0000)		  
64:	  lw $r14, $r9(0x0000)		  
68:	  add $r11, $r11, $r13	 	  
6C:	  add $r12, $r12, $r14		  
70:	  addi $r8, $r8, 0x0004	  
74:	  addi $r9, $r9, 0xFFFC	  
78:	  addi $r15, $r15, 0x0001		  
7C:	  bne $r10, $r15, 0xFFE0	  
80:	  addi $r16, $r0, 0x0000	  
84:	  addi $r17, $r0, 0x0800	  
88:	  addi $r18, $r0, 0x0200	  
8C:	  lui $r19, 0xFFFF		  
90:	  ori $r19, $r19, 0xFFFF		  
94:	  addi $r20, $r0, 0x0000		  
98:	  addi $r21, $r0, 0x0000		  
9C:	  lw $r22, $r17(0x0000)		  
A0:	  and $r19, $r19, $r22	  
A4:	  or $r20, $r20, $r22		  
A8:	  addu $r21, $r21, $r22	  
AC:	  addi $r17, $r17, 0x0004		  
B0:	  addi $r16, $r16, 0x0001		  
B4:	  bne $r16, $r18, 0xFFE4		  
B8:	  addi $r30, $r0, 0x0400	  
BC:	  sw $r11, $r30(0x0000)		  
C0:	  sw $r12, $r30(0x0004)	  
C4:	  sw $r19, $r30(0x0008)		  
C8:	  sw $r20, $r30(0x000C)		  
CC:	  sw $r21, $r30(0x0010)	  
D0:	  beq $r0, $r0,  0xFFFC		  
  
Here is the block-diagram for this project:      
![ScreenShot](https://cloud.githubusercontent.com/assets/14812721/24940286/0c93931e-1ef7-11e7-8c45-b3658d81031e.jpg)  
  
Dependencies:    
This project was created using the Xilinx ISE Project Navigator Version: 14.7.  
  
Project Verification:      
In order to verify the correctness of my project, I used a combination of looking at the waveforms, writing data to a file, and looking at the physical addresses of the data memory to make sure that everything was sorted correctly.   
  
Looking at the waveforms was effective, but there were so many iterations and it turned out to be really inefficient looking at each instruction being executed every clock cycle. In order to remedy this, I was able to write helpful messages to a file every time a RegWrite or a MemWrite occurred (thanks to the help of the video that the professor posted!) so that I knew the address of the Program Counter and the register and contents that were being written to it.   
  
I also displayed the output of the final result to the console/wrote those values into the file when the program was done executing. I also made use of the memory column of the ISim program so that I could physically see the contents within the data memory. This made it alot easier for me to verify the correctness of my program and make sure that my sorting algorithm was working properly.   
  
Using all of these methods together, I was able to verify that my machine code was in fact correct. 
