void sum(int arr_1[],int arr_2[],int x)
{
for(int a=0;a<x;a++)
{
printf("Enter value for Array 1 Element %d : ",a+1);
scanf("%d",&arr_1[a]);
}
for(int a=0;a<x;a++)
{
printf("Enter value for Array 2 Element %d : ",a+1);
scanf("%d",&arr_2[a]);
}
int sum[x];
for(int c=0;c<x;c++)
{
sum[c] = arr_1[c]+arr_2[c];
printf("%d\t",sum[c]);
}
}
int main()
{
int size;
printf("Enter the size of Arrays : ");
scanf("%d",&size);
int arr_1[size],arr_2[size];
sum(arr_1,arr_2,size);
}
