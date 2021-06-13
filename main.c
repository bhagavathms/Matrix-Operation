#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\tMATRIX OPERATIONS");
    printf("\n");
    printf("\n  *******************************");
    printf("\n\t  MENU");
    printf("\n\t1.Addition");
    printf("\n\t2.Subtraction");
    printf("\n\t3.Triangular matrices");
    printf("\n\t4.Transpose");
    printf("\n\t5.Multiplication");
    printf("\n  *******************************");
    int ch;
    printf("\n");
    printf("\n\tEnter Choice :");
    scanf("%d",&ch);
    printf("\n\n");
    if (ch==1)
    {
        addition();
    }
    if (ch==2)
    {
        subtraction();
    }
    if (ch==3)
    {
        triangle();
    }
    if (ch==4)
    {
        transpose();
    }
    if (ch==5)
    {
        multiply();
    }
    else
    {
        return 0;
    }
}

void addition()
{
    printf("\t    Addition of Matrices");
    printf("\n\t2 Matrices of Same order Needed");
    printf("\n");
    int m,n;
    printf("\n\tEnter Number of Rows :");
    scanf("%d",&m);
    printf("\tEnter Number of Columns :");
    scanf("%d",&n);
    printf("\n\t     Matrix 1\n");
    int A[m][n];
    for (int i1=0;i1<m;i1=i1+1)
    {
        printf("\n\t      Row %d",i1+1);
        printf("\n");
        for (int j1=0;j1<n;j1=j1+1)
        {
            printf("\t  Enter Element :");
            scanf("%d",&A[i1][j1]);
        }
    }
    printf("\n");
    printf("\n\t     Matrix 2\n");
    int B[m][n];
    for (int i2=0;i2<m;i2=i2+1)
    {
        printf("\n\t      Row %d",i2+1);
        printf("\n");
        for (int j2=0;j2<n;j2=j2+1)
        {
            printf("\t  Enter Element :");
            scanf("%d",&B[i2][j2]);
        }
    }
    printf("\n");
    for (int i3=0;i3<m;i3=i3+1)
    {
        printf("\t    ");
        for (int j3=0;j3<n;j3=j3+1)
        {
            printf("%d ",A[i3][j3]);
        }
        printf("\n");
    }
    printf("\t    +\n");
    for (int i4=0;i4<m;i4=i4+1)
    {
        printf("\t    ");
        for (int j4=0;j4<n;j4=j4+1)
        {
            printf("%d ",B[i4][j4]);
        }
        printf("\n");
    }
    printf("\t    =\n");
    for (int k=0;k<m;k=k+1)
    {
        printf("\t    ");
        for (int l=0;l<n;l=l+1)
        {
            int sum=0;
            sum=A[k][l]+B[k][l];
            printf("%d ",sum);
        }
        printf("\n");
    }
    printf("\n");

}

void subtraction()
{
    printf("\t    Subtraction of Matrices");
    printf("\n\t 2 Matrices of Same order Needed");
    printf("\n");
    int m,n;
    printf("\n\tEnter Number of Rows :");
    scanf("%d",&m);
    printf("\tEnter Number of Columns :");
    scanf("%d",&n);
    printf("\n\t     Matrix 1\n");
    int A[m][n];
    for (int i1=0;i1<m;i1=i1+1)
    {
        printf("\n\t      Row %d",i1+1);
        printf("\n");
        for (int j1=0;j1<n;j1=j1+1)
        {
            printf("\t  Enter Element :");
            scanf("%d",&A[i1][j1]);
        }
    }
    printf("\n");
    printf("\n\t     Matrix 2\n");
    int B[m][n];
    for (int i2=0;i2<m;i2=i2+1)
    {
        printf("\n\t      Row %d",i2+1);
        printf("\n");
        for (int j2=0;j2<n;j2=j2+1)
        {
            printf("\t  Enter Element :");
            scanf("%d",&B[i2][j2]);
        }
    }
    printf("\n");
    for (int i3=0;i3<m;i3=i3+1)
    {
        printf("\t    ");
        for (int j3=0;j3<n;j3=j3+1)
        {
            printf("%d ",A[i3][j3]);
        }
        printf("\n");
    }
    printf("\t    -\n");
    for (int i4=0;i4<m;i4=i4+1)
    {
        printf("\t    ");
        for (int j4=0;j4<n;j4=j4+1)
        {
            printf("%d ",B[i4][j4]);
        }
        printf("\n");
    }
    printf("\t    =\n");
    for (int k=0;k<m;k=k+1)
    {
        printf("\t    ");
        for (int l=0;l<n;l=l+1)
        {
            int sum=0;
            sum=A[k][l]-B[k][l];
            printf("%d ",sum);
        }
        printf("\n");
    }
    printf("\n");

}

