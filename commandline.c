#include <stdio.h> 
int main(int argc, char *argv[]) { 
printf("Program name: %s\n", argv[0]); 
if (argc > 1) { 
printf("Argument: %s\n", argv[1]); 
} 
return 0; 
}