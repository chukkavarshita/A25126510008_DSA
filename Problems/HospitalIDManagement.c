#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of patients: ");
    scanf("%d",&n);
    int patients[n];
    int i,high,low,comparisions,position,key,mid,temp,j;
    printf("Enter patients ID\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&patients[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);
    
    //Linear search
    comparisions=0;
    position=-1;
    for(i=0;i<n;i++)
    {
        comparisions++;
        if(patients[i]==key){
        position=i;
        break;
        }
        else{
        printf("No such ID exists\n");
        break;
        }
    }
    if(position!=-1)
    {
    printf("Linear Search\n");
    printf("Patient ID found at position:%d\n",position);
    printf("Patient found in %d comaprisions\n",comparisions);
    }
    
    //sorting first
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(patients[i]>patients[j])
            {
                temp=patients[i];
                patients[i]=patients[j];
                patients[j]=temp;
            }
        }
    }
    
    //binary Search
    high=n-1;
    low=0;
    comparisions=0;
    position=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        comparisions++;
        if(patients[mid]==key)
        {
            position=mid;
            break;
        }
        else if(patients[mid]<key)
        low=mid+1;
        else if(patients[mid]>key)
        high=mid-1;
        else
        {
        printf("No such ID exists\n");
        break;
        }
        
    }
    if(position!=-1)
    {
    printf("Binary Search\n");
    printf("Patient ID found at position:%d\n",position);
    printf("Patient found in %d comaprisions\n",comparisions);
    }
    return 0;
    
}