void triangle()
{
    printf("    Upper and Lower Triangular Matrix");
    printf("\n\t   Square Matrix Needed");
    printf("\n");
    int n;
    printf("\n\tEnter Order of Matrix :");
    scanf("%d",&n);
    int A[n][n];
    for (int i1=0;i1<n;i1=i1+1)
    {
        printf("\n\t      Row %d",i1+1);
        printf("\n");
        for (int j1=0;j1<n;j1=j1+1)
        {
            printf("\t  Enter Element :");
            scanf("%d",&A[i1][j1]);
        }
    }
    printf("\n");
    for (int i2=0;i2<n;i2=i2+1)
    {
        printf("\t    ");
        for (int j2=0;j2<n;j2=j2+1)
        {
            printf("%d ",A[i2][j2]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n    Upper Triangular Matrix\n");
    for (int k1=0;k1<n;k1=k1+1)
    {
        printf("\t    ");
        for (int l1=0;l1<n;l1=l1+1)
        {
            if (k1<=l1)
            {
                printf("%d ",A[k1][l1]);
            }
            else
            {
                printf("%d ",0);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n    Lower Triangular Matrix\n");
    for (int k2=0;k2<n;k2=k2+1)
    {
        printf("\t    ");
        for (int l2=0;l2<n;l2=l2+1)
        {
            if (k2>=l2)
            {
                printf("%d ",A[k2][l2]);
            }
            else
            {
                printf("%d ",0);
            }
        }
        printf("\n");
    }
}

void transpose()
{
    printf("\t   Transpose of Matrix");
    printf("\n\t    1 Matrix Needed");
    printf("\n");
    int m,n;
    printf("\n\tEnter Number of Rows :");
    scanf("%d",&m);
    printf("\tEnter Number of Columns :");
    scanf("%d",&n);
    printf("\n\t     Matrix 1\n");
    int A[m][n];
    for (int i1=0;i1<m;i1=i1+1)
    {
        printf("\n\t      Row %d",i1+1);
        printf("\n");
        for (int j1=0;j1<n;j1=j1+1)
        {
            printf("\t  Enter Element :");
            scanf("%d",&A[i1][j1]);
        }
    }
    printf("\n");
    for (int i2=0;i2<m;i2=i2+1)
    {
        printf("\t    ");
        for (int j2=0;j2<n;j2=j2+1)
        {
            printf("%d ",A[i2][j2]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\t   Transpose\n");
    int B[n][m];
    for (int k=0;k<m;k=k+1)
    {
        for (int l=0;l<n;l=l+1)
        {
            B[l][k]=A[k][l];
        }
    }
    printf("\n");
    for (int i3=0;i3<n;i3=i3+1)
    {
        printf("\t   ");
        for (int j3=0;j3<m;j3=j3+1)
        {
            printf("%d ",B[i3][j3]);
        }
        printf("\n");
    }

}

void multiply()
{
    printf("\tMultiplication of Matrices");
    printf("\n\t  2 Matrices Needed where");
    printf("\n    Column of 1st Matrix=Rows of 2nd Matrix");
    printf("\n");
    int m1,n1;
    printf("\n\t    For matrix 1");
    printf("\n\tEnter Number of Rows :");
    scanf("%d",&m1);
    printf("\tEnter Number of Columns :");
    scanf("%d",&n1);
    printf("\n\t     Matrix 1\n");
    int A[m1][n1];
    for (int i1=0;i1<m1;i1=i1+1)
    {
        printf("\n\t      Row %d",i1+1);
        printf("\n");
        for (int j1=0;j1<n1;j1=j1+1)
        {
            printf("\t  Enter Element :");
            scanf("%d",&A[i1][j1]);
        }
    }
    printf("\n");
    int m2,n2;
    printf("\n\t    For matrix 2");
    printf("\n\tEnter Number of Rows :");
    scanf("%d",&m2);
    printf("\tEnter Number of Columns :");
    scanf("%d",&n2);
    printf("\n\t     Matrix 2\n");
    int B[m2][n2];
    for (int i2=0;i2<m2;i2=i2+1)
    {
        printf("\n\t      Row %d",i2+1);
        printf("\n");
        for (int j2=0;j2<n2;j2=j2+1)
        {
            printf("\t  Enter Element :");
            scanf("%d",&B[i2][j2]);
        }
    }
    printf("\n");
    for (int i3=0;i3<m1;i3=i3+1)
    {
        printf("\t    ");
        for (int j3=0;j3<n1;j3=j3+1)
        {
            printf("%d ",A[i3][j3]);
        }
        printf("\n");
    }
    printf("\t     X\n");
    for (int i4=0;i4<m2;i4=i4+1)
    {
        printf("\t    ");
        for (int j4=0;j4<n2;j4=j4+1)
        {
            printf("%d ",B[i4][j4]);
        }
        printf("\n");
    }
    printf("\t     =\n");
    int C[m1][n2];
    int mul=1;
    int sum=0;
    for (int k=0;k<m1;k=k+1)
    {
        for (int l=0;l<n2;l=l+1)
        {
            for (int p=0;p<m2;p=p+1)
            {
                mul=A[k][p]*B[p][l];
                sum=sum+mul;
            }
            C[k][l]=sum;
            sum=0;
        }
    }
    for (int i5=0;i5<m1;i5=i5+1)
    {
        printf("\t    ");
        for (int j5=0;j5<n2;j5=j5+1)
        {
            printf("%d ",C[i5][j5]);
        }
        printf("\n");
    }
}
