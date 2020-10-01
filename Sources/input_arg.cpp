#include <iostream>
#include <cstring>
using namespace std;

void showHelp();

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        if ( (strcmp(argv[i], "-h")) == 0 && i == 1 )
        {
            showHelp();
        }
    }
    return 0;
}

void showHelp()
{
    cout << "it is help function" << endl;
}