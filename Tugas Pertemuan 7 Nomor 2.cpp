#include<iostream>
using namespace std;
double konversi(double, double);
float konversi(float, float);
int konversi(int, int);

double konversi (double C, double F)
{
    cout<<" ";
    cin>>F;
    return ( C = ( F - 32.0) * 5/9 );
}
float konversi (float C, float F)
{
    cout<<" ";
    cin>>F;
    return ( C = ( F - 32.0) * 5/9 );
}
int konversi (int C, int F)
{
    cout<<" ";
    cin>>F;
    return ( C = ( F - 32.0) * 5/9 );
}
int main()
{
    cout<<"Hasil konversi dari F ke C ( double ) = "<<konversi(0.0, 0.0)<<endl;
    cout<<"Hasil konversi dari F ke C ( float )= "<<konversi(0.0, 0.0)<<endl;
    cout<<"Hasil konversi dari F ke C ( int )= "<<konversi(0, 0)<<endl;
    return 0;
}
