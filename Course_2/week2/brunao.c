/*  Program to randomly generate cards and show the probability of poker hands
    Felipe P Ferreira
    09/10/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef enum  suits{hearts, spades, diamonds, clubs}suits;

typedef enum pips{Ace, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king}pips;

typedef struct cards
{
    suits suit;
    pips pips;
}cards;

const char* print_pips (pips pips)
{
    switch (pips)
    {
    case (0):
        return "Ace";
        break;
    case (1):
       return "Two";
       break;
    case (2):
        return "Three";
        break;
    case (3):
        return "Four";
        break;
    case (4):
        return "Five";
        break;
    case (5):
        return "Six";
        break;
    case (6):
        return "Seven";
        break;
    case (7):
        return "Eight";
        break;
    case (8):
        return "Nine";
        break;
    case (9):
        return "Ten";
        break;
    case (10):
        return "Jack";
        break;
    case (11):
        return "Queen";
        break;
    case (12):
        return "King";
        break;    
    default:
        return "there is an error";
        break;
    }
}
const char* print_suit(suits suit)
{
    switch (suit)
    {
    case (0):
        return "Hearts";
        break;
    case (1):
        return"Spades";
        break;
    case (2):
        return"Diamonds";
        break;
    case (3):
        return"Clubs";
        break;
    default: 
        return" there is an error";
        break;
    }
}
void shuffle_cards(cards deck[], int amount)
{
    srand(time(NULL));
    int changer = 0;
    cards temp; 

    for (int i = 0; i < amount; i++)
    {
        changer = rand()% amount;

        temp = deck[i];
        deck[i] = deck[changer];
        deck[changer] = temp;
    }
}
void print_cards(cards deck[], int amount)
{
    for(int i = 0; i < amount; i++)
    {
        printf("%s of %s\n",print_pips(deck[i].pips), print_suit(deck[i].suit));
    }
}
int * probability (cards deck[], int amount)
{
    
    int full_house = 0 , four_kind = 0, three_kind = 0, two_pair = 0, pair = 0, no_pair = 0;
    
    for (int p = 0; p < 1000000; p++)
    {
        int count = 0, t = 100, change = 0;
        shuffle_cards(deck, amount);
 
        for (int i = 0; i < 7; i++)
        {
            for (int j = i + 1; j < 7; j++)
            {
                if(deck[i].pips == deck[j].pips)
                {
                    if (t != deck[i].pips)
                    {
                        change +=1;
                        count += 1;
                    }
                    
                    t = deck[i].pips;
                    count++;
                    break;
                }
            }
        }
        if (count == 5)
        {
            full_house+=1;
        }
        else if (count == 4)
        {
            if (change == 1)
            {
                four_kind+=1;
            }
            else if (change == 2)
            {
                two_pair+=1;
            }
        }
        else if (count == 3)
        {
            three_kind+=1;
        }
        else if (count == 2)
        {
            pair+=1;
        }
        else if (count == 0)
        {
        no_pair+=1;
        }
    }  
    
    int result[6];
    result[0] = full_house;
    result[1] = four_kind;
    result[2] = three_kind;
    result[3] = two_pair;
    result[4] = pair;
    result[5] = no_pair;
    
    return result;
}
int main()
{
    int amount = 52;
    cards deck[amount];
    int i = 0;
    double prob = 0.0;
    
    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 13; k++)
        {
            deck[i].pips = k;
            deck[i++].suit = j;
        }
    }
    print_cards (deck,amount);
    printf("\nShuffling...\n");
        
    int *result;
    
    result = probability (deck, amount);
    
    prob = result[0]/1000000;
    printf("\nThe probability of a full house is %lf\n", prob);
    prob = result[1]/1000000;
    printf("\nThe probability of a four kind is %lf\n", prob);
    prob = result[2]/1000000;
    printf("\nThe probability of a three kind is %lf\n", prob);
    prob = result[3]/1000000;
    printf("\nThe probability of a two pair is %lf\n", prob);
    prob = result[4]/1000000;
    printf("\nThe probability of a pair is %lf\n", prob);
    prob = result[5]/1000000;
    printf("\nThe probability of no pair is %lf\n", prob);

    return 0;
}