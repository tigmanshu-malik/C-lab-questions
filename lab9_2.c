#include<stdio.h>

int main(){

    struct date{
            char day[10];
            int month;
            int year;
        }; 

    struct student_record  {

        char name[20];
        char enroll[20];
        long int sap;
        struct date time;
        
    };

    int n;
    printf("Enter number of students : \n");
    scanf("%d", &n);

    struct student_record stud_data[n];

    for(int i =0 ; i < n; i++){

        printf("enter the name of student: \n");
        scanf("%s", stud_data[i].name);

        printf("enter the enrollment number: \n");
        scanf("%s", stud_data[i].enroll);

        printf("Enter the sap: \n");
        scanf("%ld", &stud_data[i].sap);

        printf("Enter the day of birth: \n");
        scanf("%s", stud_data[i].time.day);

        printf("Enter the month of birth: \n");
        scanf("%d", &stud_data[i].time.month);

        printf("Enter the year of birth: \n");
        scanf("%d", &stud_data[i].time.year);
    }

    for(int i =0 ; i < n; i++){

        printf("name: %s \n",stud_data[i].name);

        printf("enrollment number:%s \n",stud_data[i].enroll);

        printf("sap: %ld\n", stud_data[i].sap);

        printf("day of birth: %s \n", stud_data[i].time.day);

        printf("month of birth: %d\n", stud_data[i].time.month);

        printf("year of birth: %d\n", stud_data[i].time.year);

        printf("\n");
    }


}