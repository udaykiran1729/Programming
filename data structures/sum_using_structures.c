#include<stdio.h>
struct add
{
    int a,b;
};
int sum(struct add *s)
{
    
    return (s->a + s->b);
}
int main()
{
    struct add s;
    s.a=10;
    s.b=5;
    printf("%d",sum(&s));
}