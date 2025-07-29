# include<stdio.h>
# include<math.h>

void checkeven();
void square();
int sum();
void prime();
void fact();
void reverse();
void pal();
void digsum();
void hcf();
void ccf();
void fibonacci();

int main()
{
  
int a = 2;  
  while (a >1 ){
  	printf("\n");
  printf("--------------------\n");
  printf("Options: \n 1. Even or odd number \n 2. square of a num \n 3. sum of two number \n 4.Check if prime or not \n 5. factorial using itration\n 6. reverse the number \n 7. number is palindorne \n 8. digit sum \n 9. hcf \n 10. convert C into F \n 11. fibonacci Series \n");
  int usrChoice;
  printf("Ennter your choice : ");
  scanf("%d",&usrChoice);
  
 switch(usrChoice){
  	case 1 : checkeven();
  	break;
  	case 2 : square();
  	break;
  	case 3 : printf("The sum is %d",sum());
  	break;
  	case 4 : prime();
  	break;
  	case 5: fact();
  	break;
  	case 6: reverse();
  	break;
  	case 7: pal();
  	break;
  	case 8: digsum();
  	break;
  	case 9: hcf();
  	break;
  	case 10: ccf();
  	break;
  	case 11: fibonacci();
  	break;
  	default: printf("Invaid no");
  	
 }
  }
  	
  return 0;
}


// check even or odd 
void checkeven(){
	printf("--------------------\n");
	printf("Enter number : ");
	int num;
	scanf("%d",&num);
	if(num%2 ==0){
	     printf("%d is even number\n ",num);
	}else{
		printf("%d is odd \n",num);
	}
}

// square of a number 
void square(){
	printf("--------------------\n");
	printf("Enter a num :");
	int sqnum;
	scanf("%d",&sqnum);
	int sq = pow(sqnum,2);
	printf("%d square is : %d \n",sqnum,sq);
	
}

// return sum of two numbers 
int sum(){
    printf("--------------------\n");
    int num1;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    int num2;
    printf("Enter num2 : ");
    scanf("%d",&num2);
    
    int add = num1 + num2;
	return add;	
}

// checking if a number is prime or not 

void prime(){
	int isprime = 0;
	printf("--------------------\n");
	printf("Enter your num : ");
	int num;
	scanf("%d",&num);
	
	for(int i = 2; i <= num/2; i++){
		if( num %i != 0){
			isprime = 1;
			
		}else{
			isprime = 0;
			break;
		}
	}
if(isprime){
	printf("its prime");
}else{
	printf("nah ");
}
}


// finding factotial 
void fact(){
	printf("--------------------\n");
	printf("Enter the number : ");
	int num = 1 ;
	int fa = num;
	scanf("%d",&num);
	for(int i = num ; i >= 1;i--){
		fa = fa * i;
	}
	printf("the factorial is : %d",fa);
}


// reverse the number 

void reverse(){
	printf("--------------------\n");
	printf("Enter num : ");
	int num ;
	scanf("%d",&num);
	
	while(num > 0){
		int rev = num % 10;
		printf("%d",rev);
		num = num/10;
	}
}

void pal(){
	printf("--------------------\n");
	printf("Enter num : ");
	int num ;
	scanf("%d",&num);
	int ori = num;
	int rev = 0;
	
	
	while(num > 0){
		int a = num%10;
		rev = rev*10 + a ;
		num = num/10;
	}
	if(rev == ori){
		printf("it is true");
	}else{
		printf("it is false");
	}
	
}


// sum of digits 
void digsum(){
	printf("Enter your number : ");
	int num;
	scanf("%d",&num);
	int sum = 0;
	while(num>0){
		int a = num%10;
		sum = sum + a;
		num = num/10;
	}
	printf("%d",sum);
}

// hcf of two numbers 
void hcf(){
	printf("--------------------\n");
	int num1 ;
	printf("Enter num1 : ");
	scanf("%d",&num1);
	printf("Enter num2 : ");
	int num2 ;
	scanf("%d",&num2);
	int hcf = 1;
	if(num1 > num2){
		if(num1% num2 != 0){
			hcf = num1%num2;
			printf("hcf is : %d",hcf);
		}else{
			printf("hcf is : %d",num2);
		}
	}else{
		if(num2% num1 != 0){
			hcf = num2%num1;
			printf("hcf is : %d",hcf);
		}else{
			printf("hcf is : %d",num1);
		}
	}
}

// converthing c to f
void ccf(){
	printf("--------------------\n");
	printf("enter Temprature : ");
	int t;
	scanf("%d",&t);
	int f = (t* (9/5) + 32) ;
	printf("temp is : %d",f);
}


// print febinaic series
void fibonacci(){
	int f = 0;
	int s = 1;
	printf("0 1");
	for(int i = 2;i <= 20;i++ ){
		int crnt = f + s;
		f = s;
		s = crnt;
		printf(" %d ",crnt);
	}
}

// lcm of two numbers 
void lcm(){
	printf("--------------------\n");
	int num1 ;
	printf("Enter num1 : ");
	scanf("%d",&num1);
	printf("Enter num2 : ");
	int num2 ;
	scanf("%d",&num2);
	int lcm = 1;
	
	if(num1>num2){
	    
	}
}
