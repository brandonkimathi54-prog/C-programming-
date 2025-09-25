/* 
Name : Brandon Kimathi Mutugi
 Reg No : CT101/G/26548/25
 Description :imput and output of Bank loan
 */




#include <stdio.h>;
int main () {
    int age ;
    float income ;
    
    //my user imputs
    printf ("please enter your age :");
    scanf ("%d" , &age);
    
     printf("Please enter your annual income (in ksh):"); 
      scanf("%f" ,&income);
      
      //check the eligibility
      if (age >=21 && income >=21000){
          printf("Congratulations you qualify for a loan .\n");
      }else {
          printf("Unfortunately , we are unable to offer you a loan at this time .\n");
      }
      
      return 0 ;
}
    