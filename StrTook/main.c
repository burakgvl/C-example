#include <string.h>
#include <stdio.h>

char entryinfo[20];
int main() {

	char name[] = "Burak";
	char password[] = "439PSycho";
	char str[]="usr=burak&psw=439Psycho&set";
	char *p_str;

	p_str = strtok(str,"=&");
	while(p_str != NULL){
	if(strcmpi(p_str,name) == 0 || strcmpi(p_str,password) == 0){
		strcat(entryinfo,p_str);
	}
	p_str = strtok(NULL,"=&");
	}

	if(strnicmp(entryinfo,name,strlen(name)) == 0 && strnicmp(entryinfo+strlen(name),password,strlen(password)) == 0){
		printf("Welcome :)");
	}
	else
	printf("Failure!");


	return 0;
}
