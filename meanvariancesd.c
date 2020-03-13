#include<stdio.h>
#include<math.h>
int main()
{
    int num[100], n, PorS;
    float  variance, mean, sd, sum = 0, sqrsum =0;
    printf("Enter the limit ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        printf("Enter number %d ", i+1);
        scanf("%d", &num[i]);
    }
    
	printf("\nSelect One\n\n1 - Population\n2 - Sample\n"); 
	scanf("%d", &PorS);
    while(PorS!=1&&PorS!=2)
    {
        printf("Entered value must be 1 or 2");
        scanf("%d", &PorS);
    }
	if(PorS==1)
    {
        PorS = n;
    }
    else
    {
        PorS = n-1;
    }
    
    for(int i=0; i<n; i++) 
    {
        sum+=num[i];
    }
    mean = sum/n;
    printf("\nMean : %.3lf", mean);

    for(int i=0; i<n; i++)   
    {
        sqrsum+=pow((num[i]-mean),2);
    }
    variance = sqrsum/PorS;
    printf("\nVariance : %.3lf", variance);

    sd = sqrt(variance);
    printf("\nStandard Deviation : %.3lf", sd);

    return 0;

}


