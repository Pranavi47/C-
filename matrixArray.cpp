#include<iostream>
#include<utility>
using namespace std;

pair<int, int> createPair(int i, int j){
    return make_pair(i, j);
}
//linear search using pairs
pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] == key){
                return createPair(i, j);
            }
        } 
    }
    return {-1, -1};
}

// to find maxrowsum
//here we need traverse each row
int maxRowSum(int matrix[][3], int rows, int cols){
    int maxRowSum = INT_MIN;
    for(int i=0; i<rows; i++){
        int rowsumI = 0;
        for(int j=0; j<cols; j++){
            rowsumI += matrix[i][j];
        }
        maxRowSum = max(maxRowSum, rowsumI);
    }
    return maxRowSum;
}

//to find maxcolsum
// here we need to traverse each coloumn
int maxColSum(int matrix[][3], int rows, int cols){
    int maxColSum = INT_MIN;
    for(int j=0; j<cols; j++){
        int colsum = 0;
        for(int i=0; i<rows; i++){
            colsum += matrix[i][j];
        }
        maxColSum = max(maxColSum, colsum);
    }
    return maxColSum;
}

//finding diagonal sum in a square matrix : rows = coloumns = n;
//contains to diagonals primary and secondary
//primary: i = j; secondary: j = n-i-1
int diagonalSum(int matrix[][4], int n){
    int diagonalSum = 0;
    for(int i=0; i<n; i++){
       // for(int j=0; j<n; j++){.     //remove this loop to make it optimal
            diagonalSum += matrix[i][i];
            
            if(i != n-i-1){
                diagonalSum += matrix[i][n-i-1];
            }
        }
    return diagonalSum;
}
//main function
int main(){
    int matrix1[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {11, 12, 13}};
    int matrix2[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}; // in 3 by 3 5 is calculated tow times so subtract one 5 from total sum
    int rows1 = 4;
    int cols1 = 3;
    int key = 6;
    int n = 4;
    pair<int, int> result = linearSearch(matrix1, 4, 3, key);
    cout<< "("<<result.first << ", " << result.second<<")" <<endl;
    cout<< maxRowSum(matrix1, 4, 3)<<endl;
    cout<< maxColSum(matrix1, 4, 3)<<endl;
    cout<< diagonalSum(matrix2, 4)<<endl;

    return 0;
}