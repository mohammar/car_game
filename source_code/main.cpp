#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <time.h>

using namespace std;
void delay(unsigned int mseconds)
{
    clock_t goal =mseconds+clock();
    while (goal>clock());
}
class Car {
   public:
        int position =0;

        // function for moving forward the car
        int move_front(int pos)
        {
            for (int x=0;x<pos;x++)
            {
                printf("===OOO===");
                delay(100);
            }
            position=position+pos;
            printf("Moving Forward %d\n",position);

        }
        // function for moving back the car
     //   void move_back(int pos)
        int move_back(int pos)
        {

            for (int x=0;x<pos;x++)
            {
                printf("******");

                delay(10);
            }
            position=position-pos;
            printf("Moving Backward %d\n",position);

        }


        int move_right(int pos)
        {
            for (int x=0;x<pos;x++)
            {
                printf(">>>>>");
                delay(100);
            }
            position=position+pos;
            printf("Moving right  %d\n",position);

        }

         int move_left(int pos)
        {
            for (int x=0;x<pos;x++)
            {
                printf("<<<<");
                delay(100);
            }
            position=position+pos;
            printf("Moving left  %d\n",position);

        }
};

int main()
{
            Car mycar;
            srand((unsigned)time(0));
            int random_front=rand();
            if (random_front>1000)
            {
                random_front=random_front/100;
            }
            int random_back=rand();
            if (random_back>1000)
            {
                random_back=random_back/100;
            }

            int random_right=rand();
            if (random_right>1000)
            {
                random_right=random_right/100;
            }

            int random_left=rand();
            if (random_left>1000)
            {
                random_left=random_left/100;
            }



         //   printf(" o#--#o \n");
            mycar.move_front(random_front);
            mycar.move_back(random_back);
         //   mycar.move_front(random_front);
        //    mycar.move_back(random_back);
            mycar.move_right(random_right);
            mycar.move_left(random_left);

            printf("The car has reached the position %d\n",mycar.position);

}
