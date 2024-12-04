#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> 
typedef struct {
	float Real;
	float Imaginary;
}COMPLEX;

void Asg(COMPLEX* A,float a,float b);//赋值 
void Add(COMPLEX* sum,COMPLEX* Z1,COMPLEX* Z2);//相加					
void Minus(COMPLEX* minus,COMPLEX* Z1,COMPLEX* Z2);//相减 
void Mult(COMPLEX* mult,COMPLEX* Z1,COMPLEX* Z2);//相乘  
void Dvs(COMPLEX* dvs,COMPLEX* Z1,COMPLEX* Z2);//相除 


int main(){
	COMPLEX* A=(COMPLEX*)malloc(sizeof(COMPLEX));
	COMPLEX* B=(COMPLEX*)malloc(sizeof(COMPLEX));
	COMPLEX* C=(COMPLEX*)malloc(sizeof(COMPLEX));
	COMPLEX* sum=(COMPLEX*)malloc(sizeof(COMPLEX));
	COMPLEX* minus=(COMPLEX*)malloc(sizeof(COMPLEX));
	COMPLEX* dvs=(COMPLEX*)malloc(sizeof(COMPLEX));
	COMPLEX* mult=(COMPLEX*)malloc(sizeof(COMPLEX));
	
	
	if(A==NULL){
		printf("内存分配失败\n");
		return 1;
	}
	if(B==NULL){
		printf("内存分配失败\n");
		return 1;
	}
	if(C==NULL){
		printf("内存分配失败\n");
		return 1;
	}
	if(sum==NULL){
		printf("内存分配失败\n");
		return 1;
	}
	if(minus==NULL){
		printf("内存分配失败\n");
		return 1;
	}
	if(dvs==NULL){
		printf("内存分配失败\n");
		return 1;
	}
	if(mult==NULL){
		printf("内存分配失败\n");
		return 1;
	}
	
	//测试 
	Asg(A,1.0,2.0);
	printf("%.3f %.3f\n",A->Real,A->Imaginary);
	Asg(B,3.0,2.0);
	printf("%.3f %.3f\n",B->Real,B->Imaginary);
	Asg(C,6.0,4.0);
	printf("%.3f %.3f\n",B->Real,B->Imaginary);
	Add(sum,A,B);
	printf("%.3f %.3f\n",sum->Real,sum->Imaginary);
	Minus(minus,C,B);
	printf("%.3f %.3f\n",minus->Real,minus->Imaginary);
	Mult(mult,C,B);
	printf("%.3f %.3f\n",mult->Real,mult->Imaginary);
	Dvs(dvs,C,B);
	printf("%.3f %.3f\n",dvs->Real,dvs->Imaginary);
	
	free(A);
	free(B);
	free(C);
	free(sum);
	free(minus);
	free(dvs);
	free(mult);
	return 0;
}
void Asg(COMPLEX* A,float real,float img){		//输入实部虚部 
	A->Real=real;
	A->Imaginary=img;
}
void Add(COMPLEX* sum,COMPLEX* Z1,COMPLEX* Z2){			//sum ==Z1+Z2
	sum->Real=Z1->Real+Z2->Real;
	sum->Imaginary=Z1->Imaginary+Z2->Imaginary;
}
void Minus(COMPLEX* minus,COMPLEX* Z1,COMPLEX* Z2){		//minus==Z1-Z2
	minus->Real=Z1->Real-Z2->Real;
	minus->Imaginary=Z1->Imaginary-Z2->Imaginary;
}
void Mult(COMPLEX* mult,COMPLEX* Z1,COMPLEX* Z2){		//mult==Z1*Z2	
	mult->Real=Z1->Real*Z2->Real;
	mult->Imaginary=Z1->Imaginary*Z2->Imaginary;
}
void Dvs(COMPLEX* dvs,COMPLEX* Z1,COMPLEX* Z2){		//dvsw==Z1/Z2	
	dvs->Real=Z1->Real/Z2->Real;
	dvs->Imaginary=Z1->Imaginary/Z2->Imaginary;
	if(Z2->Real==0||Z2->Imaginary==0){
		printf("e:除数不能为0!");
	}
}

