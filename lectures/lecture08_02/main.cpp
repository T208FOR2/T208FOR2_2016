#include <iostream>

using namespace std;

const int N = 8;

void upphafsstillabord(char board[][N]);

int main()
{
    char mylla[N][N];
    upphafsstillabord(mylla);
    return 0;
}

void upphafsstillabord(char board[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = '_';
        }
    }
}
