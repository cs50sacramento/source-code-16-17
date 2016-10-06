#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // store word in string
    string hello1 = "hello";
    string hello2 = "hello2";
    string hello3 = "hello3";
    int birthday[3] = { 11, 25, 86 };
    long long years[4] = { 2015, 2016, 2017, 2018 };
    float nums[2] = { 3.14159, 0.1428 };
    
    // print memory addresses of variables
    printf("memory location of the variable \"hello1\": %p\n", &hello1);
    printf("memory location of the variable \"hello2\": %p\n", &hello2);
    printf("memory location of the variable \"hello3\": %p\n", &hello3);
    printf("memory location of the variable \"birthday\": %p\n", &birthday);
    printf("memory location of the variable \"years\": %p\n", &years);
    printf("memory location of the variable \"nums\": %p\n", &nums);
    printf("\n");
    
    // index through word, printing one letter per line along with the address of the array elements
    for (int i = 0, j = strlen(hello1); i < j; i++)
    {
        printf("hello1[%d]: %c\tmemory location: %p\n", i, *(hello1+i), &hello1[i]);
    }
    printf("\n");
    for (int i = 0, j = strlen(hello2); i < j; i++)
    {
        printf("hello2[%d]: %c\tmemory location: %p\n", i, *(hello2+i), &hello2[i]);
    }
    printf("\n");
    for (int i = 0, j = strlen(hello3); i < j; i++)
    {
        printf("hello3[%d]: %c\tmemory location: %p\n", i, *(hello3+i), &hello3[i]);
    }
    printf("\n");
    for (int i = 0, j = (sizeof(birthday) / sizeof(int)); i < j; i++)
    {
        printf("birthday[%d]: %d\tmemory location: %p\n", i, *(birthday+i), &birthday[i]);
    }
    printf("\n");
    for (int i = 0, j = (sizeof(years) / sizeof(long long)); i < j; i++)
    {
        printf("years[%d]: %lld\tmemory location: %p\n", i, *(years+i), &years[i]);
    }
    printf("\n");
    for (int i = 0, j = (sizeof(nums) / sizeof(float)); i < j; i++)
    {
        printf("nums[%d]: %.3f\tmemory location: %p\n", i, *(nums+i), &nums[i]);
    }
}