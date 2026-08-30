#include <stdio.h>
#include <string.h>
 
int main()
{
    //Specifying the size of the string
    int n = 100;
    
    //Declaring string of size n
    char str[n];
    printf("Input String: ");
    gets(str);

    //The character whose number of occurrences will be counted 
    char letter;
    printf("Input letter to be searched: ");
    letter = getchar();
    
    //Declaring a variable to keep count of the occurrence of the 'letter'
    int cnt = 0;
   
    //Iterating a loop through the string and comparing each character with a letter 
    for(int i = 0; str[i]; i++)  
    {
    	if(str[i] == letter)
    	{
          cnt++;
        }
    }
     
    //Displaying the result
	printf("The value '%c' has occurred %d time in the string \n ", letter, cnt);
     
    return 0;
}
