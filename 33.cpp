#include<iostream.h>
  
int main()
{
	int i, x;bool ketemu;
	int A[5];
	cout << "Masukan data pada array ="<<endl;
	for(i=0;i<5;i++){
		cout <<"A["<<i<<"]="; 
		cin>>A[i];
	}
	
	i=0 ; ketemu = false;
	cout<<"Masukan Bilangan Yang Dicari = ";
	cin>> x;
	while ((i<5) && (!ketemu))
	{
		if(A[i]==x)
		{
			ketemu = true;
		} else
		{
			i++;
		}
	}
	if (ketemu)
	{
		cout<< x << "  Berada di indexs ke-" << i;
	}else {
		cout<<"Data tidak ditemukan";
	}
	return 0;
}