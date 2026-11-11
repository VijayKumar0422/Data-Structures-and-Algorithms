/*

Problem Statement
Given a binary matrix containing only 0 and 1, 
find the area of the largest rectangle containing only 1s.

Input Format

First line contains two integers R and C, representing the number of rows and columns.
The next R lines contain C space-separated binary integers.

Output Format

Print the area of the largest rectangle containing only 1s.

Example

Input:
4 5
1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0


Output:
6

*/



#include <iostream>
#include <stack>
using namespace std;

// Largest Rectangle in Histogram
int largestRectangle(int arr[], int n) {

    stack<int> st;
    int maxArea = 0;

    for(int i = 0; i <= n; i++) {

        int curr = (i == n) ? 0 : arr[i];

        while(!st.empty() && arr[st.top()] > curr) {

            int height = arr[st.top()];
            st.pop();

            int width;

            if(st.empty())
                width = i;
            else
                width = i - st.top() - 1;

            int area = height * width;

            if(area > maxArea)
                maxArea = area;
        }

        st.push(i);
    }

    return maxArea;
}

int main() {

    int r = 4, c = 5;

    int mat[4][5] = {
        {1, 0, 1, 0, 0},
        {1, 0, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0}
    };

    int height[5] = {0};
    int maxArea = 0;

    // Process each row
    for(int i = 0; i < r; i++) {

        for(int j = 0; j < c; j++) {

            if(mat[i][j] == 1)
                height[j]++;
            else
                height[j] = 0;
        }

        int area = largestRectangle(height, c);

        if(area > maxArea)
            maxArea = area;
    }

    cout << maxArea;

    return 0;
}