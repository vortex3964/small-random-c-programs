//elegxos square add even cube

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);

int main() {
 int y,x;
 
 printf("dose enan arithmo:");
 scanf("%d",&x);
     if(is_even(x)){
 	printf("einai artios\n");
 	}
 	
	 if(is_odd(x)){
 	printf("einai peritos\n");
	 }
 	
	 if(is_square(x)){
 	printf("einai tetragono rithmou\n");
	 }
 	
	 if(is_cube(x)){
 	printf("einai kyvos arithmou");
	 }
	
	return 0;
}

//even
int is_even(int n){
	if(n%2==0){
		return 1;
	}
return 0;
}
//odd
int is_odd(int n){
	if(n%2==0){
		return 0;
	}
return 1;
}

int is_square(int n){
	int i;
	
	for(i=1;i<n;i++){
		if(i*i==n){
			return 1;
		}
		}
		
			if(i*i>n){
			return 0;
			}
		}
		
		
int is_cube(int n){
	int i;
	
	for(i=1;i<n;i++){
		if(i*i*i==n){
			return 1;
		}
		}
		
			if(i*i*i>n){
			return 0;
			}
		}
	//bool mono tou;
