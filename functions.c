#include "myinclude.h"

void read(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                scanf("%d", &A[i]);
}

void print(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                printf("%d ", A[i]);
        printf("\n");
}

int max(int A[], int n)
{
        int i, m = A[0];
        for (i = 1; i < n; i++)
                if (A[i] > m)
                        m = A[i];
        return m;
}

int min(int A[], int n)
{
        int i, m = A[0];
        for (i = 1; i < n; i++)
                if (A[i] < m)
                        m = A[i];
        return m;
}

void copy(int A[], int n, int B[])
{
        int i;
        for (i = 0; i < n; i++)
                B[i] = A[i];
}

int find(int A[], int n, int x)
{
        int i;
        for (i = 0; i < n; i++)
                if (A[i] == x)
                        return i;
        return -1;
}

int make_set(int A[], int n, int B[])
{
        int i, m = 0;
        for (i = 0; i < n; i++)
                if (find(B, m, A[i]) == -1)
                        B[m++] = A[i];
        return m;
}

int union_set(int A[], int n, int B[], int m)
{
        int i;
        for (i = 0; i < m; i++)
                if (find(A, n, B[i]) == -1)
                        A[n++] = B[i];
        return n;
}

int intersection_set(int A[], int n, int B[], int m, int C[])
{
        int i, k = 0;
        for (i = 0; i < n; i++)
                if (find(B, m, A[i]) != -1)
                        C[k++] = A[i];
        return k;
}
