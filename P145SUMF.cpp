#include <bits/stdc++.h>
using namespace std;
 
int r, c, a, b;
 
void init()
{
    cin >> r >> c >> a >> b;
}
void vex()
{
    for (int i = 0; i < b; i++)
    {
        cout << "X";
    }
}
 
void vecham()
{
    for (int i = 0; i < b; i++)
    {
        cout << ".";
    }
}
 
void xtruoc()
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j % 2 == 0)
            {
                vex();
            }
            else
            {
                vecham();
            }
        }
        cout << endl;
    }
}
 
void chamtruoc()
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j % 2 == 0)
            {
                vecham();
            }
            else
            {
                vex();
            }
        }
        cout << endl;
    }
}
 
void process()
{
    for (int i = 1; i <= r; i++)
    {
        if (i % 2 == 1)
            xtruoc();
        else
            chamtruoc();
    }
}
 
int main()
{
    init();
    process();
} 
