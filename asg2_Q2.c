#include<stdio.h>
#include<string.h>
#include<math.h>
// roman number
int data(char c){
    int value=0;

    switch(c){
        case 'I': value = 1; break;
        case 'V': value = 5; break;
        case 'X': value = 10; break;
        case 'L': value = 50; break;
        case 'C': value = 100; break;
        case 'D': value = 500; break;
        case 'M': value = 1000; break;
        case '\0': value = 0; break;
        default: value = -1;
    }
    return value;
}
int convert(char* str){
    int i=0,num=0;
    while(str[i]!='\0'){
        if (data(str[i]) >= data(str[i+1])){
            num+=data(str[i]);
        }
        else {
            num+=data(str[i+1])-data(str[i]);
            i++;
        }
        i++;
    }
    return num;
}
void dec_to_roman(int num){
    while(num != 0)
    {

        if (num >= 1000)       // 1000 - m
        {
            printf("M");
            num -= 1000;
        }

        else if (num >= 900)   // 900 -  cm
        {
            printf("CM");
            num -= 900;
        }

        else if (num >= 500)   // 500 - d
        {
            printf("D");
            num -= 500;
        }

        else if (num >= 400)   // 400 -  cd
        {
            printf("CD");
            num -= 400;
        }

        else if (num >= 100)   // 100 - c
        {
            printf("C");
            num -= 100;
        }

        else if (num >= 90)    // 90 - xc
        {
            printf("XC");
            num -= 90;
        }

        else if (num >= 50)    // 50 - l
        {
            printf("L");
            num -= 50;
        }

        else if (num >= 40)    // 40 - xl
        {
            printf("XL");
            num -= 40;
        }

        else if (num >= 10)    // 10 - x
        {
            printf("X");
            num -= 10;
        }

        else if (num >= 9)     // 9 - ix
        {
            printf("IX");
            num -= 9;
        }

        else if (num >= 5)     // 5 - v
        {
            printf("V");
            num -= 5;
        }

        else if (num >= 4)     // 4 - iv
        {
            printf("IV");
            num -= 4;
        }

        else if (num >= 1)     // 1 - i
        {
            printf("I");
            num -= 1;
        }

    }
}
int main (){
    char str1[1000],str2[1000];
    printf("ENTER THE TWO ROMAN NUMBERS :");
    scanf("%s",str1);
    scanf("%s",str2);
    int num1=convert(str1);
    int num2=convert(str2);
    printf("THE SUM OF THE TWO DIGITS IS :");
    dec_to_roman(num1+num2);
    printf("\0");
    printf("THE PRODUCT OF THE TWO NUMBERS IS :");
    dec_to_roman(num1*num2);

    return 0;
}
