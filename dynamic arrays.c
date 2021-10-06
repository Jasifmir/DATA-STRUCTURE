
#include<stdio.h>
#include<stdlib.h>
int sum(int *values, int count)
{
int sum=0;
for(int i=0;i<count; i++)
sum+=values[i];
}
return sum;

}
int main(void)
{
int count;
int *values;
puts("how many values do u want to add?" );
scanf("%d", &count);
values = calloc(count,size of (int));

puts ("enter the values one by one");
for(int i=0; i<count; i++)
{
printf("%d>" i+1);
scanf("%d" , &values[i]);
}
printf("the sum of values are %D\n",sum(values,count));
free(values);
return 0;
}
