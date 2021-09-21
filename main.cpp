#include <iostream>
#include <graphics.h>
#include <winbgim.h>
#include <windows.h>
#include <MMsystem.h>



using namespace std;
struct libere
{
    int x1,x2,y1,y2;
};
libere piesacubusola[5],piesaunu[5],piesadoi[3],piesatrei[3];
int latura=40,c1[4][4],c2[4][4],c3[4][4],c4[4][4],a[7][7],b,v[8],rezolvare=0;
void cadran1()
{
    int i,j;
    for(i=1; i<=3; i++)
        for(j=1; j<=3; j++)
            c1[i][j]=a[i][j];

}
void cadran2()
{
    int i,j;
    for(i=1; i<=3; i++)
        for(j=1; j<=3; j++)
            c2[i][j]=a[i][j+3];
}
void cadran3()
{
    int i,j;
    for(i=1; i<=3; i++)
        for(j=1; j<=3; j++)
            c3[i][j]=a[i+3][j];
}
void cadran4()
{
    int i,j;
    for(i=1; i<=3; i++)
        for(j=1; j<=3; j++)
            c4[i][j]=a[i+3][j+3];
}
void Implementare()
{
    piesacubusola[1].x1=1;
    piesacubusola[1].y1=3;
    piesacubusola[1].x2=3;
    piesacubusola[1].y2=2;

    piesacubusola[2].x1=2;
    piesacubusola[2].y1=1;
    piesacubusola[2].x2=3;
    piesacubusola[2].y2=3;

    piesacubusola[3].x1=1;
    piesacubusola[3].y1=2;
    piesacubusola[3].x2=3;
    piesacubusola[3].y2=1;

    piesacubusola[4].x1=1;
    piesacubusola[4].y1=1;
    piesacubusola[4].x2=2;
    piesacubusola[4].y2=3;

    piesaunu[1].x1=2;
    piesaunu[1].y1=2;
    piesaunu[1].x2=3;
    piesaunu[1].y2=2;

    piesaunu[2].x1=2;
    piesaunu[2].y1=1;
    piesaunu[2].x2=2;
    piesaunu[2].y2=2;

    piesaunu[3].x1=1;
    piesaunu[3].y1=2;
    piesaunu[3].x2=2;
    piesaunu[3].y2=2;

    piesaunu[4].x1=2;
    piesaunu[4].y1=2;
    piesaunu[4].x2=2;
    piesaunu[4].y2=3;

    piesadoi[1].x1=1;
    piesadoi[1].y1=2;
    piesadoi[1].x2=3;
    piesadoi[1].y2=2;

    piesadoi[2].x1=2;
    piesadoi[2].y1=1;
    piesadoi[2].x2=2;
    piesadoi[2].y2=3;

    piesatrei[1].x1=1;
    piesatrei[1].y1=1;
    piesatrei[1].x2=3;
    piesatrei[1].y2=3;

    piesatrei[2].x1=1;
    piesatrei[2].y1=3;
    piesatrei[2].x2=3;
    piesatrei[2].y2=1;

    a[1][2]=a[1][4]=a[4][1]=a[5][5]=1;
    a[1][3]=a[4][2]=2;
    a[2][1]=a[2][5]=a[5][1]=a[6][4]=3;
    a[2][3]=a[2][6]=a[6][6]=a[5][2]=4;
    a[3][1]=a[3][4]=5;
    a[3][5]=a[4][3]=a[6][5]=a[6][1]=6;
    a[1][5]=a[5][4]=a[6][2]=7;
    a[6][3]=a[5][6]=8;

    cadran1();
    cadran2();
    cadran3();
    cadran4();



}
void level1()
{ rezolvare=1;
    b=1;
    v[1]=6;
    v[2]=6;
    v[3]=6;
    v[4]=6;
    v[5]=0;
    v[6]=0;
    v[7]=0;

}
void level2()
{ rezolvare=2;
    b=4;
    v[1]=4;
    v[2]=4;
    v[3]=4;
    v[4]=4;
    v[5]=0;
    v[6]=0;
    v[7]=0;

}
void level3()
{   rezolvare=0;
    b=2;
    v[1]=3;
    v[2]=3;
    v[3]=3;
    v[4]=3;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level4()
{  rezolvare=0;
    b=4;
    v[1]=1;
    v[2]=1;
    v[3]=1;
    v[4]=1;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level5()
{ rezolvare=0;
    b=1;
    v[1]=2;
    v[2]=3;
    v[3]=3;
    v[4]=3;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level6()
{ rezolvare=0;
    b=3;
    v[1]=3;
    v[2]=3;
    v[3]=3;
    v[4]=5;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level7()
{ rezolvare=0;
    b=1;
    v[1]=2;
    v[2]=2;
    v[3]=1;
    v[4]=1;
    v[5]=7;
    v[6]=0;
    v[7]=0;
}
void level8()
{ rezolvare=0;
    b=3;
    v[1]=3;
    v[2]=3;
    v[3]=3;
    v[4]=7;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level9()
{ rezolvare=0;
    b=2;
    v[1]=6;
    v[2]=6;
    v[3]=6;
    v[4]=3;
    v[5]=3;
    v[6]=0;
    v[7]=0;
}
void level10()
{ rezolvare=0;
    b=1;
    v[1]=2;
    v[2]=2;
    v[3]=3;
    v[4]=3;
    v[5]=7;
    v[6]=0;
    v[7]=0;
}
void level11()
{ rezolvare=0;
    b=3;
    v[1]=5;
    v[2]=5;
    v[3]=1;
    v[4]=1;
    v[5]=3;
    v[6]=0;
    v[7]=0;
}
void level12()
{  rezolvare=0;
    b=3;
    v[1]=6;
    v[2]=1;
    v[3]=4;
    v[4]=5;
    v[5]=5;
    v[6]=0;
    v[7]=0;
}
void level13()
{ rezolvare=0;
    b=4;
    v[1]=4;
    v[2]=4;
    v[3]=8;
    v[4]=0;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level14()
{ rezolvare=0;
    b=2;
    v[1]=1;
    v[2]=1;
    v[3]=1;
    v[4]=8;
    v[5]=8;
    v[6]=0;
    v[7]=0;
}
void level15()
{ rezolvare=0;
    b=4;
    v[1]=2;
    v[2]=5;
    v[3]=8;
    v[4]=7;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level16()
{ rezolvare=0;
    b=2;
    v[1]=4;
    v[2]=4;
    v[3]=4;
    v[4]=7;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level17()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=4;
    v[3]=0;
    v[4]=0;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level18()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=1;
    v[3]=1;
    v[4]=1;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level19()
{ rezolvare=0;
    b=0;
    v[1]=3;
    v[2]=3;
    v[3]=8;
    v[4]=0;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level20()
{ rezolvare=0;
    b=0;
    v[1]=8;
    v[2]=8;
    v[3]=1;
    v[4]=1;
    v[5]=3;
    v[6]=0;
    v[7]=0;
}
void level21()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=4;
    v[3]=4;
    v[4]=5;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level22()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=6;
    v[3]=6;
    v[4]=4;
    v[5]=4;
    v[6]=0;
    v[7]=0;
}
void level23()
{ rezolvare=0;
    b=0;
    v[1]=2;
    v[2]=2;
    v[3]=6;
    v[4]=6;
    v[5]=4;
    v[6]=5;
    v[7]=0;
}
void level24()
{ rezolvare=0;
    b=0;
    v[1]=2;
    v[2]=2;
    v[3]=3;
    v[4]=3;
    v[5]=4;
    v[6]=7;
    v[7]=0;
}
void level25()

{ rezolvare=0;


    b=0;
    v[1]=2;
    v[2]=2;
    v[3]=5;
    v[4]=6;
    v[5]=6;
    v[6]=3;
    v[7]=0;
}
void level26()
{ rezolvare=0;


    b=0;
    v[1]=3;
    v[2]=3;
    v[3]=3;
    v[4]=3;
    v[5]=4;
    v[6]=8;
    v[7]=0;
}
void level27()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=6;
    v[3]=4;
    v[4]=4;
    v[5]=4;
    v[6]=7;
    v[7]=0;
}
void level28()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=6;
    v[3]=7;
    v[4]=5;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level29()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=2;
    v[3]=2;
    v[4]=4;
    v[5]=4;
    v[6]=5;
    v[7]=0;
}
void level30()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=6;
    v[3]=6;
    v[4]=3;
    v[5]=3;
    v[6]=3;
    v[7]=4;
}
void level31()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=6;
    v[3]=6;
    v[4]=1;
    v[5]=1;
    v[6]=1;
    v[7]=4;
}
void level32()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=6;
    v[3]=6;
    v[4]=3;
    v[5]=1;
    v[6]=5;
    v[7]=0;
}
void level33()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=6;
    v[3]=1;
    v[4]=8;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level34()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=2;
    v[3]=3;
    v[4]=3;
    v[5]=3;
    v[6]=5;
    v[7]=0;
}
void level35()
{ rezolvare=0;
    b=0;
    v[1]=5;
    v[2]=4;
    v[3]=7;
    v[4]=6;
    v[5]=0;
    v[6]=0;
    v[7]=0;
}
void level36()
{ rezolvare=0;
    b=0;
    v[1]=6;
    v[2]=6;
    v[3]=6;
    v[4]=7;
    v[5]=7;
    v[6]=1;
    v[7]=0;
}

void levels();
void menu();
bool inInterior(int x, int y, int x1, int y1, int x2, int y2)
{
    return x1<=x && x<=x2 && y1<=y && y<=y2;
}

void piesabusola(int x,int y,int i)
{

    if(i==1)
    {
        readimagefile("busolaN.jpg",x,y, x+2*latura,y+2*latura);
        readimagefile("albastru_deschis.jpg",x+2*latura,y+1*latura,x+3*latura,y+3*latura);
        readimagefile("albastru_deschis.jpg",x,y+2*latura,x+latura,y+3*latura);
    }
    if(i==2)
    {
        readimagefile("busolaE.jpg",x+latura,y, x+3*latura,y+2*latura);
        readimagefile("albastru_deschis.jpg",x,y,x+latura,y+latura);
        readimagefile("albastru_deschis.jpg",x,y+2*latura,x+2*latura,y+3*latura);
    }
    if(i==3)
    {
        readimagefile("busolaS.jpg",x+latura,y+latura, x+3*latura,y+3*latura);
        readimagefile("albastru_deschis.jpg",x,y,x+latura,y+2*latura);
        readimagefile("albastru_deschis.jpg",x+2*latura,y,x+3*latura,y+latura);
    }
    if(i==4)
    {
        readimagefile("busolaV.jpg",x,y+latura, x+2*latura,y+3*latura);
        readimagefile("albastru_deschis.jpg",x+latura,y,x+3*latura,y+latura);
        readimagefile("albastru_deschis.jpg",x+2*latura,y+2*latura,x+3*latura,y+3*latura);


    }



}
void piesa1(int x,int y,int i)
{
    if(i==1)
    {
        readimagefile("albastru_deschis.jpg",x,y,x+3*latura,y+latura);
        readimagefile("albastru_deschis.jpg",x,y,x+latura,y+3*latura);
        readimagefile("albastru_deschis.jpg",x+2*latura,y,x+3*latura,y+3*latura);
    }
    if(i==2)
    {
        readimagefile("albastru_deschis.jpg",x,y,x+3*latura,y+latura);
        readimagefile("albastru_deschis.jpg",x+2*latura,y+latura,x+3*latura,y+3*latura);
        readimagefile("albastru_deschis.jpg",x,y+2*latura,x+3*latura,y+3*latura);
    }
    if(i==3)
    {
        readimagefile("albastru_deschis.jpg",x,y,x+latura,y+3*latura);
        readimagefile("albastru_deschis.jpg",x,y+2*latura,x+3*latura,y+3*latura);
        readimagefile("albastru_deschis.jpg",x+2*latura,y,x+3*latura,y+3*latura);
    }
    if(i==4)
    {
        readimagefile("albastru_deschis.jpg",x,y,x+3*latura,y+latura);
        readimagefile("albastru_deschis.jpg",x,y,x+latura,y+3*latura);
        readimagefile("albastru_deschis.jpg",x,y+2*latura,x+3*latura,y+3*latura);
    }


}
void piesa2(int x,int y,int i)
{
    if(i==1)
    {
        readimagefile("albastru_deschis.jpg",x+latura,y+latura,x+2*latura,y+2*latura);
        readimagefile("albastru_deschis.jpg",x,y,x+latura,y+3*latura);
        readimagefile("albastru_deschis.jpg",x+2*latura,y,x+3*latura,y+3*latura);
    }
    if(i==2)
    {
        readimagefile("albastru_deschis.jpg",x,y,x+3*latura,y+latura);
        readimagefile("albastru_deschis.jpg",x+latura,y+latura,x+2*latura,y+2*latura);
        readimagefile("albastru_deschis.jpg",x,y+2*latura,x+3*latura,y+3*latura);
    }

}
void piesa3(int x,int y,int i)
{
    if(i==1)
    {
        readimagefile("albastru_deschis.jpg",x,y+latura,x+2*latura,y+3*latura);
        readimagefile("albastru_deschis.jpg",x+latura,y,x+3*latura,y+2*latura);
    }
    if(i==2)
    {
        readimagefile("albastru_deschis.jpg",x,y,x+2*latura,y+2*latura);
        readimagefile("albastru_deschis.jpg",x+latura,y+latura,x+3*latura,y+3*latura);

    }


}
void tabla(int x,int y)
{
    readimagefile("albastru_deschis.jpg",x,y,x+9*latura,y+9*latura);//sus-stg
    readimagefile("albastru_inchis.jpg",x+latura-5,y+latura-5,x+4*latura+5,y+4*latura+5);
    readimagefile("pirat.jpg",x+2*latura,y+latura,x+3*latura,y+2*latura);
    readimagefile("corabie_lovita.jpg",x+3*latura,y+latura,x+4*latura,y+2*latura);
    readimagefile("corabie_simpla.jpg",x+latura,y+2*latura,x+2*latura,y+3*latura);
    readimagefile("cufar.jpg",x+3*latura,y+2*latura,x+4*latura,y+3*latura);
    readimagefile("caracatita.jpg",x+latura,y+3*latura,x+2*latura,y+4*latura);
    readimagefile("albastru_inchis.jpg",x+5*latura-5,y+latura-5,x+8*latura+5,y+4*latura+5);//sus-dr
    readimagefile("pirat.jpg",x+5*latura,y+latura,x+6*latura,y+2*latura);
    readimagefile("castel.jpg",x+6*latura,y+latura,x+7*latura,y+2*latura);
    readimagefile("corabie_simpla.jpg",x+6*latura,y+2*latura,x+7*latura,y+3*latura);
    readimagefile("cufar.jpg",x+7*latura,y+2*latura,x+8*latura,y+3*latura);
    readimagefile("caracatita.jpg",x+5*latura,y+3*latura,x+6*latura,y+4*latura);
    readimagefile("corabie_pirati.jpg",x+6*latura,y+3*latura,x+7*latura,y+4*latura);
    readimagefile("albastru_inchis.jpg",x+latura-5,y+5*latura-5,x+4*latura+5,y+8*latura+5);//jos-stg
    readimagefile("pirat.jpg",x+latura,y+5*latura,x+2*latura,y+6*latura);
    readimagefile("corabie_lovita.jpg",x+2*latura,y+5*latura,x+3*latura,y+6*latura);
    readimagefile("corabie_pirati.jpg",x+3*latura,y+5*latura,x+4*latura,y+6*latura);
    readimagefile("corabie_simpla.jpg",x+latura,y+6*latura,x+2*latura,y+7*latura);
    readimagefile("cufar.jpg",x+2*latura,y+6*latura,x+3*latura,y+7*latura);
    readimagefile("corabie_pirati.jpg",x+latura,y+7*latura,x+2*latura,y+8*latura);
    readimagefile("castel.jpg",x+2*latura,y+7*latura,x+3*latura,y+8*latura);
    readimagefile("stanca.jpg",x+3*latura,y+7*latura,x+4*latura,y+8*latura);
    readimagefile("albastru_inchis.jpg",x+5*latura-5,y+5*latura-5,x+8*latura+5,y+8*latura+5);//jos-dr
    readimagefile("castel.jpg",x+5*latura,y+6*latura,x+6*latura,y+7*latura);
    readimagefile("pirat.jpg",x+6*latura,y+6*latura,x+7*latura,y+7*latura);
    readimagefile("stanca.jpg",x+7*latura,y+6*latura,x+8*latura,y+7*latura);
    readimagefile("corabie_simpla.jpg",x+5*latura,y+7*latura,x+6*latura,y+8*latura);
    readimagefile("corabie_pirati.jpg",x+6*latura,y+7*latura,x+7*latura,y+8*latura);
    readimagefile("cufar.jpg",x+7*latura,y+7*latura,x+8*latura,y+8*latura);



}
void sortare(int r[],int n)
{
    int i, j, aux;
    for (i = 1; i < n; i++)
        for (j = i+1; j <= n; j++)
            if (r[i] >r[j])
            {
                aux=r[j];
                r[j]=r[i];
                r[i]=aux;
            }
}
int verifica (int bus,int piesa1, int piesa2, int piesa3,int pozitieb,int pozitie1,int pozitie2,int pozitie3,int simbol[],int busola)
{
    int test[8],k=0,e=0;
    if(busola!=pozitieb && busola!=0)
        return 0;
        while(k<=7)
    {
        k++;
        test[k]=0;

    }
        k=0;
    if(bus==1)
    {

        if(c1[piesacubusola[pozitieb].x1][piesacubusola[pozitieb].y1]!=0)
        {
            k++;
            test[k]=c1[piesacubusola[pozitieb].x1][piesacubusola[pozitieb].y1];
        }
        if(c1[piesacubusola[pozitieb].x2][piesacubusola[pozitieb].y2]!=0)
        {
            k++;
            test[k]=c1[piesacubusola[pozitieb].x2][piesacubusola[pozitieb].y2];

        }
    }
    else if(bus==2)
    {
        if(c2[piesacubusola[pozitieb].x1][piesacubusola[pozitieb].y1]!=0)
        {
            k++;
            test[k]=c2[piesacubusola[pozitieb].x1][piesacubusola[pozitieb].y1];
        }
        if(c2[piesacubusola[pozitieb].x2][piesacubusola[pozitieb].y2]!=0)
        {
            k++;
            test[k]=c2[piesacubusola[pozitieb].x2][piesacubusola[pozitieb].y2];
        }
    }
    else

        if(bus==3)
        {
            if(c3[piesacubusola[pozitieb].x1][piesacubusola[pozitieb].y1]!=0)
            {
                k++;
                test[k]=c3[piesacubusola[pozitieb].x1][piesacubusola[pozitieb].y1];
            }
            if(c3[piesacubusola[pozitieb].x2][piesacubusola[pozitieb].y2]!=0)
            {
                k++;
                test[k]=c3[piesacubusola[pozitieb].x2][piesacubusola[pozitieb].y2];
            }
        }
        else if(bus==4)
        {
            if(c4[piesacubusola[pozitieb].x1][piesacubusola[pozitieb].y1]!=0)
            {
                k++;
                test[k]=c4[piesacubusola[pozitieb].x1][piesacubusola[pozitieb].y1];
            }
            if(c4[piesacubusola[pozitieb].x2][piesacubusola[pozitieb].y2]!=0)
            {
                k++;
                test[k]=c4[piesacubusola[pozitieb].x2][piesacubusola[pozitieb].y2];
            }

        }

    if(piesa1==1)
    {
        if(c1[piesaunu[pozitie1].x1][piesaunu[pozitie1].y1]!=0)
        {
            k++;
            test[k]=c1[piesaunu[pozitie1].x1][piesaunu[pozitie1].y1];
        }
        if(c1[piesaunu[pozitie1].x2][piesaunu[pozitie1].y2]!=0)
        {
            k++;
            test[k]=c1[piesaunu[pozitie1].x2][piesaunu[pozitie1].y2];
        }
    }
    else if(piesa1==2)
    {
        if(c2[piesaunu[pozitie1].x1][piesaunu[pozitie1].y1]!=0)
        {
            k++;
            test[k]=c2[piesaunu[pozitie1].x1][piesaunu[pozitie1].y1];
        }
        if(c2[piesaunu[pozitie1].x2][piesaunu[pozitie1].y2]!=0)
        {
            k++;
            test[k]=c2[piesaunu[pozitie1].x2][piesaunu[pozitie1].y2];
        }
    }
    else if(piesa1==3)
    {
        if(c3[piesaunu[pozitie1].x1][piesaunu[pozitie1].y1]!=0)
        {
            k++;
            test[k]=c3[piesaunu[pozitie1].x1][piesaunu[pozitie1].y1];
        }
        if(c3[piesaunu[pozitie1].x2][piesaunu[pozitie1].y2]!=0)
        {
            k++;
            test[k]=c3[piesaunu[pozitie1].x2][piesaunu[pozitie1].y2];
        }
    }
    else if(piesa1==4)
    {
        if(c4[piesaunu[pozitie1].x1][piesaunu[pozitie1].y1]!=0)
        {
            k++;
            test[k]=c4[piesaunu[pozitie1].x1][piesaunu[pozitie1].y1];
        }
        if(c4[piesaunu[pozitie1].x2][piesaunu[pozitie1].y2]!=0)
        {
            k++;
            test[k]=c4[piesaunu[pozitie1].x2][piesaunu[pozitie1].y2];
        }
    }
    if(piesa2==1)
    {
        if(c1[piesadoi[pozitie2].x1][piesadoi[pozitie2].y1]!=0)
        {
            k++;
            test[k]=c1[piesadoi[pozitie2].x1][piesadoi[pozitie2].y1];
        }
        if(c1[piesadoi[pozitie2].x2][piesadoi[pozitie2].y2]!=0)
        {
            k++;
            test[k]=c1[piesadoi[pozitie2].x2][piesadoi[pozitie2].y2];
        }
    }
    else if(piesa2==2)
    {
        if(c2[piesadoi[pozitie2].x1][piesadoi[pozitie2].y1]!=0)
        {
            k++;
            test[k]=c2[piesadoi[pozitie2].x1][piesadoi[pozitie2].y1];
        }
        if(c2[piesadoi[pozitie2].x2][piesadoi[pozitie2].y2]!=0)
        {
            k++;
            test[k]=c2[piesadoi[pozitie2].x2][piesadoi[pozitie2].y2];
        }
    }
    else if(piesa2==3)
    {
        if(c3[piesadoi[pozitie2].x1][piesadoi[pozitie2].y1]!=0)
        {
            k++;
            test[k]=c3[piesadoi[pozitie2].x1][piesadoi[pozitie2].y1];
        }
        if(c3[piesadoi[pozitie2].x2][piesadoi[pozitie2].y2]!=0)
        {
            k++;
            test[k]=c3[piesadoi[pozitie2].x2][piesadoi[pozitie2].y2];
        }
    }
    else if(piesa2==4)
    {
        if(c4[piesadoi[pozitie2].x1][piesadoi[pozitie2].y1]!=0)
        {
            k++;
            test[k]=c4[piesadoi[pozitie2].x1][piesadoi[pozitie2].y1];
        }
        if(c4[piesadoi[pozitie2].x2][piesadoi[pozitie2].y2]!=0)
        {
            k++;
            test[k]=c4[piesadoi[pozitie2].x2][piesadoi[pozitie2].y2];
        }
    }

    if(piesa3==1)
    {
        if(c1[piesatrei[pozitie3].x1][piesatrei[pozitie3].y1]!=0)
        {
            k++;
            test[k]=c1[piesatrei[pozitie3].x1][piesatrei[pozitie3].y1];
        }
        if(c1[piesatrei[pozitie3].x2][piesatrei[pozitie3].y2]!=0)
        {
            k++;
            test[k]=c1[piesatrei[pozitie3].x2][piesatrei[pozitie3].y2];
        }
    }
    else if(piesa3==2)
    {
        if(c2[piesatrei[pozitie3].x1][piesatrei[pozitie3].y1]!=0)
        {
            k++;
            test[k]=c2[piesatrei[pozitie3].x1][piesatrei[pozitie3].y1];
        }
        if(c2[piesatrei[pozitie3].x2][piesatrei[pozitie3].y2]!=0)
        {
            k++;
            test[k]=c2[piesatrei[pozitie3].x2][piesatrei[pozitie3].y2];
        }
    }
    else if(piesa3==3)
    {
        if(c3[piesatrei[pozitie3].x1][piesatrei[pozitie3].y1]!=0)
        {
            k++;
            test[k]=c3[piesatrei[pozitie3].x1][piesatrei[pozitie3].y1];
        }
        if(c3[piesatrei[pozitie3].x2][piesatrei[pozitie3].y2]!=0)
        {
            k++;
            test[k]=c3[piesatrei[pozitie3].x2][piesatrei[pozitie3].y2];
        }
    }
    else if(piesa3==4)
    {
        if(c4[piesatrei[pozitie3].x1][piesatrei[pozitie3].y1]!=0)
        {
            k++;
            test[k]=c4[piesatrei[pozitie3].x1][piesatrei[pozitie3].y1];
        }
        if(c4[piesatrei[pozitie3].x2][piesatrei[pozitie3].y2]!=0)
        {
            k++;
            test[k]=c4[piesatrei[pozitie3].x2][piesatrei[pozitie3].y2];
        }
    }

    sortare(test,7);
    sortare(simbol,7);
    for(int i=1; i<=7; i++)
        if(test[i]==simbol[i])
            e++;
    if(e==7)
        return 1;

    return 0;
}
void provocare(int x,int y)
{
    readimagefile("albastru_inchis.jpg",x,y,x+500,y+100);
    y=y+15;
    x=x+5;
    if(b==1)
    {
        readimagefile("busolaN.jpg",x,y,x+70,y+70);
        x=x+70;


    }
    if(b==2)
    {
        readimagefile("busolaE.jpg",x,y,x+70,y+70);
        x=x+70;

    }
    if(b==3)
    {
        readimagefile("busolaS.jpg",x,y,x+70,y+70);
        x=x+70;

    }
    if(b==4)
    {
        readimagefile("busolaV.jpg",x,y,x+70,y+70);
        x=x+70;

    }

    for(int i=1; i<=7; i++)
    {
        if(v[i]==1)
        {
            readimagefile("pirat.jpg",x,y,x+70,y+70);
            x=x+70;

        }
        if(v[i]==2)
        {
            readimagefile("corabie_lovita.jpg",x,y,x+70,y+70);
            x=x+70;

        }
        if(v[i]==3)
        {
            readimagefile("corabie_simpla.jpg",x,y,x+70,y+70);
            x=x+70;

        }
        if(v[i]==4)
        {
            readimagefile("cufar.jpg",x,y,x+70,y+70);
            x=x+70;

        }
        if(v[i]==5)
        {
            readimagefile("caracatita.jpg",x,y,x+70,y+70);
            x=x+70;

        }
        if(v[i]==6)
        {
            readimagefile("corabie_pirati.jpg",x,y,x+70,y+70);
            x=x+70;

        }
        if(v[i]==7)
        {
            readimagefile("castel.jpg",x,y,x+70,y+70);
            x=x+70;

        }
        if(v[i]==8)
        {
            readimagefile("stanca.jpg",x,y,x+70,y+70);
            x=x+70;
        }


    }

}

void play()
{
    int x,y,xR,yR,ok=0,ok1=0,ok3=0,ok4=0,ok5=0,busolacounter,piesa1counter,piesa2counter,piesa3counter,undeampusbusola,undeampuspiesa2,undeampuspiesa3,undeampuspiesa1;
    readimagefile("masa.jpg",0,0,800,800);
    readimagefile("butonback.jpg",20,20,140,70);
    readimagefile("butonreset.jpg",650,550,770,600);
    if(rezolvare!=0)
    {
    readimagefile("butonrezolvare.jpg",30,550,150,600);
    }

    readimagefile("maro.jpg",75,625,695,795);
    provocare(130,75);
    tabla(200,200);
    piesabusola(100,650,1);
    piesa1(250,650,1);
    piesa2(400,650,1);
    piesa3(550,650,1);
    busolacounter=1;
    piesa1counter=1;
    piesa2counter=1;
    piesa3counter=1;
    undeampusbusola=0;
    undeampuspiesa2=0;
    undeampuspiesa3=0;
    undeampuspiesa1=0;




    do
    {
        getmouseclick(WM_LBUTTONDOWN,x,y);
        getmouseclick(WM_RBUTTONDOWN,xR,yR);
        if(inInterior(x,y,20,20,140,70))//BACK
        {
            ok=1;
            cleardevice();
            levels();
        }
        if(inInterior(x,y,30,550,150,600)&&rezolvare==1)
        { ok1=1;
          ok3=1;
          ok4=1;
          ok5=1;


           piesabusola(400,240,1);
           readimagefile("maro.jpg",100,650,220,770);
           piesa1(240,240,1);
           readimagefile("maro.jpg",250,650,370,770);
           piesa2(400,400,1);
           readimagefile("maro.jpg",400,650,520,770);

           piesa3(240,400,2);
           readimagefile("maro.jpg",550,650,670,770);

           readimagefile("goodjob.jpg",360,360,400,400);



        }
        if(inInterior(x,y,30,550,150,600)&&rezolvare==2)
        {
         ok1=1;
          ok3=1;
          ok4=1;
          ok5=1;

           piesabusola(240,240,4);
                    readimagefile("maro.jpg",100,650,220,770);
         piesa1(240,400,4);
                    readimagefile("maro.jpg",250,650,370,770);
           piesa2(400,240,2);
           readimagefile("maro.jpg",400,650,520,770);

          piesa3(400,400,1);
                    readimagefile("maro.jpg",550,650,670,770);

           readimagefile("goodjob.jpg",360,360,400,400);



        }
        if(inInterior(x,y,100,650,220,770)&&ok1==0)
        {
            int ok2=0;
            do
            {
                if(ismouseclick(WM_RBUTTONDOWN))
                    ok2=1;
                getmouseclick(WM_LBUTTONDOWN,x,y);
                if(inInterior(x,y,240,240,360,360))
                {
                    ok2=1;
                    ok1=1;
                    piesabusola(240,240,busolacounter);
                    readimagefile("maro.jpg",100,650,220,770);
                    undeampusbusola=1;

                }
                else if(inInterior(x,y,400,240,520,360))
                {
                    ok2=1;
                    ok1=1;
                    piesabusola(400,240,busolacounter);
                    readimagefile("maro.jpg",100,650,220,770);
                    undeampusbusola=2;

                }
                else if(inInterior(x,y,240,400,360,520))
                {
                    ok2=1;
                    ok1=1;
                    piesabusola(240,400,busolacounter);
                    readimagefile("maro.jpg",100,650,220,770);
                    undeampusbusola=3;

                }
                else if(inInterior(x,y,400,400,520,520))
                {
                    ok2=1;
                    ok1=1;
                    piesabusola(400,400,busolacounter);
                    readimagefile("maro.jpg",100,650,220,770);
                    undeampusbusola=4;

                }
                if(inInterior(x,y,0,0,800,800))
                {
                    ok2=1;


                }



            }
            while(ok2==0);

        } // piesa busola
        if(inInterior(x,y,250,650,370,770)&&ok3==0)
        {
            int ok2=0;

            do
            {
                if(ismouseclick(WM_RBUTTONDOWN))
                    ok2=1;
                getmouseclick(WM_LBUTTONDOWN,x,y);
                if(inInterior(x,y,240,240,360,360))
                {
                    ok2=1;
                    ok3=1;
                    piesa1(240,240,piesa1counter);
                    readimagefile("maro.jpg",250,650,370,770);
                    undeampuspiesa1=1;

                }
                else if(inInterior(x,y,400,240,520,360))
                {
                    ok2=1;
                    ok3=1;
                    piesa1(400,240,piesa1counter);
                    readimagefile("maro.jpg",250,650,370,770);
                    undeampuspiesa1=2;
                }
                else if(inInterior(x,y,240,400,360,520))
                {
                    ok2=1;
                    ok3=1;
                    piesa1(240,400,piesa1counter);
                    readimagefile("maro.jpg",250,650,370,770);
                    undeampuspiesa1=3;

                }
                else if(inInterior(x,y,400,400,520,520))
                {
                    ok2=1;
                    ok3=1;
                    piesa1(400,400,piesa1counter);
                    readimagefile("maro.jpg",250,650,370,770);
                    undeampuspiesa1=4;

                }
                if(inInterior(x,y,0,0,800,800))
                {
                    ok2=1;


                }


            }
            while(ok2==0);

        }//piesa1
        if(inInterior(x,y,400,650,520,770)&&ok4==0)
        {
            int ok2=0;
            do
            {
                if(ismouseclick(WM_RBUTTONDOWN))
                    ok2=1;
                getmouseclick(WM_LBUTTONDOWN,x,y);
                if(inInterior(x,y,240,240,360,360))
                {
                    ok2=1;
                    ok4=1;
                    piesa2(240,240,piesa2counter);
                    readimagefile("maro.jpg",400,650,520,770);
                    undeampuspiesa2=1;

                }
                else if(inInterior(x,y,400,240,520,360))
                {
                    ok4=1;
                    ok2=1;
                    piesa2(400,240,piesa2counter);
                    readimagefile("maro.jpg",400,650,520,770);
                    undeampuspiesa2=2;

                }
                else if(inInterior(x,y,240,400,360,520))
                {
                    ok4=1;
                    ok2=1;
                    piesa2(240,400,piesa2counter);
                    readimagefile("maro.jpg",400,650,520,770);
                    undeampuspiesa2=3;

                }
                else if(inInterior(x,y,400,400,520,520))
                {
                    ok4=1;
                    ok2=1;
                    piesa2(400,400,piesa2counter);
                    readimagefile("maro.jpg",400,650,520,770);
                    undeampuspiesa2=4;

                }
                if(inInterior(x,y,0,0,800,800))
                {
                    ok2=1;


                }


            }
            while(ok2==0);


        }//piesa2


        if(inInterior(x,y,550,650,770,770)&&ok5==0)
        {
            int ok2=0;
            do
            {
                if(ismouseclick(WM_RBUTTONDOWN))
                    ok2=1;
                getmouseclick(WM_LBUTTONDOWN,x,y);
                if(inInterior(x,y,240,240,360,360))
                {
                    ok2=1;
                    ok5=1;
                    piesa3(240,240,piesa3counter);
                    readimagefile("maro.jpg",550,650,670,770);
                    undeampuspiesa3=1;

                }
                else if(inInterior(x,y,400,240,520,360))
                {
                    ok2=1;
                    ok5=1;
                    piesa3(400,240,piesa3counter);
                    readimagefile("maro.jpg",550,650,670,770);
                    undeampuspiesa3=2;

                }
                else if(inInterior(x,y,240,400,360,520))
                {
                    ok2=1;
                    ok5=1;
                    piesa3(240,400,piesa3counter);
                    readimagefile("maro.jpg",550,650,670,770);
                    undeampuspiesa3=3;
                }
                else if(inInterior(x,y,400,400,520,520))
                {
                    ok2=1;
                    ok5=1;
                    piesa3(400,400,piesa3counter);
                    readimagefile("maro.jpg",550,650,670,770);
                    undeampuspiesa3=4;
                }
                if(inInterior(x,y,0,0,800,800))
                {
                    ok2=1;


                }


            }
            while(ok2==0);
        }//piesa3

        if(inInterior(xR,yR,100,650,220,770)&&ok1==0)
        {
            busolacounter=(busolacounter)%4+1;
            readimagefile("maro.jpg",100,650,220,770);
            piesabusola(100,650,busolacounter);

        }
        if(inInterior(xR,yR,250,650,370,770)&&ok3==0)
        {
            piesa1counter=(piesa1counter)%4+1;
            readimagefile("maro.jpg",250,650,370,770);
            piesa1(250,650,piesa1counter);

        }

        if(inInterior(xR,yR,400,650,520,770)&&ok4==0)
        {
            piesa2counter=(piesa2counter)%2+1;
            readimagefile("maro.jpg",400,650,520,770);
            piesa2(400,650,piesa2counter);


        }

        if(inInterior(xR,yR,550,650,770,770)&&ok5==0)
        {
            piesa3counter=(piesa3counter)%2+1;
            readimagefile("maro.jpg",550,650,670,770);
            piesa3(550,650,piesa3counter);

        }




        if(undeampusbusola!=0&&undeampuspiesa1!=0&&undeampuspiesa2!=0&&undeampuspiesa3!=0)
        {
            int c;
            c=verifica(undeampusbusola,undeampuspiesa1,undeampuspiesa2,undeampuspiesa3,busolacounter,piesa1counter,piesa2counter,piesa3counter,v,b);
            if(c)
            {
                readimagefile("goodjob.jpg",360,360,400,400);



            }
        }


        if(inInterior(x,y,650,550,770,600))//RESET
        {
            readimagefile("maro.jpg",75,625,695,795);
            piesabusola(100,650,1);
            piesa1(250,650,1);
            piesa2(400,650,1);
            piesa3(550,650,1);
            tabla(200,200);
            ok1=0;
            ok3=0;
            ok4=0;
            ok5=0;
            busolacounter=1;
            piesa1counter=1;
            piesa2counter=1;
            piesa3counter=1;
            undeampusbusola=0;
            undeampuspiesa1=0;
            undeampuspiesa2=0;
            undeampuspiesa3=0;


        }








    }
    while(ok==0);



}
void tutorial()
{
    int ok=0,x,y;
    readimagefile("poza_menu.jpg",0,0,800,800);
    readimagefile("reguli.jpg",40,40,760,760);
    readimagefile("butonback.jpg",20,20,140,70);
    do
    {
        getmouseclick(WM_LBUTTONDOWN,x,y);
        if(inInterior(x,y,20,20,140,70))
        {
            ok=1;
            cleardevice();
            menu();
        }
    }
    while(ok==0);

}
void readlevel()
{
    readimagefile("level1.jpg",100,100,175,175);
    readimagefile("level2.jpg",205,100,280,175);
    readimagefile("level3.jpg",310,100,385,175);
    readimagefile("level4.jpg",415,100,490,175);
    readimagefile("level5.jpg",520,100,595,175);
    readimagefile("level6.jpg",625,100,700,175);

    readimagefile("level7.jpg",100,205,175,280);
    readimagefile("level8.jpg",205,205,280,280);
    readimagefile("level9.jpg",310,205,385,280);
    readimagefile("level10.jpg",415,205,490,280);
    readimagefile("level11.jpg",520,205,595,280);
    readimagefile("level12.jpg",625,205,700,280);

    readimagefile("level13.jpg",100,310,175,385);
    readimagefile("level14.jpg",205,310,280,385);
    readimagefile("level15.jpg",310,310,385,385);
    readimagefile("level16.jpg",415,310,490,385);
    readimagefile("level17.jpg",520,310,595,385);
    readimagefile("level18.jpg",625,310,700,385);

    readimagefile("level19.jpg",100,415,175,490);
    readimagefile("level20.jpg",205,415,280,490);
    readimagefile("level21.jpg",310,415,385,490);
    readimagefile("level22.jpg",415,415,490,490);
    readimagefile("level23.jpg",520,415,595,490);
    readimagefile("level24.jpg",625,415,700,490);

    readimagefile("level25.jpg",100,520,175,595);
    readimagefile("level26.jpg",205,520,280,595);
    readimagefile("level27.jpg",310,520,385,595);
    readimagefile("level28.jpg",415,520,490,595);
    readimagefile("level29.jpg",520,520,595,595);
    readimagefile("level30.jpg",625,520,700,595);

    readimagefile("level31.jpg",100,625,175,700);
    readimagefile("level32.jpg",205,625,280,700);
    readimagefile("level33.jpg",310,625,385,700);
    readimagefile("level34.jpg",415,625,490,700);
    readimagefile("level35.jpg",520,625,595,700);
    readimagefile("level36.jpg",625,625,700,700);


}
void levels()
{
    int x,y,ok=0;
    readimagefile("poza_menu.jpg",0,0,800,800);
    readimagefile("butonback.jpg",20,20,140,70);
    readlevel();
    do
    {
        getmouseclick(WM_LBUTTONDOWN,x,y);
        if(inInterior(x,y,20,20,140,70))
        {
            ok=1;
            cleardevice();
            menu();
        }
        if(inInterior(x,y,100,100,175,175))
        {
            level1();
            play();

        }
        if(inInterior(x,y,205,100,280,175))
        {
            level2();
            play();

        }
        if(inInterior(x,y,310,100,385,175))
        {
            level3();
            play();;

        }
        if(inInterior(x,y,415,100,490,175))
        {
            level4();
            play();
        }
        if(inInterior(x,y,520,100,595,175))
        {
            level5();
            play();

        }
        if(inInterior(x,y,625,100,700,175))
        {
            level6();
            play();

        }
        if(inInterior(x,y,100,205,175,280))
        {
            level7();
            play();

        }
        if(inInterior(x,y,205,205,280,280))
        {
            level8();
            play();


        }
        if(inInterior(x,y,310,205,385,280))
        {
            level9();
            play();

        }
        if(inInterior(x,y,415,205,490,280))
        {
            level10();
            play();
        }
        if(inInterior(x,y,520,205,595,280))
        {
            level11();
            play();
        }
        if(inInterior(x,y,625,205,700,280))
        {
            level12();
            play();
        }
        if(inInterior(x,y,100,310,175,385))
        {
            level13();
            play();
        }
        if(inInterior(x,y,205,310,280,385))
        {
            level14();
            play();
        }
        if(inInterior(x,y,310,310,385,385))
        {
            level15();
            play();
        }
        if(inInterior(x,y,415,310,490,385))
        {
            level16();
            play();

        }
        if(inInterior(x,y,520,310,595,385))
        {
            level17();
            play();
        }
        if(inInterior(x,y,625,310,700,385))
        {
            level18();
            play();

        }
        if(inInterior(x,y,100,415,175,490))
        {
            level19();
            play();
        }
        if(inInterior(x,y,205,415,280,490))
        {
            level20();
            play();

        }
        if(inInterior(x,y,310,415,385,490))
        {
            level21();
            play();

        }
        if(inInterior(x,y,415,415,490,490))
        {
            level22();
            play();

        }
        if(inInterior(x,y,520,415,595,490))
        {
            level23();
            play();
        }
        if(inInterior(x,y,625,415,700,490))
        {
            level24();
            play();

        }
        if(inInterior(x,y,100,520,175,595))
        {
            level25();
            play();

        }
        if(inInterior(x,y,205,520,280,595))
        {
            level26();
            play();

        }
        if(inInterior(x,y,310,520,385,595))
        {
            level27();
            play();

        }
        if(inInterior(x,y,415,520,490,595))
        {
            level28();
            play();

        }
        if(inInterior(x,y,520,520,595,595))
        {
            level29();
            play();

        }
        if(inInterior(x,y,625,520,700,595))
        {
            level30();
            play();

        }


        if(inInterior(x,y,100,625,175,700))
        {
            level31();
            play();
        }
        if(inInterior(x,y,205,625,280,700))
        {
            level32();
            play();
        }
        if(inInterior(x,y,310,625,385,700))
        {
            level33();
            play();

        }
        if(inInterior(x,y,415,625,490,700))
        {
            level34();
            play();

        }
        if(inInterior(x,y,520,625,595,700))
        {
            level35();
            play();

        }
        if(inInterior(x,y,625,625,700,700))
        {
            level36();
            play();
        }

    }
    while(ok==0);


}
void menu()
{
    int x,y,ok=0;
    readimagefile("poza_menu.jpg",0,0,800,800);
    readimagefile("butonplay.jpg",500,250,640,305);
    readimagefile("butontutorial.jpg",600,320,740,375);
    readimagefile("butonexit.jpg",550,390,690,445);
    do
    {
        getmouseclick(WM_LBUTTONDOWN,x,y);
        if(inInterior(x,y,500,250,640,305))
        {
            ok=1;
            cleardevice();
            levels();
        }
        if(inInterior(x,y,600,320,740,375))
        {
            ok=1;
            cleardevice();
            tutorial();
        }
        if(inInterior(x,y,550,390,690,445))
        {
            ok=1;
            exit(1);
            return;
        }
    }
    while(ok==0);



}


int main()
{
    initwindow(800,800,"Pirates hide`n`seek");
    PlaySound(TEXT("music.mp3"), GetModuleHandle(NULL),SND_ASYNC | SND_LOOP);

    Implementare();
    menu();
    getch();
    closegraph();
    system("pause");




    return 0;
}
