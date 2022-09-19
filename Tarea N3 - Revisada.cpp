#include <iostream>
#include <math.h>
using namespace std;
int main() {


int total_AltoHospicio=0;
int total_camina=0;
int total_colchane=0;
int total_huara=0;
int total_iquique=0;
int total_pica=0;
int total_pozo_almonte=0;

string comunas[7] = {"Alto Hospicio","Cami?a","Colchane","Huara","Iquique","Pica","Pozo Almonte"};
//cout<<comunas[3]<<endl;	

int AltoHospicio[6] = {112142,118413,124872,131512,138319,145285};
int Camina[6] = {1293,1278,1277,1272,1268,1262};
int Colchane[6] = {1696,1688,1689,1682,1675,1671};
int Huara[6] = {2936,2943,2966,2984,2983,2991};
int Iquique[6] = {198123,199626,200897,201948,202809,203439};
int Pica[6] = {6639,6653,6650,6652,6648,6645};
int PozoAlmonte[6] = {13940,14156,14362,14562,14752,14936};


for(int i=0; i<7; i++) {
 cout<<comunas[i]<<endl;
  	if(comunas[i]=="Alto Hospicio") {
 		for(int j=0; j<5; j++) {
	        total_AltoHospicio = total_AltoHospicio + (AltoHospicio[j+1] - AltoHospicio[j]);
			cout<<total_AltoHospicio<<endl;
        }
	}
 	
}

cout<<"Alto Hospicio: " << (total_AltoHospicio / 5) << endl;
cout<<"Cami?a: " << (total_camina / 5) << endl;
cout<<"Colchane: " << (total_colchane / 5) << endl;
cout<<"Huara: " << (total_huara / 5) << endl;
cout<<"Iquique: " << (total_iquique / 5) << endl;
cout<<"Pica: " << (total_pica / 5) << endl;
cout<<"Pozo Almonte: " << (total_pozo_almonte / 5) << endl;

return 0;
}
