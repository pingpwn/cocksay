#include <stdio.h> 
#include <string.h>

void cocksay(char *text) {
	int len = strlen(text);
	int i = 0;
	char underscores[30];
	char under[2] = "_";
	char dashes[30];
	char dash[2] = "-";


	while(i < len) {
		strcat(underscores, under);
		strcat(dashes, dash);
		i++;
	}

	printf("\n                    ");
	printf("\n                           %s ", underscores);
	printf("\n                         < %s >", text);
	printf("\n                           %s      ", dashes);
	printf("\n                  ,.        / ");
	printf("\n                 (\\(\\)     /");
	printf("\n ,_              ;  o >   / ");
	printf("\n  {`-.          /  (_)");
	printf("\n  `={\\`-._____/`   |");
	printf("\n   `-{ /    -=`\\   |");
	printf("\n    `={  -= = _/   /");
	printf("\n       `\\  .-'   /`");
	printf("\n        {`-,__.'===,_");
	printf("\n        //`        `\\\\");
	printf("\n       // ");
	printf("\n       `\\=");
	printf("\n       ");


}


int main(int argc, char *argv[]) 
{ 
	
	if (argc == 1) {
		printf("\nUsage: ./cocksay <text>");
		return 0;
	}
	
	cocksay(argv[1]);
	return 0; 
}
