#include <stdio.h>

int power(int num1, int num2)
{
    int result = 1;
    for (int i=0; i<num2; i++)
    {
        result *= num1;
    }

    return result;
}

int get_binary(int * arr, int size)
{
    int binary = 0;
    for (int i=0; i<size; i++)
    {
        binary += power(2, arr[i]);
    }
    return binary;
}

int get_union(int set1, int set2)
{
    return ~(~set1&~set2);
}

int get_intersection(int set1, int set2)
{
    return ~(~set1|~set2);
}



int main()
{
    int arr1[5] = {1,2,5,6,7};
    int arr2[3] = {1,2,8};
    int counter1 = 5;
    int counter2 = 3;

    printf("%d\n", get_intersection(get_binary(arr1, counter1), get_binary(arr2, counter2)));
    return 0;
}