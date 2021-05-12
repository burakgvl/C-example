#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
    --Write a C programming to find the longest palindromic substring of a given string.--

    Expected Output:
        Original String: yxypxst Longest palindromic substring of the said string: yxy
        Reverse String : tsxpyxy

**/


char* FindLongestPalindrom(const char*,size_t);
char* ReverseArray(const char*, size_t);
char* CreateDynamicArray(size_t);

int main()
{
    char *str1 = "yxypxst";
	printf("Original String: %s", str1);
	printf("\nLongest palindromic substring of the said string: %s\n", FindLongestPalindrom(str1,strlen(str1)));
    return 0;
}


char* FindLongestPalindrom(const char* arr, size_t size){
    char* palindrome_str = CreateDynamicArray(size);
    int i,j,cnt;
    for(i=0; i<size; i++){

        for(j=i; j<=size; j++){

            char* t_arr = CreateDynamicArray(j);
            strncpy(t_arr,(arr+i),j);
            char* r_arr = ReverseArray(t_arr,j);
            if(!(strcmp(r_arr,t_arr)) && (cnt<j) )
            {
                cnt=j;
                palindrome_str = r_arr;
            }
        }
    }
    return palindrome_str;
}

char* ReverseArray(const char* arr, size_t size){
    char* pDynamic = (char*) malloc(size*sizeof(char));
	if(pDynamic == NULL){
		printf("Malloc error!..No allocation");
		EXIT_FAILURE;
	}

	int i;
	for(i = 0; i<size; i++){
	    pDynamic[i] = arr[size-i-1];
	}
    pDynamic[i] = '\0';
    return pDynamic;
}

char* CreateDynamicArray(size_t size){
    char* pDynamic = (char*) malloc(size*sizeof(char));
	if(pDynamic == NULL){
		printf("Malloc error!..No allocation");
		EXIT_FAILURE;
	}
    pDynamic[size] = '\0';
    return pDynamic;
}
