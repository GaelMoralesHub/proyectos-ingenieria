#include <stdio.h>
#include <conio.h>

main()
{
    // A variable 'm' (for minutes) is missing and must be declared.
    int h, m, s; 
    
    printf("\n\n Ingresa la cantidad de segundos: \n ");
    // 1. Read the input into the variable 's' (seconds)
    scanf("%d",&s); 

    if(s<=0)
    {
        printf(" \n ¡Error!, dato no valido.");
    }
    else
    {
        // 2. Start the output line with the total seconds
        printf("\n %d segundo(s) equivale(n) a: ",s); 

        if(s>=3600)
        {
            // 3. Calculate hours (integer division)
            h=s/3600; 
            printf("%d hora(s) ",h);
            // 4. Update remaining seconds
            s=s-3600*h; 
        }
        
        // 5. Check if remaining seconds are greater than or equal to a minute (60 seconds)
        if(s>=60)
        {
            // 6. Calculate minutes (integer division of remaining seconds by 60)
            m=s/60; 
            printf("%d minuto(s) ", m);
            // 7. Update remaining seconds
            s=s-m*60; 
        }
        
        // 8. Print remaining seconds if s > 0
        if(s>0)
        {
            printf("%d segundo(s)", s); 
        }
    }
    
    getch();
    return 0;
}
