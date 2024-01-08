//Q.1 Write a Program to read content from one file & write it to another file.
#include<stdio.h>
int main()
{
	FILE *ptr,*ftr;
	char ch;
	ptr=fopen("C:\\Users\\Dell\\Desktop\\read.txt","r");
	if(ptr==0)
	{
		printf("Unable to open read.txt for reading.\n");
	}
	ftr=fopen("C:\\Users\\Dell\\Desktop\\write.txt","w");
	if(ftr==0)
	{
		 printf("Unable to open write.txt for writing.\n");
		fclose(ftr);
	}
	 while ((ch = fgetc(ptr)) != EOF) 
	 {
        fputc(ch, ftr);
    }
    fclose(ptr);
    fclose(ftr);

    printf("Content copied from read.txt to write.txt successfully.\n");


	return 0;
}


//Q.2 Write a Program to create a new file and write all numbers that are divisible by both 3 & 5 between 1 to 50 into that file.
#include <stdio.h>

int main() {
    FILE *file;
    
    file = fopen("C:\\Users\\Dell\\Desktop\\f2.txt", "w");
    
    if (file == NULL) {
        printf("Unable to create or open the file.\n");
        return 1;
    }
  
    for (int i = 1; i <= 50; i++) 
	{
        if (i % 3 == 0 && i % 5 == 0) 
		{
            fprintf(file, "%d\n", i);
        }
    }
  
    fclose(file);
    
    printf("Numbers divisible by both 3 and 5 have been written to f2.txt.\n");

    return 0;
}

