#include<stdio.h>  //calling stdio header file
 
 // calling the main function
int main(){ 
	int s,i,n; // variable declaration
	s=0;
	printf("Enter value of n " ); 
	scanf("%d", &n);  // recieving user input

// for loop
	for( i=1; i<=n; i++ ){
		s=s+i;
	}
	printf("The Sum is %d",s);
}

