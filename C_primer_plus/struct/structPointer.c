#include <stdio.h>

struct merchandise{
    float price;
    float tax;
};
double totalPrice(const struct merchandise *);
double totalPriceRate(const struct merchandise);
int main()
{
    struct merchandise drug = {
        .price = 35.5,
        .tax = 2
    };
    printf("The total price is %lf.\n",totalPrice(&drug));
    printf("The total price rate is %lf.\n",totalPriceRate(drug));

}
double totalPrice(const struct merchandise *example)
{
    return (example->price + example->tax);
}
double totalPriceRate(const struct merchandise example2)
{
    return(example2.price * example2.tax);
}