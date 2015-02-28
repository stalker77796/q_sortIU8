/** \file q_sort.cpp */
#include <iostream>
#include <ctime>
using namespace std;
/// func_q_sort
void quicksort(int *mas, int first, int last)
{
	/// advertisement middle and auxiliary value  at reshuffle
int mid, count;  
int f=first, l=last;
mid=mas[(f+l) / 2]; ///calculating a reference elementа
do
{
while (mas[f]<mid) f++;
while (mas[l]>mid) l--;
if (f<=l) ///manual implementation swap 
{
count=mas[f];
mas[f]=mas[l];
mas[l]=count;
f++;
l--;
}
} while (f<l);
if (first<l) quicksort(mas, first, l);
if (f<last) quicksort(mas, f, last);
}
/// func_int main ()
void main()
{
	/// redistribution on Russian
	setlocale(LC_ALL,"Rus");
	std::cout <<"Пожалуйста введите размерность массива";
	int n;
	std::cin>>n;
int *A=new int[n];
srand(time(NULL));
cout<<"Исходный массив: "<<endl;
for (int i=0; i<n; i++)
{
A[i]=rand()%10;
cout<<A[i]<<" "<<' ';
}
cout<<endl;
 int first=0; int last=n-1;
quicksort(A, first, last);
cout<<endl<<"Результирующий массив: ";
for (int i=0; i<n; i++) cout<<A[i]<<" "<<' ';
delete []A;
system("pause>>void");
}