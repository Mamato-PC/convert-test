/*
+-------------------------------------------+
|Konversi Celsius - Fahrenheit - Kelvin     |
|                                           |
|by: Wildan Mustopa (@Mamato-PC)            |
|10/11/2023 (dd/mm/yyyy)                    |
+-------------------------------------------+

this code doesn't have error handling as of writing this comment
*/

#include <stdio.h>

// functions

int FahrtoCels(int cel){
	return 5 * (cel - 32) / 9;
}

int CelstoFahr(int fahr){
	return (fahr * 9 / 5) + 32; 
}

int FahrtoKelv(int kelv){
	return 5 * (kelv - 32) + 273;
}

int KelvtoFahr(int fahrs){
	return 5 * (fahrs - 273) + 32;
}

int CelstoKelv(int kelvs){
	return kelvs + 273;
}

int KelvtoCels(int cels){
	return cels - 273;
}

int main(){
	// variables
	int inputDerajat, pilihOpsi;
	//int KelvtoCelss, CelstoKelvs, FahrtoKelvs, KelvtoFahrs, CelstoFahrs, FahrtoCelss;
	int inputCelstoFahr, inputFahrtoCels, inputKelvtoCels, inputCelstoKelv, inputFahrtoKelv, inputKelvtoFahr;

	printf("===========================\n");
	printf("\tC - F - K\n");
	printf("===========================\n\n");
	
	printf("Mau konversi apa?\n");
	printf("[1] Celsius ke Fahrenheit\n");
	printf("[2] Fahrenheit ke Celsius\n");
	printf("[3] Celsius ke Kelvin\n");
	printf("[4] Fahrenheit ke Kelvin\n");
	printf("[5] Kelvin ke Celsius\n");
	printf("[6] Kelvin ke Fahrenheit\n\n");
	
	printf("Masukkan Angka: ");
	scanf("%d", &pilihOpsi);
	
	// initially i want to use if-else if, but using switch is way cooler
	switch(pilihOpsi){
		case 1:
			printf("Masukkan Angka (Celsius): ");
			scanf("%d", &inputCelstoFahr);
			printf("Hasil: %d Derajat Celsius adalah %d Derajat Fahrenheit", inputCelstoFahr, CelstoFahr(inputCelstoFahr));
			break;
		case 2:
			printf("Masukkan Angka (Fahrenheit): ");
			scanf("%d", &inputFahrtoCels);
			printf("Hasil: %d Derajat Fahrenheit adalah %d Derajat Celsius", inputFahrtoCels, CelstoFahr(inputFahrtoCels));
			break;
		case 3:
			printf("Masukkan Angka (Celsius): ");
			scanf("%d", &inputCelstoKelv);
			printf("Hasil: %d Derajat Celsius adalah %d Derajat Kelvin", inputCelstoKelv, CelstoKelv(inputCelstoKelv));
			break;
		case 4:
			printf("Masukkan Angka (Fahrenheit): ");
			scanf("%d", &inputFahrtoKelv);
			printf("Hasil: %d Derajat Fahrenheit adalah %d Derajat Kelvin", inputFahrtoKelv, FahrtoKelv(inputFahrtoKelv));
			break;
		case 5:
			printf("Masukkan Angka (Kelvin): ");
			scanf("%d", &inputKelvtoCels);
			printf("Hasil: %d Derajat Kelvin adalah %d Derajat Celsius", inputKelvtoCels, KelvtoCels(inputKelvtoCels));
			break;
		case 6:
			printf("Masukkan Angka (Kelvin): ");
			scanf("%d", &inputKelvtoFahr);
			printf("Hasil: %d Derajat Kelvin adalah %d Derajat Fahrenheit", inputKelvtoFahr, KelvtoFahr(inputKelvtoFahr));
			break;
		default:
			break;
	}
	
	return 0;
}