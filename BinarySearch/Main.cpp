#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int arr[10] = {10,20,30,40,50,60,70,80,90,100}, lb = 0, ub = (10-1), beg = lb, end = ub, mid = (beg+end)/2, data, pos = -1;

    printf("Enter what to search: ");
    scanf("%d", &data);
    
	//START BINARY SEARCH
	
    while (beg <= end) {
        
		
		for(int i = beg; i <= end; i++)
        {
            printf("%d\t", arr[i]);
        }
        
		printf("\n");
        
		if(arr[mid] == data)
        {
            pos = mid + 1;
            break;
        }
        else
        {
            if(data < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                beg = mid + 1;
            }
        }
        
		mid = (beg+end)/2;
    }

    if(pos == -1)
    {
        printf("\nElement not found in the array.");
    }
    else
    {
        printf("\nElement found in array at %d position.\n", pos);
    }
    system("pause");
    return 0;
}
