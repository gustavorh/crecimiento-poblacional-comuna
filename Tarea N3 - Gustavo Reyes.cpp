#include <iostream>

using namespace std;
int main() {
	int crecimiento_altohospicio = 0, crecimiento_camina = 0, crecimiento_colchane = 0, crecimiento_huara = 0, crecimiento_iquique = 0, crecimiento_pica = 0, crecimiento_pozoalmonte = 0;
	int poblacion_2015[7] = {112142, 1293, 1696, 2936, 198123, 6639, 13940};
	int poblacion_2016[7] = {118413, 1278, 1688, 2943, 199629, 6653, 14156};
	int poblacion_2017[7] = {124872, 1277, 1689, 2966, 200897, 6650, 14361};
	int poblacion_2018[7] = {131512, 1272, 1682, 2984, 201948, 6652, 14562};
	int poblacion_2019[7] = {138319, 1268, 1675, 2983, 202809, 6648, 14752};
	int poblacion_2020[7] = {145285, 1262, 1671, 2991, 203429, 6645, 14936};
	string comunas[7] = {"ALTO HOSPICIO", "CAMINA", "COLCHANE", "HUARA", "IQUIQUE", "PICA", "POZO ALMONTE"};
	
	for (int i = 0; i <= 6; i++) {
		if (comunas[i] == "ALTO HOSPICIO") {
			for (int j = 0; j <= 0; j++) {
				// (2016 - 2015) + (2017 - 2016) + (2018 - 2017) + (2019 - 2018) + (2020 - 2019)
				crecimiento_altohospicio = ((poblacion_2016[j] - poblacion_2015[j]) + (poblacion_2017[j] - poblacion_2016[j]) + (poblacion_2018[j] - poblacion_2017[j]) + (poblacion_2019[j] - poblacion_2018[j]) + (poblacion_2020[j] - poblacion_2019[j])) / 5;
			}
		}
		if (comunas[i] == "CAMINA") {
			for (int j = 0; j <= 1; j++) {
				crecimiento_camina = ((poblacion_2016[j] - poblacion_2015[j]) + (poblacion_2017[j] - poblacion_2016[j]) + (poblacion_2018[j] - poblacion_2017[j]) + (poblacion_2019[j] - poblacion_2018[j]) + (poblacion_2020[j] - poblacion_2019[j])) / 5;
			}
		}
		if (comunas[i] == "COLCHANE") {
			for (int j = 0; j <= 2; j++) {
				crecimiento_colchane = ((poblacion_2016[j] - poblacion_2015[j]) + (poblacion_2017[j] - poblacion_2016[j]) + (poblacion_2018[j] - poblacion_2017[j]) + (poblacion_2019[j] - poblacion_2018[j]) + (poblacion_2020[j] - poblacion_2019[j])) / 5;
			}
		}
		if (comunas[i] == "HUARA") {
			for (int j = 0; j <= 3; j++) {
				crecimiento_huara = ((poblacion_2016[j] - poblacion_2015[j]) + (poblacion_2017[j] - poblacion_2016[j]) + (poblacion_2018[j] - poblacion_2017[j]) + (poblacion_2019[j] - poblacion_2018[j]) + (poblacion_2020[j] - poblacion_2019[j])) / 5;
			}
		}
		if (comunas[i] == "IQUIQUE") {
			for (int j = 0; j <= 4; j++) {
				crecimiento_iquique = ((poblacion_2016[j] - poblacion_2015[j]) + (poblacion_2017[j] - poblacion_2016[j]) + (poblacion_2018[j] - poblacion_2017[j]) + (poblacion_2019[j] - poblacion_2018[j]) + (poblacion_2020[j] - poblacion_2019[j])) / 5;
			}
		}
		if (comunas[i] == "PICA") {
			for (int j = 0; j <= 5; j++) {
				crecimiento_pica = ((poblacion_2016[j] - poblacion_2015[j]) + (poblacion_2017[j] - poblacion_2016[j]) + (poblacion_2018[j] - poblacion_2017[j]) + (poblacion_2019[j] - poblacion_2018[j]) + (poblacion_2020[j] - poblacion_2019[j])) / 5;
			}
		}
		if (comunas[i] == "POZO ALMONTE") {
			for (int j = 0; j <= 6; j++) {
				crecimiento_pozoalmonte = ((poblacion_2016[j] - poblacion_2015[j]) + (poblacion_2017[j] - poblacion_2016[j]) + (poblacion_2018[j] - poblacion_2017[j]) + (poblacion_2019[j] - poblacion_2018[j]) + (poblacion_2020[j] - poblacion_2019[j])) / 5;
			}
		}
	}
	cout << "El promedio de crecimiento de ALTO HOSPICIO es: " << crecimiento_altohospicio << endl;
	cout << "El promedio de crecimiento de CAMIÑA es: " << crecimiento_camina << endl;
	cout << "El promedio de crecimiento de COLCHANE es: " << crecimiento_colchane << endl;
	cout << "El promedio de crecimiento de HUARA es: " << crecimiento_huara << endl;
	cout << "El promedio de crecimiento de IQUIQUE es: " << crecimiento_iquique << endl;
	cout << "El promedio de crecimiento de PICA es: " << crecimiento_pica << endl;
	cout << "El promedio de crecimiento de POZO ALMONTE es: " << crecimiento_pozoalmonte << endl;
	
	return 0;
}
