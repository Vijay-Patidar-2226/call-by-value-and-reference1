

//call by value ko hi function kahte hai

#include<stdio.h>
void change(int );

int main(){
int a;
printf("enter a is :");
scanf("%d",&a);

change(a);
printf("\nvalue of after change is :%d",a);
	return 0;
}

void change(int a){
	a=a+10;
	printf("value of  a  change is %d",a);
}


//call by reference ko hi pointer kahte he
/*
#include<stdio.h>
void change(int *);
int main(){
	int a,*p;
	printf("enter a is :");
	scanf("%d",&a);
	
	p=&a;
	
	change(p);
	printf("\nvalue of after change a is : %d",a);
	return 0;
}
void change(int *p){
	*p=*p+10;
	printf("value of a change is :%d",*p);
}
*/