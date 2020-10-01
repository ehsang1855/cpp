#include <iostream>

using namespace std;

void lottary(int, int);

int main() {
   lottary(49, 6);
    return 0;

}

void lottary(int total_balls, int balls_to_draw)
{
    if(total_balls < balls_to_draw)
    {
        return;
    }
    srand(time(NULL));
    int *balls = new int[balls_to_draw];
    for (int i = 0; i < balls_to_draw; i++)
    {
        balls[i] = rand() % total_balls +1;
        for (int j = 0; j < i; j++)
        {
            if(balls[i] == balls[j])
            {
                i--;
                break;
            }
        } 
    }
    for (int i = 0; i < balls_to_draw; i++)
    {
        cout<< balls[i]<<endl;
    }
    
    

    delete[] balls; 
}