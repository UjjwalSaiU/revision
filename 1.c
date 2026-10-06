#include<stdio.h>
int main(){
    char a[] = "UJjwal_verma123@@";
    int i = 0;
    int upper_case = 0;
    int lower_case = 0;
    int special = 0;
    int digit  = 0;
    printf("ASCII %d ",'Z');
    while(a[i]!='\0'){
        if (a[i]>=65 && a[i]<=90){
            upper_case +=1;

        }
        else if (a[i]>=97 && a[i]<=122){
            lower_case += 1;
        }
        else if (a[i]>='1' && a[i]<='9'){
            digit+=1;
        }
        else {
            printf("%c ",a[i]);
            special +=1;
        }
i++;
    }
    printf("upper case %d\n",upper_case);
    printf("lower case %d \n",lower_case);
    printf("special case %d \n",special );
    printf("digit %d",digit);
    return 0;

}