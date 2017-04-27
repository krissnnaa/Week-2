    /* C program to build a binary heap using maximum heap method*/

    #include <stdio.h>

    #include <stdlib.h>

    #define MAX 20

    void maxheapify(int *, int, int);

    int* maxheap(int *, int);

    void main()

    {

        int i, j, n;

    	int *a = malloc(sizeof(int)*MAX);

        int *m = malloc(sizeof(int)*MAX);

        printf("Enter size of elements in the array\n");

        scanf("%d", &n);

        printf("Enter the array\n");

        i=0;

        while(i < n)
        {

            scanf("%d", (a+i));

            i++;
        }

        m = maxheap(a, n);

        printf("The heap is\n");

        j = 0;

        while( j < n)
        {

            printf("%d\n", *(m+j));

            j++;

        }

        free(a);

        free(m);


    }

    int* maxheap(int *a, int n)

    {

        int heapsize = n;

        int k=n/2;

        while( k >= 0)
        {

            maxheapify(a, k, heapsize);

            k--;
        }

        return (a);

    }

    void maxheapify(int *a, int l, int heapsize)

    {

        int temp, largest, left, right, k;

        left = (2*l+1);

        right = ((2*l)+2);

        if (left >= heapsize)

            return;

        else
        {

            if (left < (heapsize) && *(a+left) > *(a+l))

                largest = left;

            else

                largest = l;

            if (right < (heapsize) && *(a+right) > *(a+largest))

                largest = right;

            if (largest != l)

            {

                temp = *(a+l);

                *(a+l) = *(a+largest);

                *(a+largest) = temp;

                maxheapify(a, largest, heapsize);

            }

        }

    }
