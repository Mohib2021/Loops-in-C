#include <stdio.h>
int main()
{

    // print your name ten time
    for (int nameCounter = 0; nameCounter < 10; nameCounter++)
    {
        printf("Md Mohibulla Sheikh \n");
    }

    // print the sum of even number from 1 to 10;
    int sum = 0;
    for (int numberCounter = 0; numberCounter <= 10; numberCounter++)
    {
        if (numberCounter % 2 == 0)
        {
            sum += numberCounter;
        }
    }
    printf("Sum of event number from 1 to 10 is %d", sum);

    return 0;
}
