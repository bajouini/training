#include <unistd.h>

int     str_len(char *s)
{
    int len = 0;

    while (*s)
    {
        s++;
        len++;
    }
    return (len);
}

int     is_blank(char c)
{
    return (c == ' ' || c == '\t');
}

void    print_reverse(char *s)
{
    int fast;
    int slow;
    int curr;

    fast = str_len(*s) - 1;
    slow = fast;
    curr = fast;

    while (fast >= 0)
    {
        slow = fast;
        curr = fast;

        while (fast >= 0 && !is_blank(s[fast]))
            fast--;
        fast++;
        curr = fast;
        while (curr <= slow)
        {
            write (1, &s[curr], 1);
            curr++;
        }
        if (fast > 0)
            write(1, " ", 1);
        fast--;
        fast--;
    }
}
        
    }
}