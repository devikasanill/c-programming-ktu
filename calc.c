#include<stdio.h>
void main(){
 char op;
 int a,b,c;
 printf("enter the number : ");
 scanf("%d",&a);
 printf("enter the number : ");
 scanf("%d",&b);
 printf("enter the operator : ");
 scanf(" %c",&op);
 switch(op){
 	case '+': c=a+b; printf("%d",c); break;
 	case '-': c=a-b; printf("%d",c); break;
 	case '*': c=a*b; printf("%d",c); break;
 	case '/': c=a/b; printf("%d",c); break;
 	default: printf("invalid number");
 	}
 }
