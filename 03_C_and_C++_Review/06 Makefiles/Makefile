.PHONY: 01 01_obj 01_obj_exe_run 02 03 clean

GCC = gcc
NVCC = nvcc
CUDA_FLAGS = -arch=sm_86

01: #When you type 01 in the terminal....
	@$(GCC) -o 01 01.c 
#it performs this command ^ The @ means it doesn't show in the terminal


# just compiles to object file
01_obj:
	@$(GCC) -c 01.c -o 01.o

# compiles and runs the object file (ensure 01_obj is up to 
# date by running 01_obj first if it hasn't been run yet)
01_obj_exe_run: 01_obj
	@$(GCC) 01.o -o 01
	@./01

02:
	@$(GCC) -o 02 02.c

03: 
	@$(NVCC) $(CUDA_FLAGS) -o 03_cu 03.cu

clean: 
	@rm -f 01 02 03_cu *.o

# Make files are a way to automate long terminal command lines with smaller phrases =)
# It's basically starcraft macros. Defining a command in a makefile like '@rm -f 01 02 03_cu *.o' will run when you just type in 'clean'