void sum(int Arr_1[],int Arr_2[],int x)
{
for(int a=0;a<x;a++)
{
printf("Enter value for Array 1 Element %d : ",a+1);
scanf("%d",&Arr_1[a]);
}
for(int a=0;a<x;a++)
{
printf("Enter value for Array 2 Element %d : ",a+1);
scanf("%d",&Arr_2[a]);
}
int sum[x];
for(int c=0;c<x;c++)
{
sum[c] = Arr_1[c]+Arr_2[c];
printf("%d\t",sum[c]);
}
}
int main()
{
int size;
printf("Enter the size of Arrays : ");
scanf("%d",&size);
int Arr_1[size],Arr_2[size];
sum(Arr_1,Arr_2,size);
}
