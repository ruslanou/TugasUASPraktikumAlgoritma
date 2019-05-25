#include <iostream>
#include <cctype>

using namespace std;
void daftar_file_latihan_pertemuan_x(int x, int y);

int main(){
    cout << "Kumpulan Latihan & Tugas Akhir Praktikum Algoritma" << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << endl;
    
    cout << "DAFTAR MODUL PERTEMUAN PRAKTIKUM ALGORITMA C++: " << endl;
    cout << "(1). DASAR PEMROGRAMAN C++\t(7). ARRAY" << endl;
    cout << "(2). DECISION <IF>\t\t(8). STRING" << endl;
    cout << "(3). DECISION <SWITCH>\t\t(9). POINTER" << endl;
    cout << "(4). LOOPING <FOR>\t\t(10). STRUCTURE" << endl;
    cout << "(5). LOOPING <WHILE>\t\t(11). SORTING" << endl;
    cout << "(6). FUNCTION\t\t\t(12). SEARCHING" << endl;
    
    cout << "Pilih modul pertemuan: ";
    int pilihan_menu_pertemuan;
    cin >> pilihan_menu_pertemuan;
    cout << endl << endl;
    cout << "==============================================" << endl;
    
    
    switch(pilihan_menu_pertemuan){
        case 1: {
            daftar_file_latihan_pertemuan_x(1,2);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 2: {
            daftar_file_latihan_pertemuan_x(2,3);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 3: {
            daftar_file_latihan_pertemuan_x(3,4);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 4: {
            daftar_file_latihan_pertemuan_x(4,5);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 5: {
            daftar_file_latihan_pertemuan_x(5,6);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 6: {
            daftar_file_latihan_pertemuan_x(6,7);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 7: {
            daftar_file_latihan_pertemuan_x(7,8);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 8: {
            daftar_file_latihan_pertemuan_x(8,9);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 9: {
            daftar_file_latihan_pertemuan_x(9,10);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 10: {
            daftar_file_latihan_pertemuan_x(10,11);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 11: {
            daftar_file_latihan_pertemuan_x(11,12);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        case 12: {
            daftar_file_latihan_pertemuan_x(12,13);
            cout << "Pilih file latihan: ";
            char pilihan_menu_latihan;
            cin >> pilihan_menu_latihan;
            break;
        }
        
    }
    
    
    
    
    
    return 0;
}
void daftar_file_latihan_pertemuan_x(int x, int y){
   cout << "\tDAFTAR FILE LATIHAN PERTEMUAN " << x << endl;
            cout << "==============================================" << endl;
            cout << "(A). LAT"<< y << "_1\t\t(E). LAT"<< y <<"_5" << endl;
            cout << "(B). LAT"<< y << "_2\t\t(F). LAT"<< y <<"_6" << endl;
            cout << "(C). LAT"<< y << "_3\t\t(G). LAT"<< y <<"_7" << endl;
            cout << "(D). LAT"<< y << "_3\t\t(H). TUGAS AKHIR" << endl; 
}