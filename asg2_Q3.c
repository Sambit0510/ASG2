#include<stdio.h>
#include<string.h>
#include<math.h>

int bi_to_dec(char* str){
    int num=0,i=0;
    while(str[i]!='\0'){
        num+=i*pow(2,str[i]-'0');
    }
    return num;
}
void dec_to_bi(int num){
    int arr[1000];
    while(num>0){
        printf("%d",num%2);
        num/=2;

    }
}

int main (){
    char str1[1000],str2[1000];
    printf("ENTER THE NUMBERS :");
    scanf("%s",str1);
    int num1= bi_to_dec(str1);
    scanf("%s",str2);
    int num2= bi_to_dec(str2);
    printf("THE SUM OF THE NUMBERS IS :");
    dec_to_bi(num1+num2);
    printf("THE PRODUCT OF THE NUMBERS IS :");
    dec_to_bi(num1*num2);
    return 0;

}