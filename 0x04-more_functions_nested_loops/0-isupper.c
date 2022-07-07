#include "main.h"

int _isupper(int c)
{
        int alpha;

        alpha = 65;
        while (alpha <= 90)
        {
                if (c == alpha)
                {
                        return (1);
                }
                else
                {
                        return (0);
                }
        }
        return (0);
}
