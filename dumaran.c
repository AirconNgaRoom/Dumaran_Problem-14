#include <stdio.h>
int main(){
    float weight,bill,discount;
    int customer,i;
    float totKg=0;
    float totRevenue=0;
    float totDiscount=0;
    
    printf("Number of Customer: ");
    scanf("%d ", &customer);

    for (int i=1; i<=customer;i++)
    {
        printf("\nCustomer: %d\n",i);
        printf("Enter weight of Laundry: ");
        scanf("%f", &weight);

        bill=50*weight;

        if (weight>10)
        {
            discount=bill*.1;
        }
        printf("Final Bill (Pesos): %.2f", bill);

        totalKg+=weight;
        totalDiscount+= discount;
        totalRevenue+=bill;
    }
    printf("Total Kilograms: %.2f kg\n",totalKg);
    printf("Total Discount given (Pesos): %.2f\n", totalDiscount);
    printf("Total Revenue (Pesos): %.2f\n", totalRevenue);
    return 0;
}