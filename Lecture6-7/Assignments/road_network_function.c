#include <stdbool.h>
#include <stdio.h>


#define MAT_SIZE 8
int i, j, location;

// Function for printing the matrix
void printMatrix(char station[MAT_SIZE][MAT_SIZE], bool mat[MAT_SIZE][MAT_SIZE])
{
    for (i = 0; i < MAT_SIZE ; i++) {
        printf("%s", station[i]);
        for (j = 0; j < MAT_SIZE ; j++)
            printf("\t%d", mat[i][j]);
        printf("\n");
	}
}

// Function for Printing the points/location
void printPoints(char *point[MAT_SIZE],bool mat[MAT_SIZE][MAT_SIZE]){
    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H \n>>> ");
    scanf ("%d", &location);
    
    // check if the input is a charging station
    if (location == 2 || location == 3)
    {
        printf("%s is a charging station.\n", point[location]);
    }
    else
    {
        printf("At point: %s\n", point[location]);
        // Move through the matrix by checking if there is a pathway
        switch (location)
        {
        // two-way path between a and b, b and c
        case 0: case 1:
            while (mat[location][location+1]==1) 
            {
                printf("Now at point %s\n", point[location+1]);
                location++;
            }
            break;
        //two-way path between e and d
        case 4:
            while (mat[location][location-1]==1) 
                {
                    printf("Now at point %s\n", point[location-1]);
                    location--;
                }
            break;
        // one-way path from g to a, and two-way path between a and f
        case 5: case 6:
            location = -1;
            while (mat[location][location+1]==1) 
            {
                printf("Now at point %s\n", point[location+1]);
                location++;
            }
            break;
        // No direct path
        default:
            printf("No Path Available!\n");
            break;
        }
        // Charging station 
        if (location == 2 || location == 3)
        {    
            printf("point: %s arrived to charging station\n", point[location]);
        }
    }
} 


// Driver Code
int main()
{
    printf("\tA\tB\t[C]\t[D]\tE\tF\tG\tH\n");
    char *point[] = {"A", "B", "C", "D", "E", "F", "G", "H"};
    char station[MAT_SIZE][MAT_SIZE] = {{"A  "}, {"B  "}, {"[C]"}, {"[D]"}, {"E  "}, {"F  "}, {"G  "}, {"H  "}};
	bool road_networks[MAT_SIZE][MAT_SIZE] = {  
        {1, 1, 0, 0, 0, 1, 0, 0}, 
        {1, 1, 1, 0, 0, 0, 0, 0}, 
        {0, 1, 1, 0, 1, 1, 0, 0}, 
        {0, 0, 0, 1, 1, 0, 0, 0}, 
        {0, 0, 0, 1, 1, 0, 0, 0}, 
        {1, 0, 1, 0, 0, 1, 0, 0}, 
        {1, 0, 0, 1, 0, 0, 1, 0}, 
        {0, 0, 0, 0, 0, 1, 0, 1}, 
    };

	printMatrix(station, road_networks);
    printPoints(point, road_networks);
    
    return 0;
}
    
    