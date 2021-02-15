#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int *unionofarray(int *aa, int *bb, int *u1, int l1, int l2);
int main()
{
    // program to find the union of two arrays
    int a[] = {-1, 2, 3, 6, 3, 8, 9, 0, -4};
    int l1 = sizeof(a) / sizeof(int);
    int *aa = a;
    int b[] = {4, 7, 45, 67, 2, 34, 21, 5};
    int l2 = sizeof(b) / sizeof(int);
    int *bb = b; // printf("\n%d", l1 + l2);
    unsigned int m = l1 + l2;
    int u[17] = {-1};
    int *u1 = u;

    unionofarray(aa, bb, u1, l1, l2);
    // printing first array
    printf("\n 1 St =  ");
    for (int i = 0; i < l1 - 1; i++)
    {
        printf(" %d ", a[i]);
    }

    // printing first array
    printf("\n 2 Nd =  ");
    for (int i = 0; i < l2 - 1; i++)
    {
        printf(" %d ", b[i]);
    }

    // printing the UNION
    printf("\n UNION = ");
    for (int i = 0; i < (l1 + l2) - 2; i++)
    {
        if (u[i] >= 0)
           { printf(" %d ", u[i]); }
    }

    return 0;
}

int *unionofarray(int *aa, int *bb, int *u1, int l1, int l2)
{
    int *u111 = u1, *u11 = u1;
    int count = 0;
    for (int i = 0; i < l1 - 1; i++)
    {

        if (i == 0)
        {

            *u1 = *aa;
            count++;
            u1++;
        }

        else
        {
            u11 = u111;

            int flag = 1;

            for (int j = 0; j < count; j++)
            {

                if (*u11 == *aa)
                {

                    flag = 0;
                }

                u11++;
            }
            if (flag == 1)
            {
                *u1 = *aa;
                count++;
                u1++;
            }
        }
        aa++;
    }

    for (int i = 0; i < l2 - 1; i++)
    {

        if (i == 0)
        {

            *u1 = *bb;
            count++;
            u1++;
        }

        else
        {
            u11 = u111;

            int flag = 1;

            for (int j = 0; j < count; j++)
            {

                if (*u11 == *bb)
                {

                    flag = 0;
                }

                u11++;
            }
            if (flag == 1)
            {
                *u1 = *bb;
                count++;
                u1++;
            }
        }
        bb++;
    }

    return u111;
}