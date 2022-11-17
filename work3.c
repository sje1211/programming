#include <stdio.h>
int One (int,int,int,int,int,int,int,int);   

int main (void){
	int num, n1,n2,n3,n4,n5,n6,n7,n8,sum ;     
	int num1, num2, outcome ;
	int a1,a2,a3,a4,a5,a6,a7 ;

	printf("번호를 선택하세요: ") ;
	scanf("%d", &num);
	if (num==1) {
		printf("8비트 이진수를 입력하세요: ");
		printf("십진수로 %d 입니다.", One(n1,n2,n3,n4,n5,n6,n7,n8) );
	}	
	else if (num==2){	
		printf("첫 번째 8비트 이진수를 입력하세요: ");
		num1 = One(n1,n2,n3,n4,n5,n6,n7,n8);
		printf("두 번째 8비트 이진수를 입력하세요: ");
		num2 = One(n1,n2,n3,n4,n5,n6,n7,n8);
		outcome = num1+num2 ;   
		printf("결과는 이진수로 ") ;
		if (outcome >=0) {
			printf("0");
			printf("%d", (outcome/64)%2) ;
			printf("%d", (outcome/32)%2) ;
			printf("%d", (outcome/16)%2) ;
			printf("%d", (outcome/8)%2) ;
			printf("%d", (outcome/4)%2) ;
			printf("%d", (outcome/2)%2) ;
			printf("%d", outcome%2) ;
			printf("이고, 십진수로 %d입니다.", outcome) ; }
		else {
			outcome  = -outcome ;
			a1=!((outcome/64)%2);
			a2=!((outcome/32)%2) ;
			a3=!((outcome/16)%2) ;
			a4=!((outcome/8)%2) ;
			a5=!((outcome/4)%2) ;
			a6=!((outcome/2)%2) ;
			a7=!(outcome%2) ;
			if (a7==1 && a6==0) {
				a7=0; a6=1;}
			else if (a7+a6==2 && a5==0){
				a7=0; a6=0; a5=1;}
			else if (a7+a6+a5==3 && a4==0){
				a7=0; a6=0; a5=0; a4=1;}
			else if (a7+a6+a5+a4==4 && a3==0){
				a7=0; a6=0; a5=0; a4=0; a3=1;}
			else if (a7+a6+a5+a4+a3==5 && a2==0){
				a7=0; a6=0; a5=0; a4=0; a3=0; a2=1;}
			else if (a7+a6+a5+a4+a3+a2==6 && a1==0){
				a7=0; a6=0; a5=0; a4=0; a3=0; a2=0; a1=1;}
			else if (a7+a6+a5+a4+a3+a2+a1==7){
				a7=0; a6=0; a5=0; a4=0; a3=0; a2=0; a1=0;}
			else if (a7==0){
				a7=1;}
			printf("1%d%d%d%d%d%d%d",a1,a2,a3,a4,a5,a6,a7);
			printf("이고, 십진수로 %d입니다.", -outcome) ; }
	}
	else {
		printf("첫 번째 8비트 이진수를 입력하세요: ");
        num1 = One(n1,n2,n3,n4,n5,n6,n7,n8);
        printf("두 번째 8비트 이진수를 입력하세요: ");
        num2 = One(n1,n2,n3,n4,n5,n6,n7,n8);
		outcome = num1-num2 ;  
		printf("결과는 이진수로 ") ;
		if (outcome>=0){
			printf("0");
			printf("%d", (outcome/64)%2) ;
			printf("%d", (outcome/32)%2) ;
			printf("%d", (outcome/16)%2) ;
			printf("%d", (outcome/8)%2) ;
			printf("%d", (outcome/4)%2) ;
			printf("%d", (outcome/2)%2) ;
			printf("%d", outcome%2) ;
			printf("이고, 십진수로 %d입니다.", outcome);   
		}
		else {
			outcome  = -outcome ;
			a1=!((outcome/64)%2);
			a2=!((outcome/32)%2) ;
			a3=!((outcome/16)%2) ;
			a4=!((outcome/8)%2) ;
			a5=!((outcome/4)%2) ;
			a6=!((outcome/2)%2) ;
			a7=!(outcome%2) ;
			if (a7==1 && a6==0) {
				a7=0; a6=1;}
			else if (a7+a6==2 && a5==0){
				a7=0; a6=0; a5=1;}
			else if (a7+a6+a5==3 && a4==0){
				a7=0; a6=0; a5=0; a4=1;}
			else if (a7+a6+a5+a4==4 && a3==0){
				a7=0; a6=0; a5=0; a4=0; a3=1;}
			else if (a7+a6+a5+a4+a3==5 && a2==0){
				a7=0; a6=0; a5=0; a4=0; a3=0; a2=1;}
			else if (a7+a6+a5+a4+a3+a2==6 && a1==0){
				a7=0; a6=0; a5=0; a4=0; a3=0; a2=0; a1=1;}
			else if (a7+a6+a5+a4+a3+a2+a1==7){
				a7=0; a6=0; a5=0; a4=0; a3=0; a2=0; a1=0;}
			else if (a7==0){
				a7=1;}
			printf("1%d%d%d%d%d%d%d",a1,a2,a3,a4,a5,a6,a7);
			printf("이고, 십진수로 %d 입니다.", -outcome);}
	}	
	return 0;
}

int One (int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8){
	int sum ;
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8);
	if (n1==0){		
        sum = n1*2*2*2*2*2*2*2+n2*2*2*2*2*2*2+n3*2*2*2*2*2+n4*2*2*2*2+n5*2*2*2+n6*2*2+n7*2+n8*1;}
	else {   
		n1= !n1; n2= !n2; n3 =!n3; n4= !n4; n5= !n5; n6= !n6; n7= !n7; n8= !n8;
		if (n8==1 && n7==0) {
			n8=0; n7=1;}
		else if (n8+n7==2 && n6==0){
				n8=0; n7=0; n6=1;}
		else if (n8+n7+n6==3 && n5==0){
				n8=0; n7=0; n6=0; n5=1;}
		else if (n8+n7+n6+n5==4 && n4==0){
				n8=0; n7=0; n6=0; n5=0; n4=1;}
		else if (n8+n7+n6+n5+n4==5 && n3==0){
				n8=0; n7=0; n6=0; n5=0; n4=0; n3=1;}
		else if (n8+n7+n6+n5+n4+n3==6 && n2==0){
				n8=0; n7=0; n6=0; n5=0; n4=0; n3=0; n2=1;}
		else if (n8+n7+n6+n5+n4+n3+n2==7 && n1==0){
				n8=0; n7=0; n6=0; n5=0; n4=0; n3=0; n2=0; n1=1;}
		else if (n8+n7+n6+n5+n4+n3+n2+n1==8){
				n8=0; n7=0; n6=0; n5=0; n4=0; n3=0; n2=0; n1=0;}
		else  
				n8=1;
        sum = n1*2*2*2*2*2*2*2+n2*2*2*2*2*2*2+n3*2*2*2*2*2+n4*2*2*2*2+n5*2*2*2+n6*2*2+n7*2+n8*1;
		if (sum != 0)
			sum = -sum ;
	}
	return sum ;
}
