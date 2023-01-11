#include<stdio.h>
void sum(int a,int b){
	int c;
	
	c = a+b;
	
	printf("%d",c);
}
void mul(int a,int b){
	int c;
	
	c = a*b;
	
	printf("%d",c);
}
void sub(int a,int b){
	int c;
	
	c = a-b;
	
	printf("%d",c);
	
}
void div(int a,int b){
	int c;
	
	c = a/b;
	
	printf("%d",c);
}

main(){
	int x,y,z;
	int m;
	s:
	printf("Enter A:");
	scanf("%d",&x);
	
	printf("Enter B:");
	scanf("%d",&y);
	
	printf("Enter +=1,-=2,*=3,/=4:");
	scanf("%d",&z);
	
	goto s;
	
	int d;
	
	switch(d){
		
		default:
			
		printf("Invalid Input\n");
		break;
		
		case 1:
		 sum(x,y);
	    break;
	
		case 2:
		 sub(x,y);
	    break;
	
		case 3:
		 mul(x,y);
	    break;
	
		case 4:
		 div(x,y);
	    break;
	
	}
	
	
}

