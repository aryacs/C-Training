#include <stdio.h> 
int main(int argc, char *argv[]) { 
if (argc != 3) { 
printf("Usage: %s source_file target_file\n", argv[0]); 
return 1; 
    } 
 
    FILE *src = fopen(argv[1], "r"); 
    FILE *dest = fopen(argv[2], "w"); 
 
    if (src == NULL || dest == NULL) { 
        printf("Error opening file.\n"); 
        return 1; 
    } 
 
    char ch; 
    while ((ch = fgetc(src)) != EOF) { 
        fputc(ch, dest); 
    } 
    fclose(src); 
    fclose(dest); 
    printf("File copied successfully.\n"); 
    return 0; 
} 