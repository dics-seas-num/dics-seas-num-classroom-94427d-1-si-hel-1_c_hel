#include "myinclude.h"

int main()
{
        int A[100], B[100], C[100];
        int n, m, k;
        printf("husnegt oruul: ");
        read(A, 5);
        print(A, 5);

        printf("max: %d\n", max(A, 5));
        printf("min: %d\n", min(A, 5));

        copy(A, 5, B);
        print(B, 5);

        printf("%d-iin bairlal: %d\n", 3, find(A, 5, 3));
        m = make_set(A, 5, B);
        printf("B olonlog: ");
        print(B, m);

        printf("husnegt oruul: ");
        read(A, 5);
        m = union_set(B, m, A, 5);
        printf("union xiisen olonlog: ");
        print(B, m);

        k = make_set(A, 5, C);
        print(C, k);
        n = intersection_set(C, k, B, m, A);
        printf("ogtloltsol: ");
        print(A, n);
        return 0;
}
