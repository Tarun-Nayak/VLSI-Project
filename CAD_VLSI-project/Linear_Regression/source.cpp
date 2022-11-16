#include <iostream>

using namespace std;

float model(float Avg_Area_Income,float Avg_Area_House_age ,float Avg_Area_Number_of_rooms,float Avg_Area_Number_of_bedrooms,float Area_population )
{
    float prediction = 21.528276*Avg_Area_Income + 164883.282027*Avg_Area_House_age + 122368.678027*Avg_Area_Number_of_rooms + 2233.801864*Avg_Area_Number_of_bedrooms + 15.150420*Area_population-2640159.796851911;
    return prediction;
}

