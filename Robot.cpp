// NAMA		: Yoga Firman Syahputra
// NRP		: 5025221212
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SIN90 1 //sudut elevasi tembakan

int mencari_V0(int Vtang, int speed_loss)
{
	/* Tulis fungsi mencari v0 kalian disini */
  	return (Vtang - speed_loss); 
}

int speed_dgn_loss(int speed_loss)
{
	/* tulis fungsi hitung_loss kalian disini */
	if (speed_loss>=1 && speed_loss<=10){
		speed_loss = 1;
	}
	else if (speed_loss>=11 && speed_loss<=20){
	    speed_loss = 3;
    }
	else if (speed_loss>=21 && speed_loss<=30){
		speed_loss = 5;
    }
    return speed_loss;
}

int main() {
    /* tulis kode utama kalian disini */
    	int Vtang;
    	int jarak;
    	double v0;
    	int speed_loss;
    	double kecepatan_awal;
  	/* input adalah kecepatan tangensial maksimum roller */
  	/* std::cin >> input */
    std::cin >> Vtang;
    speed_loss = speed_dgn_loss (Vtang);
    v0 = mencari_V0 (Vtang, speed_loss);
    jarak = ((v0 * v0) * SIN90) / GRAVITASI;
    kecepatan_awal =  sqrt(jarak * GRAVITASI) + speed_loss;
  	/* std::cout << jarak << " " << kecepatan tangensial << std::endl */
  	std::cout << jarak << " " << kecepatan_awal << std::endl;
    return 0;
}