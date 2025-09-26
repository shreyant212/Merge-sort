#include<stdio.h>
void print(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf( "%d ", arr[i]);
}
printf("\n");
}
void merge(int low,int mid,int high,int arr[])
{
int i,j,k,b[100];
i=low,j=high,k=low;
while(i<=mid && j<=high)
{
if(arr[i]<arr[j])
{
b[k]=arr[i];
k++;i++;
}
else
{
b[k]=arr[j];
k++;j++;
}
}
while(i<=mid)
{
b[k]=arr[i];
k++;i++;
}
while(j<=high)
{
b[k]=arr[j];
k++;j++;
}
for(i=low;i<=high;i++)
{
arr[i]=b[k];
}
}
void sort(int low,int high,int arr[])
{
int mid;
if(low<high)
{
mid=(low+high)/2;
sort(low,mid,arr);
sort(mid,high,arr);
merge(low,mid,high,arr);
}
}
int main()
{
int arr[100];
int n,m;
printf("Enter number of terms");
scanf("%d",&n);
printf("Enter elements in array");
for(m=0;m<n;m++)
{
scanf("%d",&arr[m]);
}
print(arr,n);
printf("After sorted\n");
sort(0,n-1,arr);
print(arr,n);
return 0;
}






















