#include <stdio.h>
#include <stdlib.h>

int main()
{
    void insertion(int data[], int len)
    {
        int i;
        int j;
        for(i=1; i<len; i++)
        {
            temp = data[i];
            j=i-1;
            while (j>=0 && temp<data[j])
            {
                data[j+1] = data[j];
                j--;
            }
            data[j+1]=temp;  //insertion
        }
    }
    return 0;
}
