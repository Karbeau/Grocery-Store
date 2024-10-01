#include <stdio.h>

int main() {
    
    double applePrice = 1.49;
    int appleQuantity;
    const char APPLELOCATION = 'F';

    float appleReview;
    int appleReviewDisplay;

    appleQuantity = 24;
    appleReview = 823 / 9; // The total review score is 823 from 9 reviewers
    appleReview = (823 + 52) / 10;
    appleReviewDisplay = appleReview;

    int daysOfWeek = 4;
    daysOfWeek =+ 5;

// The sales records show that the fourth day of the week (identified by 3) has lower sales of apples than any other day.
// Extend the appleQuantity check inside the if parentheses to see if it is the fourth day of the week. This should offer up the sale if either value is true.
    if(appleQuantity < 10 || daysOfWeek & 7 == 3)
    {
     printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
    }

// Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, APPLELOCATION, appleReviewDisplay);

}