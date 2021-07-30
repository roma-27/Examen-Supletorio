#include<iostream>
#include<string>
using namespace std;

int main()
{
	string articulos[10];
	float precios[10],suma=0,iva,des,total;
	
		
	for(int i=0;i<10;i++)
	{
			cout<<"Ingrese el nombre del articulo "<<i+1<<": "; 
			getline(cin,articulos[i]);
			cout<<"\n";
	}
	for(int i=0;i<10;i++){
		
			cout<<"Ingrese el precio del articulo "<<i+1<<": "; 
		 	cin>>precios[i];	
			cout<<"\n";
	
		suma=suma+precios[i];
		iva=suma*0.12;
		des=suma*0.10;
		total=suma+iva-des;
	}
		
	
	
	for(int i=0; i<10; i++){
		
cout<<i+1<<".- "<<articulos[i]<<"				 "<<precios[i]<<endl;
		
	}
	
cout<<"Subtotal:					"<<suma<<endl;
cout<<"IVA 12% +:					"<<iva<<endl;
cout<<"DESCUENTO 10% -:				"<<des<<endl;
cout<<"TOTAL:						"<<total<<endl;
	
	
	system("pause");
	return 0;
}

