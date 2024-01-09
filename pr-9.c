/*Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.*/
#include <stdio.h>

int main() 
{
    FILE *evenFile, *oddFile;
    
    evenFile = fopen("C:\\Users\\Dell\\Desktop\\even_file.txt", "w");
    if (evenFile == 0) 
	{
        printf("Error opening even_file.txt for writing.\n");
    }
    
    oddFile = fopen("C:\\Users\\Dell\\Desktop\\odd_file.txt", "w");
    if (oddFile == 0) 
	{
        printf("Error opening odd_file.txt for writing.\n");
        fclose(evenFile);
    }

    for (int i = 50; i <= 70; i++) 
	{
        if (i % 2 == 0) 
		{
            fprintf(evenFile, " %d, ", num);
        } else 
		{
            fprintf(oddFile, " %d, ", num);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even numbers from even_file.txt:\n");
    printf("Odd numbers from odd_file.txt:\n");

    return 0;
}

/*Q.2  roll no, name, chem_marks, maths_marks, and phy_marks.*/
#include<stdio.h>
struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
void Percentage(struct Student student)
 {
    int total_marks = student.chem_marks + student.maths_marks + student.phy_marks;
    float percent = (float)total_marks / 300 * 100;
	printf("-----------------------\n");
    printf("%s (%d)\n", student.name, student.roll_no);
    printf("-----------------------\n");
    printf("Chemistry => %d\n", student.chem_marks);
    printf("Mathematics => %d\n", student.maths_marks);
    printf("Physics => %d\n", student.phy_marks);
    printf("Total => %d/300\n", total_marks);
    printf("Percent => %.2f%%\n\n", percent);
    printf("-----------------------\n");
}
int main()
{
	struct Student students[5];

    for (int i = 0; i < 5; i++) {
    	printf("-----------------------\n");
        printf("Enter details of Student %d:\n", i + 1);
        printf("-----------------------\n");
        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);
        printf("Name => ");
        scanf("%s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
        printf("-----------------------\n");
        Percentage(students[i]);
    }

    return 0;
}


