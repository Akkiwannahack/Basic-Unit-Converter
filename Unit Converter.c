#include <stdio.h>

int main() {
  char category;
  float tempChoice;
  float massChoice;
  float userinputF;
  float userinputC; 
  float userinputgram;
  float userinputkilogram;
  float fahrenheitToCelcius;
  float celciusToFahrenheit; 
  float gramTokilogram;
  float kilogramsTogram; 
  
  printf("Unit Converter \n");
  printf("List of conversation to choose from: \n");
  printf("Temperature(T),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%f",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%f",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %f",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%f",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %f",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }

  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for gram to kilogram. \n");
      printf("Enter 2 for kilogram to gram. \n");
      scanf("%f",&massChoice);
      if(massChoice == 1){
          printf("Enter the gram amount: \n");
          scanf("%d",&userinputgram);
          gramTokilogram = userinputgram / 1000;
          printf("kilogram: %.4f",gramTokilogram);
      }
      else if(massChoice == 2) {
          printf("Please enter the kilogram amount: \n");
          scanf("%f",&userinputkilogram);
          kilogramsTogram = userinputkilogram * 1000;
          printf("Grams: %.4f",kilogramsTogram);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}
