#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
char input[100]; 
int i,l; 
int main() 
{ 
//clrscr(); 
printf("\nRecursive descent parsing for the following grammar\n"); 
printf("\nS->(L/a)\nL->SL'\nL->SL'/@\n"); 
printf("\nEnter the string to be checked:"); 
gets(input); 
if(E()) 
{ 
if(input[i+1]=='\0') 
printf("\nString is accepted"); 
else 
printf("\nString is not accepted"); 
} 
else 
printf("\nString not accepted"); 
getch(); 
} 
E() 
{ 
if(T()) 
{ 
if(EP()) 
return(1); 
else 
return(0); 
} 
else 
return(0); 
} 
EP() 
{ 
if(input[i]=='+') 
{ 
i++; 
if(T()) 
{ 
if(EP()) 
return(1); 
else 
return(0); 
}
