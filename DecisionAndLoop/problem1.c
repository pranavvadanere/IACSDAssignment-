/*Write a C program to input basic salary of an employee and calculate its Gross salary according to
following: Basic Salary <= 10000 : HRA = 20%, DA = 80% Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	float baseSalary;
	float hra,da;
	float grossSalary;
	printf("enter employee salary\n");
	scanf("%f",&baseSalary);
	if(baseSalary <= 1000){
		da = baseSalary * 0.8f;
		hra = baseSalary * 0.2f;

	}else if(baseSalary <= 20000){
		da = baseSalary * 0.90f;
		hra = baseSalary * 0.25f;
	}else{
		da = baseSalary * 0.95f;
		hra = baseSalary * 0.30f;
	}

	grossSalary = baseSalary+hra+da;

	printf("Gross Salary is %f \n",grossSalary );
	return 0;
}