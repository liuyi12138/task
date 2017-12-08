#include <stdio.h>
#include <stdlib.h>
void mysort(void* base, size_t num, size_t size, int(*comparator)(const void*, const void*));
int cmp1(const void *a, const void *b);

int main()
{
    int j;
    int d[8] = {4,11,2,-3,15,4,0,7};

    mysort(d,8,sizeof(int),cmp1);
    for(j = 0; j < 8;  ++j)
    {
        printf("%d ", d[j]);
    }
    return 0;
}

void mysort(void* base, size_t num, size_t size, int(*comparator)(const void*, const void*)) {
    int i, j,key;
    void* temp = malloc(size);
    char*a=(char*)base;
    char*b=(char*)base+size;
    for (i = 0; i < num; i++)
    {

        for (j = i + 1; j < num; j++)
        {

            if (comparator(a, b) > 0)
            {
                memcpy(temp, a, size);
                memcpy(a,b, size);
                memcpy(b , temp, size);
            }
                b=b+size;
        }
        a=a+size;
        b=a+size;
    }
};
int cmp1(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}


