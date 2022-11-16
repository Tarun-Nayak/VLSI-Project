#include <iostream>

using namespace std;

float model(float Avg_Area_Income,float Avg_Area_House_age ,float Avg_Area_Number_of_rooms,float Avg_Area_Number_of_bedrooms,float Area_population);

int main() 
{
    float Avg_Area_Income=0.0;
    float Avg_Area_House_age=0.0;
    float Avg_Area_Number_of_rooms=0.0;
    float Avg_Area_Number_of_bedrooms=0.0;
    float Area_population=0.0;
    float prediction =model(Avg_Area_Income, Avg_Area_House_age , Avg_Area_Number_of_rooms, Avg_Area_Number_of_bedrooms, Area_population);
    cout<<"Prediction Value:"<<prediction<<endl;
    return 0;
}
