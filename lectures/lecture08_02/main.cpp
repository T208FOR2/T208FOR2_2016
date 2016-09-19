#include <iostream>

using namespace std;

void upphafsstillabord(char board[][3], int n);

int main()
{
    char mylla[3][3];
    upphafsstillabord(mylla, 3);
    return 0;
}

void upphafsstillabord(char board[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '_';
        }
    }
}
