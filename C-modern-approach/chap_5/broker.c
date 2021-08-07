/* Description: Calculates a broker's commission.
** Source: C Programming with LInux
*/

#include <stdio.h>

int main(void)
{
    float commission, rival_commmission, value;
    float shares, price_per_share, share_value;

    printf("Enter number of shares: ");
    scanf("%f", &shares);
    printf("Enter price per share: ");
    scanf("%f", &price_per_share);
    
    share_value = shares * price_per_share;

    if (value < 2500.00f)
        commission = 30.00f + 0.17f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission =  155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;
    if (commission < 39.00f)
        commission = 39.00f;

    if (shares < 2000)
        rival_commmission = 33.00f + 0.03f * share_value;
    else if(shares >= 2000)
        rival_commmission = 33.00f + 0.02 * share_value;

    printf("Original broker's commission: $%.2f\n", commission);
    printf("Rival's commision: %.2f\n", rival_commmission); 

    return 0;
}