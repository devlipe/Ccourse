#include <stdio.h>
#include <stdlib.h>
/* This is a Program to convert between Binary, Decimal and Octal numbers
How it'll operate:
First the program will ask user to choose what he want to do,
then get the input, convert it and output the result
Limitations:
The result is limited to 255 or FF in hex value.
*/

// defining funtions here to avoid compiler warnings, actual functions are below the main function
int BinaryToDecimal(int binaryNumber);
int DecimalToBinary(int decimalNumber);
int OctalToBinary(long long octalNumber);

int Choice, inputNumber;
int main() {


   printf("Choose an Option \n\
  1. Binary to Decimal \n\
  2. Decimal to Binary \n\
  3. Binary to Octal \n\
  4. Octal To Binary \n\
  5. Decimal to Octal \n\
  6. Octal to Decimal \n\
  7. Exit Program\n> ");

   scanf("%d", &Choice);

   if(Choice == 1) {
      printf("Enter the binary Number: ");
      scanf("%d", &inputNumber);
      // binary to decimal
      printf("Decimal of the Binary number %d is %d\n\n", inputNumber ,BinaryToDecimal(inputNumber));
   }

   else if(Choice == 2) {
      printf("Enter the decimal Number: ");
      scanf("%d", &inputNumber);
      // decimal to binary
      printf("Binary of the Decimal number %d is %d\n", inputNumber, DecimalToBinary(inputNumber));
   }

   else if(Choice == 3) {
      printf("Enter the binary Number: ");
      scanf("%d", &inputNumber);
      // binary to octal
      // we are formating the decimal output to show as octal numbers
      printf("Octal of the Binary number %d is %lo\n", inputNumber, BinaryToDecimal(inputNumber));
   }


   else if(Choice == 4) {
      printf("Enter the octal Number: ");
      scanf("%llo", &inputNumber);
      // octal to binary

      printf("Binary of the Octal number %lld is %llo\n", inputNumber, OctalToBinary(inputNumber));
   }


   else if(Choice == 5) {
      printf("Enter the decimal Number: ");
      scanf("%d", &inputNumber);
      // decimal to octal
      // we are formating the decimal output to show as octal numbers
      printf("Octal of the Decimal number %d is %o\n", inputNumber, inputNumber);
   }

   else if(Choice == 6) {
      printf("Enter the octal Number: ");
      scanf("%o", &inputNumber);
      // octal to decimal
      // we are formating the octal to show as decimal numbers using printf
      printf("Decimal of the Octal number %o is %d\n", inputNumber, inputNumber);

   } else if(Choice == 7) {
      // exits the code
      exit(0);
   }

   else {
      // prompt if user entered something other than the choice above
      printf("Invalid Choice entered, Try again. \n");
   }

   return 0;
}

int BinaryToDecimal(int binaryNumber)
/*
The logic of converting binary to decimal is,
We get the digit from right side of the input
and multiply the digit with 1,2,4,...
and add the result
*/
{
// defining variables while a number having no position means it has a position of 1
   int decimal, remainder, position = 1;

   //continue if the binary number is not 0
   while(binaryNumber!=0) {
      // first we divide the binary number with 10 and get the remainder
      remainder = binaryNumber%10;

      // then we divide the binary number with 10 for next cycle
      binaryNumber = binaryNumber/10;

      // the decimal output is the previous decimal number + the remainder * position
      decimal = decimal + remainder*position;

      // then we double the position
      position = position*2;

      //this cycle continues until the binary number reached the end
   }
   return decimal;
}

int DecimalToBinary(int decimalNumber)
/*
The logic of converting decimal to binary is,
We divide the decimal number with 2
then we divide the result (quotient) with 2
the binary output is the sum of previous binary number in the loop
and the multiplication of the remainder and position while the position
increases 10x everytime like 10,100,1000
we continue this cycle until the decimal number(quotient) reaches 0
*/
{
// defining variables
   long long unsigned int binary, remainder, position = 1;

   //continue if the decimal number is not 0
   while(decimalNumber!=0) {
      // first we divide the decimal number with 2 and get the remainder
      remainder = decimalNumber%2;

      // then we divide the decimal number with 2 for next cycle
      decimalNumber = decimalNumber/2;

      // the binary output is the previous binary number + the remainder * position
      binary = binary + remainder*position;

      // then we multiply the position with 10
      position = position*10;

      //this cycle continues until the decimal number reached the end
   }
   return binary;
}

int OctalToBinary(long long octalNumber) {
   // This will replace 0 with 0, 1 with 1, 2 with 10, 3 with 11 and so on..

   int remainder;
   int octalDigitToBinary[8] = {0, 1, 10, 11, 100, 101, 110, 111};
   long long binaryNumber = 0, position;
   position = 1;
   // Convert Octal Number to Binary Number
   while(octalNumber != 0) {

      remainder = octalNumber % 10;
      octalNumber = octalNumber/10;

      // it starts from position 1 in the binary number, replaces it with the array value and sum it with the binary number
      binaryNumber = (octalDigitToBinary[remainder] * position) + binaryNumber;
      // then changes the position to 1000x th digit from previous position
      position *= 1000;
   }
   return binaryNumber;
}