#include <iostream>
using namespace std;

int main (){
    int pilihan;
    string nama, alamat, pekerjaan,kewarganegaraan, pilih, ttd, wawancara, ntlp, usia, penghasilan, pernikahan, jumlah_anak, jenis, sudah, belum, CBR, PCX, input, o, persyaratan;
    balik:
    cout << "\n==============================================\n";
    cout<<"            isi formulir berikut ";
    cout << "\n=============== Tekan Enter ==================\n";
    getline(cin,o);
    cout<<"\n\nnama                     : ";
    getline(cin, nama);
    cout<<"\nalamat                   : ";
    getline(cin, alamat);
    cout<<"\nmasukkan nomor telepon   : ";
    getline(cin, ntlp);
    cout<<"\nmasukkan usia            : ";
    getline(cin, usia);
    cout<<"\npekerjaan                : ";
    getline(cin, pekerjaan);
    cout<<"\npenghasilan              : ";
    getline(cin, penghasilan);
    cout<<"\nstatus kewarganegaraan [WNI/WNA]  : ";
    getline(cin, kewarganegaraan);
    cout<<"\nstatus pernikahan [Sudah/Belum] : ";
    getline(cin, pernikahan);
    if(pernikahan=="sudah" || pernikahan == "Sudah"){
        cout<<"\nSudah menikah ";
        cout<<"\n\nberapa jumlah anak : ";

        getline(cin,jumlah_anak);
    }else if(pernikahan=="belum" || pernikahan == "Belum"){
        cout<<"belum menikah ";
    }


    cout << "\n=================================\n";
    cout << "     Pemilihan jenis cc motor ";
    cout << "\n=================================\n";
    cout << "       pilih jenis cc motor        \n\n";
    cout << "1. 150 CC HONDA CBR 150R ABS NEW\n2. 160 CC HONDA PCX 160 ABS\n";
    cout << "\npilih jenis cc motor [150/160}: ";
    getline(cin, jenis);

    if(jenis == "150"){
        cout << "\nHONDA CBR 150R ABS NEW ";
    }else if(jenis == "160"){
        cout << "HONDA PCX 160 ABS";
    }else{
        cout << "input anda salah";
    }


    cout << "\n\n=================================\n";
    cout << "     Pengajuan kredit motor ";
    cout << "\n=================================\n";

    cout << "\nApakah data diri anda sudah sesuai? [Ya/Tidak] : ";
    cin >> pilih;
    if(pilih == "ya" || pilih == "Ya"){
       cout<<"\nPersetujuan Tanda Tangan [Ya/Tidak] : ";
       cin>> ttd;
    }else{
        cout << "\nMau mengisi ulang data? [Ya/Tidak)] : ";
        cin >> input;
    }
    if(input == "ya" || input == "Ya"){
    goto balik;
    }else if(input == "tidak" || input == "Tidak" || input == "TIDAK"){
        return 0;
    }
    if(ttd == "ya" || ttd == "Ya" || ttd == "YA"){
        cout << "\nMelakukan Wawancara\n";
        cout << "\nApakah sudah sesuai persyaratan? [Ya/Tidak] : ";
        cin >> persyaratan;
    }else if(ttd == "Tidak" || ttd == "tidak" || ttd == "TIDAK"){
        cout<<"\nPengajuan Kredit Motor Gagal";
    }
    if(persyaratan == "Ya" || persyaratan == "ya" || persyaratan == "YA"){
        cout << "\nMasukkan pilihan anda : ";
    }else if(persyaratan == "Tidak" || persyaratan == "tidak" || persyaratan == "TIDAK"){
        cout<<"\nDokumen tidak memenuhi persyaratan\n";
    }


    cout << "\n\n=================================\n";
    cout << "         Daftar Angsuran ";
    cout << "\n=================================\n";
    cout << "1. HONDA CBR 150R ABS NEW"<<endl;
    cout << "2. HONDA PCX 160 ABS"<<endl;
    cout << "\nPilih Jenis Motor [1-2] : ";
    cin >> pilihan;
    
    switch(pilihan){
        case 1:
        cout << "Berikut Harga Dan Daftar Angsuran HONDA CBR 150R NEW ABS : \n"<<endl;
        cout << "Harga  : Rp. 41.720.000\n";
        cout << "Harga DP Rp. 5.400.000\n"<<endl;
        cout << "Daftar Angsuran : \n"<<endl;
        cout << "60 Bulan = Rp. 629.000\n";
        cout << "48 Bulan = Rp. 758.000\n";
        cout << "36 Bulan = Rp. 972.000\n";
        cout << "24 Bulan = Rp. 1.400.000\n";
        cout << "12 Bulan = Rp. 2.700.000\n";

    }
}