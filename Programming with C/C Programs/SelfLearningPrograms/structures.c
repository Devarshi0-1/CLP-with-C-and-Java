#include <stdio.h>
#include <string.h>
struct Hotel
{
    char Hotel_name[100], Location[150], Date_of_development[15];
    int Hotel_id;
    float Price_of_accomodation;
};
void main()
{
    struct Hotel h1, h2, h3, h4, h5;
    printf("Enter the name of  Hotel1\n");
    fgets(h1.Hotel_name, sizeof(h1.Hotel_name), stdin);
    printf("Enter the location of Hotel1\n");
    fgets(h1.Location, sizeof(h1.Location), stdin);
    printf("Enter the date of development of the Hotel1\n");
    fgets(h1.Date_of_development, sizeof(h1.Date_of_development), stdin);
    printf("Enter the Hotel ID of hotel 1\n");
    scanf("%d", &h1.Hotel_id);
    printf("Enter the Price of accomodation of Hotel 1");
    scanf("%f", &h1.Price_of_accomodation);
    

    printf("Enter the name of  Hotel2\n");
    fgets(h2.Hotel_name, sizeof(h2.Hotel_name), stdin);
    printf("Enter the location of Hotel2\n");
    fgets(h2.Location, sizeof(h2.Location), stdin);
    printf("Enter the date of development of the Hotel2\n");
    fgets(h2.Date_of_development, sizeof(h2.Date_of_development), stdin);
    printf("Enter the Hotel ID of hotel 2\n");
    scanf("%d", &h2.Hotel_id);
    printf("Enter the Price of accomodation of Hotel 1");
    scanf("%f", &h2.Price_of_accomodation);

    printf("Enter the name of  Hotel3\n");
    fgets(h3.Hotel_name, sizeof(h3.Hotel_name), stdin);
    printf("Enter the location of Hotel3\n");
    fgets(h3.Location, sizeof(h3.Location), stdin);
    printf("Enter the date of development of the Hotel3\n");
    fgets(h3.Date_of_development, sizeof(h3.Date_of_development), stdin);
    printf("Enter the Hotel ID of hotel 3\n");
    scanf("%d", &h3.Hotel_id);
    printf("Enter the Price of accomodation of Hotel 3");
    scanf("%f", &h3.Price_of_accomodation);

    printf("Enter the name of  Hotel4\n");
    fgets(h4.Hotel_name, sizeof(h4.Hotel_name), stdin);
    printf("Enter the location of Hotel1\n");
    fgets(h4.Location, sizeof(h4.Location), stdin);
    printf("Enter the date of development of the Hotel4\n");
    fgets(h4.Date_of_development, sizeof(h4.Date_of_development), stdin);
    printf("Enter the Hotel ID of hotel 4\n");
    scanf("%d", &h4.Hotel_id);
    printf("Enter the Price of accomodation of Hotel 4");
    scanf("%f", &h4.Price_of_accomodation);

    printf("Enter the name of  Hotel5\n");
    fgets(h5.Hotel_name, sizeof(h5.Hotel_name), stdin);
    printf("Enter the location of Hotel5\n");
    fgets(h5.Location, sizeof(h5.Location), stdin);
    printf("Enter the date of development of the Hotel5\n");
    fgets(h5.Date_of_development, sizeof(h5.Date_of_development), stdin);
    printf("Enter the Hotel ID of hotel 5\n");
    scanf("%d", &h5.Hotel_id);
    printf("Enter the Price of accomodation of Hotel 5");
    scanf("%f", &h5.Price_of_accomodation);

    printf("The name of hotel1 is %c\n",h1.Hotel_name);
    printf("The location of hotel1 is %c\n",h1.Location);
    printf("The development date of hotel1 is %c\n",h1.Date_of_development);
    printf("The Hotel ID is %d\n",h1.Hotel_id);
    printf("The price of accomodation of hotel1 is %f\n",h1.Price_of_accomodation);

    printf("The name of hotel2 is %c\n",h2.Hotel_name);
    printf("The location of hotel2 is %c\n",h2.Location);
    printf("The development date of hotel1 is %c\n",h2.Date_of_development);
    printf("The Hotel ID is %d\n",h2.Hotel_id);
    printf("The price of accomodation of hotel2 is %f\n",h2.Price_of_accomodation);

    printf("The name of hotel3 is %c\n",h3.Hotel_name);
    printf("The location of hotel3 is %c\n",h3.Location);
    printf("The development date of hotel3 is %c\n",h3.Date_of_development);
    printf("The Hotel ID is %d\n",h3.Hotel_id);
    printf("The price of accomodation of hotel3 is %f\n",h3.Price_of_accomodation);

    printf("The name of hotel4 is %c\n",h4.Hotel_name);
    printf("The location of hotel4 is %c\n",h4.Location);
    printf("The development date of hotel4 is %c\n",h4.Date_of_development);
    printf("The Hotel ID is %d\n",h4.Hotel_id);
    printf("The price of accomodation of hotel4 is %f\n",h4.Price_of_accomodation);

    printf("The name of hotel5 is %c\n",h5.Hotel_name);
    printf("The location of hotel5 is %c\n",h5.Location);
    printf("The development date of hotel1 is %c\n",h5.Date_of_development);
    printf("The Hotel ID is %d\n",h5.Hotel_id);
    printf("The price of accomodation of hotel5 is %f\n",h5.Price_of_accomodation);

}
