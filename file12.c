#include <stdio.h> 
 
int main() { 
    FILE *inputFile, *evenFile, *oddFile; 
    int numbers[30]; 
    int i; 
 
    // Open the input file for writing 
    inputFile = fopen("numbers.txt", "w"); 
    if (inputFile == NULL) { 
        printf("Error opening numbers.txt file.\n"); 
        return 1; 
    } 
 
    // Taking 30 numbers as input from the user 
    printf("Enter 30 numbers:\n"); 
    for (i = 0; i < 30; i++) { 
        scanf("%d", &numbers[i]); 
        fprintf(inputFile, "%d\n", numbers[i]);  // Write each number to the file 
    } 
     
    // Close the input file after writing 
    fclose(inputFile); 
 
    // Open the EVEN and ODD files for writing 
    evenFile = fopen("EVEN.txt", "w"); 
    oddFile = fopen("ODD.txt", "w"); 
    if (evenFile == NULL || oddFile == NULL) { 
        printf("Error opening EVEN.txt or ODD.txt file.\n"); 
        return 1; 
    } 
 
    // Separate the even and odd numbers and write them to respective files 
    for (i = 0; i < 30; i++) { 
        if (numbers[i] % 2 == 0) { 
            fprintf(evenFile, "%d\n", numbers[i]); 
        } else { 
            fprintf(oddFile, "%d\n", numbers[i]); 
        } 
    } 
 
    // Close the EVEN and ODD files after writing 
    fclose(evenFile); 
    fclose(oddFile); 
 
    printf("The numbers have been separated into EVEN.txt and ODD.txt files.\n"); 
 
    return 0; 
} 