// This program will create the left side of a pyramid using octothorpe symbols.

# include <stdio.h> // Add standard input, output library.
# include <cs50.h> // Add cs50 library.

int main(void)
{
    int n; // Create a variable to hole the number entered by the user.
    int counter; // Create a variable to be used as a counter.

    do
    {
        n = get_int("Please enter a number from 0 to 23: "); // Ask the user to input an integer between 0 and 23.
    }
    while (n < 0 || n > 23); // Check to ensure the number entered by the user is valid.

    counter = n; // Assign the number entered by the user to the counter.
    int hashcount = 1; // Create a counter to print the correct number of pound signs.

    while (counter > 0)
    {
        for (int i = counter - 1;  i > 0; i--) // This for loop will print a decreasing number of blank spaces.
        {
            printf(" ");
        }
        hashcount++;
        for (int j = hashcount;  j > 0; j--) // This for loop will print an increasing number of hashtags.
        {
            printf("#");
        }
        printf("\n");
        counter--;
    }
}