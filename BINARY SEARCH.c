#include <stdio.h>
#include <assert.h>
int binary_search(int arr[], int low, int high, int target)
{
  int left =low; int right =high;
  int result = -1;
  while (left<right) {
    int mid = (left+right) / 2;
    int midValue =arr[mid];

    if(target ==midValue)
        {
      result =mid;
      break;
    } elseif (target<midValue)
     {
      right =mid;
    } else

     {
      left =mid + 1;
    }
  }
  return result;
}
int main()
{
  int elements[]={2, 3, 4, 6, 8, 9, 34, 90, 112, 221};
  int length =sizeof elements / sizeof elements[0];

  assert(binary_search(elements, 0,length, 0)== -1);

  assert(binary_search(elements, 0,length, 234)== -1);

  assert(binary_search(elements, 0,length, 7)== -1);




  assert(binary_search(elements, 0,length, 4)== 2);

  assert(binary_search(elements, 0,length, 6)== 3);

  assert(binary_search(elements, 0,length, 221)== 9);

  assert(binary_search(elements, 0,length, 34)== 6);
  int e[] ={2};

     assert(binary_search(e, 0, 1, 2)== 0);
     printf("%d",binary_search(e, 0, 1 ,2));
  return 0;
}
