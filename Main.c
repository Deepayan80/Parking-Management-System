#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int Number_of_Cycle = 0, Number_of_Bike = 0, Number_of_Car = 0, Number_of_Bus = 0, Number_of_Truck = 0;
int count = 0, amount = 0;
int Cycle()
{
    printf("Entry of Cycle is Succesful\n You have been charged Rs 10\n");
    Number_of_Cycle++;
    amount = amount + 10;
    count++;
}
int Bike()
{
    printf("Entry of Bike is Succesful\n You have been charged Rs 20\n");
    Number_of_Bike++;
    amount = amount + 20;
    count++;
}
int Car()
{
    printf("Entry of Car is Succesful\n You have been charged Rs 30\n");
    Number_of_Car++;
    amount = amount + 30;
    count++;
}
int Bus()
{
    printf("Entry of Bus is Succesful\n You have been charged Rs 40\n");
    Number_of_Bus++;
    amount = amount + 40;
    count++;
}
int Trucks()
{
    printf("Entry of Truck is Succesful\n You have been charged Rs 50\n");
    Number_of_Truck++;
    amount = amount + 50;
    count++;
}
int Menu()
{
    int choice;
    printf("Welcome to Das Parking LTD\n");
    printf("Press 1 for Cycle\n");
    printf("Press 2 for Bike\n");
    printf("Press 3 for Car\n");
    printf("Press 4 for Bus\n");
    printf("Press 5 for Truck\n");
    printf("Press 6 to show details of the entry\n");
    printf("Press 7 to quit\n");
    printf("Please enter your choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        Cycle();
        break;
    case 2:
        Bike();
        break;
    case 3:
        Car();
        break;
    case 4:
        Bus();
        break;
    case 5:
        Trucks();
        break;
    case 6:
        Showdetails();
        break;
    case 7:
        exit;
        break;
    default:
        printf("Enter a valid choice\n");
        break;
    }
    return choice;
}
int Showdetails()
{
    printf("Entry for today are: \n");
    printf("Total Number of Cycles: %d\n", Number_of_Cycle);
    printf("Total Number of Bike: %d\n", Number_of_Bike);
    printf("Total Number of Car: %d\n", Number_of_Car);
    printf("Total Number of Bus: %d\n", Number_of_Bus);
    printf("Total Number of Truck: %d\n", Number_of_Truck);
    printf("Total Number of Vehicles: %d\n", count);
    printf("Total Amount: %d\n", amount);
}
int main()
{
    int choice;
    do
    {
        choice = Menu();
    } while (choice != 7);
    return 0;
}