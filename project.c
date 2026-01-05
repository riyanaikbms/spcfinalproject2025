#include <stdio.h>

int main() {
    int rooms = 10, days, roomtype, roomsneeded, members;
    int roomcharges = 0, totalcost = 0;
    long long contactdetails;
    char guestname[50];
    
    printf("WELCOME TO BLUEWATER RESORT BOOKING\n\n");
    
    printf("Number of rooms available = %d\n\n", rooms);

    printf("Types of rooms available:\n");
    printf("1. Standard Room\n");
    printf("2. Deluxe Room\n");
    printf("3. Luxury Room\n\n");

    printf("Choose room type (1/2/3): ");
    scanf("%d", &roomtype);

    switch (roomtype) {
        case 1:
               printf("Facilities available for Standard Room:\n");
               printf("1. Double Bed\n");
               printf("2. Free Wi-Fi\n");
               printf("3. Flat Screen TV\n");
               printf("4. Telephone\n");
               printf("5. Wardrobe\n");
               printf("6. Basic toiletries\n");
               printf("7. Private bathroom with shower\n");
               printf("8. Tea/Coffee maker\n");
               printf("9. Air conditioning\n\n");
               printf("Standard room charges per night = 5000\n\n");
            roomcharges = 5000;
            break;
        case 2:
               printf("Facilities available for Deluxe Room:\n");
               printf("1. Larger room area\n");
               printf("2. King size bed\n");
               printf("3. Seating area (sofa)\n");
               printf("4. Mini-fridge\n");
               printf("5. Enhanced toiletries\n");
               printf("6. Slippers and bathrobe\n");
               printf("7. Garden view\n");
               printf("8. Tea/Coffee selection\n");
               printf("9. Air conditioning\n\n");
               printf("Deluxe room charges per night = 7000\n\n");
            roomcharges = 7000;
            break;
        case 3:
               printf("Facilities available for Luxury Room:\n");
               printf("1. Separate living room\n");
               printf("2. Premium bed\n");
               printf("3. Bathtub + Shower\n");
               printf("4. Premium entertainment\n");
               printf("5. Welcome amenities\n");
               printf("6. Complimentary minibar\n");
               printf("7. 24/7 Room service\n");
               printf("8. Balcony with sea view\n");
               printf("9. Luxury toiletries\n");
               printf("10. Centralised AC\n\n");
               printf("Luxury room charges per night = 10000\n\n");
            roomcharges = 10000;
            break;
        default:
            printf("Invalid room type!\n\n");
            return 0;
    }

   printf("Common facility for all rooms: Breakfast\n\n");

   printf("Number of rooms needed: ");
   scanf("%d", &roomsneeded);

    if (roomsneeded > rooms) {
        printf("Sorry! Only %d rooms available.\n\n", rooms);
        return 0;
    }

      printf("Total number of members: ");
    scanf("%d", &members);

    while (3*roomsneeded < members) {
        roomsneeded++;
    }

    printf("Sorry! You have to book extra rooms since each room can occupy maximum 3 members.\n\n");

    printf("Now rooms needed is %d\n\n",roomsneeded);
    
    printf("Number of days staying: ");
    scanf("%d", &days);

    totalcost = days * roomcharges * roomsneeded;

    printf("Enter your name: ");
    scanf("%s", guestname);

    printf("Enter your contact number: ");
    scanf("%lld", &contactdetails);

    printf("\nCheck-in time: 12:00 PM\nCheck-out time: 12:00 PM\n");

    printf("\n------ BILL DETAILS ------\n");
    printf("Name: %s\n", guestname);
    printf("Contact: %lld\n", contactdetails);
    printf("Total Cost = %d\n", totalcost);

    printf("\nTHANK YOU\n");

    return 0;
}
