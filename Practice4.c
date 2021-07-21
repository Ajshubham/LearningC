#include<stdio.h>

int main()
{
    int Hardness, T_strength;
    float C_content;
    printf("Enter Hardness, Tensile strength and Carbon strength of steel :");
    scanf("%d %d %f",&Hardness,&T_strength,&C_content);
    if(Hardness > 50 && T_strength > 5600 && C_content < 0.7)
    {
        printf("Steel is of grade 10.");
    }
    else if(Hardness > 50 && C_content < 0.7)
    {
        if(T_strength  > 5600 == 0)
        {
            printf("Steel is of grade 9.");
        }
    }
    else if(T_strength > 5600 && C_content < 0.7)
    {
        if(Hardness > 50)
        {
            printf("Steel is of grade 8.");
        }
    }
    else if( T_strength > 5600 && Hardness > 50)
    {
        if(C_content < 0.7 == 0)
        {
            printf("Steel is of grade 7.");
        }
    }
    else if(T_strength  > 5600 || Hardness > 50 || C_content < 0.7)
    {
        printf("Steel is of grade 6.");
    }
    else
    {
        printf("Steel is of grade 5.");
    }
    
}