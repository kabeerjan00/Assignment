/* Name: kabeer Ahmed 
   Father name: Agha Muhammad
   Roll No: 56
   BSCS: 1st samester 
   Subject: Fundamentals Of Programming*/



#include <stdio.h>

int isPrime(int ValueOfNum) 
    {
    if (ValueOfNum <= 1)
 {
    return 0; 
 }
    
    for (int k = 2; k * k <= ValueOfNum; k++)
 {
    if (ValueOfNum % k == 0) 
 {
    return 0;
 }
 }
   return 1;
 }

 int main() {
    int ValueOfNum;
    
   while (1) {
   printf("Enter a number between 2 and 100: ");
   scanf("%d", &ValueOfNum);
        
   if (ValueOfNum >= 2 && ValueOfNum <= 100) {
   int prime = isPrime(ValueOfNum);
            
   if (prime) {
   printf("%d is a prime number.\n", ValueOfNum);
   printf("%d",isPrime(ValueOfNum));
 } else {
   printf("%d is not a prime number.\n", ValueOfNum);
   printf("%d",isPrime(ValueOfNum));
 }
            
   break;
 } else {
   printf("Number out of range.\nPress 1 to try again.\n");
   int Retry;
   scanf("%d", &Retry);
            
   if (Retry != 1) {
   break;    
 }
 }
 }
    
   return 0;
 }
