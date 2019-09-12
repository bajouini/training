unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int c;
    if (!a || !b)
        return (0);
    if (a > b)
        c = (a / 2) + 1;
    else
        c = (b / 2) + 1;
    while (!((a % c) == 0 && (b % c) == 0))
        c--;
    return (a * b / c);
}