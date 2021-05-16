#include <stdio.h> 

char rev[10000];
int k=0;
/* Function to print reverse of the passed string */
void reverse(char *str) 
{ 
if (*str) 
{ 
	reverse(str+1); 
	rev[k++]=*str;
} 
}
void reve(char* begin, char* end) 
{ 
    char temp; 
    while (begin < end) { 
        temp = *begin; 
        *begin++ = *end; 
        *end-- = temp; 
    } 
}
void reverseWords(char* s) 
{ 
    char* word_begin = s; 
    char* temp = s; /* temp is for word boundry */
  
    /*STEP 1 of the above algorithm */
    while (*temp) { 
        temp++; 
        if (*temp == '\0') { 
            reve(word_begin, temp - 1); 
        } 
        else if (*temp == ' ') { 
            reve(word_begin, temp - 1); 
            word_begin = temp + 1; 
        } 
    } /* End of while */
  
    /*STEP 2 of the above algorithm */
    //reve(s, temp - 1); 
} 
  

/* Driver program to test above function */
int main() 
{ 
char a[]="Preethi is good";
reverse(a); 
reverseWords(rev);
printf("%s",rev);
return 0; 
} 
