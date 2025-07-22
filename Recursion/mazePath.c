/*
#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{
    int rightway =0;
    int downway =0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        rightway += maze(cr, cc+1, er, ec);
    }
    if (cc==ec){
        downway += maze(cr+1, cc, er,ec);
    }
    if(cr<er && cc<ec){
        rightway += maze(cr, cc+1, er, ec);
        downway += maze(cr+1, cc, er, ec);
    }
    int totalways = rightway + downway;
    return totalways;
}
int main()
{
    int row;
    printf("Enter the maze row number: ");
    scanf("%d", &row);
    int col;
    printf("Enter power of the number: ");
    scanf("%d", &col);
    int final_ans = maze(1,1,row,col);  
    printf("The maze path of %d X %d is %d", row, col, final_ans); 
    return 0;
}*/

// short version.....
#include <stdio.h>
int maze(int row, int col)
{
    if (row == 1 || col == 1) return 1;
    return maze(row -1,col) + maze(row, col-1);
}
int main()
{
    int row;
    printf("Enter the maze row number: ");
    scanf("%d", &row);
    int col;
    printf("Enter power of the number: ");
    scanf("%d", &col);
    int final_ans = maze(row,col);  
    printf("The maze path of %d X %d is %d", row, col, final_ans); 
    return 0;
}