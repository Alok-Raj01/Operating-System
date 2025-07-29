#include<stdio.h>
#include<math.h>
int main()
{
	/* progran to print 1-100 counting
	
	for(int i = 1; i <=100; i++){
		printf("%d\n",i);
	}
	*/
	
/*   program to check if numner is prime or not 
int usrinput;
printf("Enter you num : ");
scanf("%d",&usrinput);

int prime = 0;

for(int i = 1 ; i <= usrinput/2; i++){
    if(usrinput%i == 0  && usrinput%1 == 0){
    prime = 0;
    break;
    }else if(usrinput%i != 0  && usrinput%1 == 0){
       prime = 1;
    }
}


if(prime == 1){
	printf("this is prime");
}else{
	printf("its not prime ");
}
*/


/*
int userInput;
printf("Enter a number to reverse: ");
scanf("%d",&userInput);
int checknum = userInput;
int num;
int reversed = 1;
while(userInput > 0){
	num = userInput%10;
	reversed = userInput *10 + num;
	userInput = userInput/10;
}

printf("%d\n",reversed);

if(reversed == checknum ){
	printf("hey this is the number ");
	}else{
		printf("nah failed");
	}
*/ 

/*

int ui;
printf("enter the number : ");
scanf("%d",&ui);
int num;
int i = 0;
while(ui > 0){
     num = ui%10;
     i = i + pow(num,3);
	ui = ui/10;
}
printf("%d",i);
*/


// Factorial of a number
/*
int ui; 
printf("enter the num: ");
scanf("%d",&ui);
int num = 1;
for(int i = ui; i >=1;i-- ){
	num = num*i;
}

printf("The factorial is : %d",num);


	
*/


// funding  hcf 
int ui; 
printf("enter the nu1 \n: ");
scanf("%d",&ui);
int ui2;
printf("enter the nu2: ");
scanf("%d",&ui2);

if(ui > ui2){
for (int i = 1;  i <= ui2; i++){
	for(int j = 1; j <= ui2; j++){
		if( j%i != 0){
			if(ui%j == 0 && ui2%j == 0){
				printf("%d",j);
			}
	}
	}
}
}



}
