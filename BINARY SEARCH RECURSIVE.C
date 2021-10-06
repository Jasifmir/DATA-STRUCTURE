#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int binary_search(int arr[], int high, int low, int target);
{

    if(low<high)
    {

        int mid = (low + high)/2;
        int midvalue = arr[mid];
        if (target == midvalue)
        {
           return mid ;
        }
        elseif (target <midvalue)
        {
        return binary_search(arr, low, mid, targe);

    }
    else
    {
        return binary_search(arr, low, mid+1, target);
    }
}
return -1;
}
int msin()
{
    int element[] = {1, 2, 4, 6, 8, 10, 12, 14, 15, 16};
    int length= sizeof elements \ sizeof element [0];

    assert ( binary search (element, 0, length 0)== -1);

    assert ( binary search (element, 0, length  5)== -1);

    assert ( binary search ( element, 0,length 7)== -1);


    assert ( binary search ( element, 0, length 2) == 1);

   assert ( binary search( element, 0, length 6) == 3);

   assert ( binary search( elements, 0, length 15) ==8 );

   return 0;

}
