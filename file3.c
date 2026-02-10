#include<stdio.h>
int main(){
FILE*f=fopen("file.txt","w+");
if(f==NULL)
{
	printf("Error opening file...\n");
	return 1;
}
fprintf(f,"0123456789\n");
fprintf(f,"absdefgh\n");
fseek(f,3,SEEK_SET);
fprintf(f,"ABC");
fseek(f,1,SEEK_CUR);
fprintf(f,"D");
fseek(f,1,SEEK_CUR);
fprintf(f,"D");
fseek(f,-4,SEEK_END);
fprintf(f,"??");
fclose(f);
printf("File operations completed successfully.\n");
} 