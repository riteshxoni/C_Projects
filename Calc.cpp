#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<unistd.h>

double get1();
double get2();
void quit();
using namespace std;
class stand_calc
{
    public:
    static double addition(double,double);
    static double subtraction(double,double);
    static double multiplication(double,double);
    static double division(double, double *);
    static double modulus(double *,double *);
};
class scien_calc
{
    public:
    static double square(double);
    static double cube(double);
    static double power(double,double);
    static double sq_root(double);
    static long int fact(double);
    static double sin_func(double);
    static double cos_func(double);
    static double tan_func(double);
};

//Function Definations of Standard Calculator
double stand_calc::addition(double a,double b)
{
    return a+b;
}

double stand_calc::subtraction(double a,double b)
{
    return a-b;
}

double stand_calc::multiplication(double a,double b)
{
    return a*b;
}

double stand_calc::division(double a, double *b)
{
    while(*b==0)
    {
        cout<<"\nCannot Divide By Zero";
        cout<<"\nEnter Second Number Again : ";
        cin>>*b;
    }
    return (a/(*b));
}

double stand_calc::modulus(double *a,double *b)
{
    while(*b==0)
    {
        cout<<"\nCannot Divide By Zero";
        cout<<"\nEnter Second Number Again : ";
        cin>>*b;
    }
    //Convert double to integer;
    int x = (int)*a;
    int y = (int)*b;
    return (x%y);
}

//Functon Defination of Scientific Calculator
double scien_calc::square(double x)
{
    return (pow(x,2));
}

double scien_calc::cube(double x)
{
    return (pow(x,3));
}

double scien_calc::power(double x, double y)
{
    return (pow(x,y));
}

double scien_calc::sq_root(double x)
{
    return (sqrt(x));
}

long int scien_calc::fact(double n)
{
    int x=(int)n;
    long int facto=1;
    while(x>0)
    {
        facto=facto*x;
        x=x-1;
    }
    return facto;
}

double scien_calc::sin_func(double x)
{
    return (sin(x));
}

double scien_calc::cos_func(double x)
{
    return (cos(x));
}

double scien_calc::tan_func(double x)
{
    return (tan(x));
}


int main()
{
    double n1,n2,n3;
    int ch1,ch2;
    do
    {
        system("cls");
        cout<<"\n1. > Standard Calculator";
        cout<<"\n2. > Scientific Calculator";
        cout<<"\n3. < Exit";
        cout<<"\nChoose Type of Calculator : ";
        cin>>ch1;
        if(ch1!=3 && ch1==1 || ch1==2)
        switch(ch1)
        {
            case 1:
                do
                {
                    system("cls");
                    cout<<"\n##################Standard Calculator##################";
                    cout<<"\n\t1. > Addition\n\t2. > Subtraction\n\t3. > Multiplication";
                    cout<<"\n\t4. > Division\n\t5. > Modulus\n\t6. > Return Main Menu";
                    cout<<"\n\t7. > Exit\n\tEnter Your Choice : ";
                    cin>>ch2;
                    
                    switch(ch2)
                    {
                        case 1:
                        n1=get1();
                        n2=get2();
                        n3=stand_calc::addition(n1,n2);
                        cout<<"\nAddition of "<<n1<<" + "<<n2<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;

                        case 2:
                        n1=get1();
                        n2=get2();
                        n3=stand_calc::subtraction(n1,n2);
                        cout<<"\nSubtraction of "<<n1<<" - "<<n2<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;

                        case 3:
                        n1=get1();
                        n2=get2();
                        n3=stand_calc::multiplication(n1,n2);
                        cout<<"\nMultiplication of "<<n1<<" * "<<n2<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;

                        case 4:
                        n1=get1();
                        n2=get2();
                        n3=stand_calc::division(n1,&n2);
                        cout<<"\nDivision of "<<n1<<" / "<<n2<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;

                        case 5:
                        n1=get1();
                        n2=get2();
                        n3=stand_calc::modulus(&n1,&n2);
                        cout<<"\nModulus of "<<n1<<" % "<<n2<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;

                        case 6:
                        cout<<"\nReturning to Main Menu";
                        sleep(2);
                        break;

                        case 7:
                        cout<<"\nExiting........";
                        exit(0);

                        default:
                        cout<<"\nInvalid Choice.";
                        quit();
                        sleep(1);

                    }
                }while(ch2!=6);
                break;

            case 2:
            do
            {
                system("cls");
                cout<<"\n##################Scientific Calculator##################";
                cout<<"\n\t1. > Square\n\t2. > Cube\n\t3. > Power";
                cout<<"\n\t4. > Square_root\n\t5. > Factorial\n\t6. > Sin";
                cout<<"\n\t7. > Cos\n\t8. > Tan\n\t9. > Return Main Menu\n\t10. > Exit";
                cout<<"\n\tEnter Your Choice : ";
                cin>>ch2;
                switch(ch2)
                {
                    case 1:
                        n1=get1();
                        n3=scien_calc::square(n1);
                        cout<<"\nSquare of "<<n1<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;
                    case 2:
                        n1=get1();
                        n3=scien_calc::cube(n1);
                        cout<<"\nCube of "<<n1<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;
                    case 3:
                        n1=get1();
                        n2=get2();
                        n3=scien_calc::power(n1,n2);
                        cout<<"\nPower of "<<n1<<" and "<<n2<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;
                    case 4:
                        n1=get1();
                        n3=scien_calc::sq_root(n1);
                        cout<<"\nSquare root of "<<n1<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;
                    case 5:
                        n1=get1();
                        long int result;
                        result=scien_calc::fact(n1);
                        cout<<"\nFactorial of "<<n1<<" = "<<result;
                        quit();
                        sleep(1);
                        break;
                    case 6:
                        n1=get1();
                        n3=scien_calc::sin_func(n1);
                        cout<<"\nSin of "<<n1<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;
                    case 7:
                        n1=get1();
                        n3=scien_calc::cos_func(n1);
                        cout<<"\nCos of "<<n1<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;
                    case 8:
                        n1=get1();
                        n3=scien_calc::tan_func(n1);
                        cout<<"\nTan of "<<n1<<" = "<<n3;
                        quit();
                        sleep(1);
                        break;
                    case 9:
                    cout<<"\nReturning to Main Menu";
                    sleep(2);
                    break;

                    case 10:
                    cout<<"\nExiting........";
                    exit(0);

                    default:
                    cout<<"\nInvalid Choice.";
                    quit();
                    sleep(1);
                }
            }while(ch2!=9);
            break;
            default:
                cout<<"\nInvalid Choice.";
                quit();
                sleep(1);
        }
    }while(ch1!=3);
    return 0;
}

double get1()
{
    double a;
    cout<<"\nEnter First Number : ";
    cin>>a;
    return a;
}
double get2()
{
    double b;
    cout<<"\nEnter Second Number : ";
    cin>>b;
    return b;
}

void quit()
{
    int quit;
    do
    {
    cout<<"\n\nDo Want to Continue...\n1. > Yes\n2. > No\nChoice : ";
    cin>>quit;
    if(quit == 1)
    {
        break;
    }
    if(quit==2)
    {
        exit(0);
    }
    else if(quit != 1 && quit != 2)
    {
        cout<<"\nInvalid input";
        sleep(1);
    }
    }while(true);
}