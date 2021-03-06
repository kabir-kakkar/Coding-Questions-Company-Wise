// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

int maxCities(vector<vector<char>> &a, int n, int m);


// Driver code to test above functions
int main()
{

    
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> a(n, vector<char>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }

        cout << maxCities(a, n, m) << "\n";

    }


    return 0; 
}// } Driver Code Ends


int maxCities(vector<vector<char>> &a, int n, int m)
{
    // Your code goes here
    int i, j;
    int count = 0;
    
    int visited[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            visited[i][j] = 0;
        }
    }
    
    // cond = a[i-1][j-1]=="*" && visited[i-1][j-1]==0
    
    // i-1>=0 && j-1>=0 && i+1 < n && j+1 < m
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == '*') 
            {
                // check which neighbor is not visited and is "."
                
                // Check for top-left
                if (i-1 >= 0 && j-1 >= 0) {
                    if (a[i-1][j-1]=='.' && visited[i-1][j-1]==0)
                    {
                        count++;
                        visited[i-1][j-1] = 1;
                    }
                }
                
                // Check for top
                if (i-1 >= 0) {
                    if (a[i-1][j]=='.' && visited[i-1][j]==0)
                    {
                        count++;
                        visited[i-1][j] = 1;
                    }
                }
                
                // Check for top-right
                if (i-1 >= 0 && j+1 < m) {
                    if (a[i-1][j+1]=='.' && visited[i-1][j+1]==0)
                    {
                        count++;
                        visited[i-1][j+1] = 1;
                    }
                }
                
                // Check for left
                if (j-1 >= 0) {
                    if (a[i][j-1]=='.' && visited[i][j-1]==0)
                    {
                        count++;
                        visited[i][j-1] = 1;
                    }
                }
                
                // Check for right
                if (j+1 < m) {
                    if (a[i][j+1]=='.' && visited[i][j+1]==0)
                    {
                        count++;
                        visited[i][j+1] = 1;
                    }
                }
                
                // Check for Bottom left
                if (i+1 < n && j-1 >= 0) {
                    if (a[i+1][j-1]=='.' && visited[i+1][j-1]==0)
                    {
                        count++;
                        visited[i+1][j-1] = 1;
                    }
                }
                
                // Check for Bottom
                if (i+1 < n) {
                    if (a[i+1][j]=='.' && visited[i+1][j]==0)
                    {
                        count++;
                        visited[i+1][j] = 1;
                    }
                }
                
                // Check for Bottom-Right
                if (i+1 < n && j+1 < m) {
                    if (a[i+1][j+1]=='.' && visited[i+1][j+1]==0)
                    {
                        count++;
                        visited[i+1][j+1] = 1;
                    }
                }
            }
        }
    }
    return count;
}
