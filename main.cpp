#include <stdio.h>
#include <list>
#include <iostream>

int main() {

	std::list<const char*> stations{
		"Tokyo","Kanda","Akihabara","Okachimachi" ,"Ueno" ,
		"Uguisudani" ,"Nippori" ,"Tabata" ,"Komagome" ,"Sugamo" ,
		"Otsuka" ,"Ikebukuro" ,"Mejiro" ,"Takadanobaba" ,"Shin-Okubo" ,
		"Shinjuku" ,"Yoyogi" ,"Harajuku" ,"Shibuya" ,"Ebisu" ,
		"Meguro" ,"Gotanda" ,"Osaki" ,"Shinagawa" ,"Tamachi" ,
		"Hamamatsucho" ,"Shimbashi" ,"Yurakucho" };


	//1970
	printf("\n1970\n");
	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	//1971 西田日暮里追加
	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = stations.insert(itr,"Nishi-Nippori");
			++itr;
		}
	}

	//2019
	printf("\n2019\n");
	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	//2020 高輪ゲートウェイ追加
	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = stations.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	//2022
	printf("\n2022\n");
	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	return 0;
}