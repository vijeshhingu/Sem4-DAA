#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void insertionsort(int n)
{
	int i,key,j;
	FILE *fp;
	fp=fopen("daaexp1bdata.txt","r");
	int arr[n],arrsort[n];
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d",&arr[i]);
	}
	for(i=1;i<n;i++) 
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key) 
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
	fclose(fp);
}
void selectionsort(int n)
{
	int i,j;
	FILE *fp;
	fp=fopen("daaexp1bdata.txt","r");
	int arr[n];
	for(int i=0;i<n;i++)
	{
		fscanf(fp,"%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		int temp,mini=i;
		for(j=i;j<n;j++)
		{
			if(arr[j]<arr[i]&&arr[j]<arr[mini])
			mini=j;
		}
		temp=arr[mini];
		arr[mini]=arr[i];
		arr[i]=temp;
	}
	fclose(fp);
}
void main()
{
	int i;
	clock_t start,end;
	FILE *fp;
	fp=fopen("daaexp1bdata.txt","w");
	for(int i=0;i<100000;i++)
	{
		int num=(rand()%100000);
		fprintf(fp," %d",num);
	}
	fclose(fp);
	FILE *fp2;
	fp2=fopen("daaexp1bexcel.xls","w");
	for(i=100;i<=100000;i=i+100)
	{
		start=clock();
		insertionsort(i);
		end=clock();
		fprintf(fp2," %lf",(double)(end-start)/CLOCKS_PER_SEC);
		start=clock();
		selectionsort(i);
		end=clock();
		fprintf(fp2," %lf",(double)(end-start)/CLOCKS_PER_SEC);
		fprintf(fp2,"\n");
	}
	fclose(fp2);
}