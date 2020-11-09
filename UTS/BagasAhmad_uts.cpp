#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>

    //nama  : BAGAS AHMAD SADEWA
    //nim   : 20051204016
    //kelas : TIB 

using namespace std;
int main(){
    //inisialisasi variabel global
    int menu,score,daftar;
    int kesempatan=3;
    int tebakan = kesempatan;
    string user,psw,userLogin,pswLogin;
    //welcome display
    cout<<"=========================================\n";
    cout<<"     Hello welcome to my Quiz & Game\n";
    cout<<"=========================================\n\n";
    //daftar akun
    cout<<" [1] Sign Up\n";
    cout<<" [2] Login\n";
    cout<<" Jika belum punya akun silahkan sign up: ";
    cin>> daftar;
    switch(daftar){
        case 1:
        cout<<"          =====> Sign Up <====\n";
        cout<<"Masukkan Username : ";
        cin>>user;
        cout<<"Masukkan Password : ";
        cin>>psw;
        cout<<" > Selamat akun anda telah terdaftar <\n";
        //tanpa break, karena setelah sign up langsung login
        case 2:{
        cout<<"           =====> Login <====\n";
        int i=1,login=0;
        do{
            cout<<"Masukkan Username : ";
            cin>>userLogin;
            cout<<"Masukkan Password : ";
            cin>>pswLogin;
            if(userLogin == user && pswLogin == psw){
        cout<<"       ---> Anda Berhasil Login <---\n";
                i=4;
                login=1;
            }else{
        cout<<"           ---> Login gagal <---\n";
                i=i+1;
            }
        }
        while(i<=3); //jika sudah salah 3x maka akan menjalankan while
        if(login != 1){
            cout<<"- Anda sudah GAGAL login 3x , DIBLOKIR\n";
            cout<<"- Silahan keluar dan daftar lagi ya..\n";
                return 0;
            }
        break;
        }
        default:
            cout<<"Salah Masukkan Pilihan"<<endl; return 0;
    }


    char kembaliMenu='y';
    while(kembaliMenu=='y'){
    bool menang = false;
    //menu utamanya
    cout<<"=========================================\n";
    cout<<"              Quizz & Game\n";
    cout<<"=========================================\n";
    cout<<"  MENU :\n";
    cout<<" [1] Quizz Ezpz Tebak Angka \n";
    cout<<" [2] Quizz Goks \n";
    cout<<" [3] Become a Cashier Mart \n";
    cout<<" [4] Become a Teacher \n";
    cout<<"-----------------------------------------\n";
    cout<<" Hai "<<user<<"  have fun ya..\n";
    cout<<" Pilih menu nomor : ";
    cin>> menu;

    switch(menu){
        case 1:{
        //inisialisasi var case 1
        int jawaban,jawab;
        srand(time(NULL)); //merandom jawaban dari 0-15
        jawaban = rand()%16;
        int kesempatan=10;
        int tebakan = kesempatan;
        score=100;
        cout<<"-----------------------------------------\n";
        cout<<"       [+]  Quizz Easy pi zi  [+]\n";
        cout<<"--------- Tebak angka dulu yuk ----------\n";
        cout<<"- Silahkan tebak angka dari 0 sampai 15 -\n";
        cout<<"-----------------------------------------\n";
        do{
            cout<<"Tebakan "<<user<< " apa : ";
            cin>>jawab;
            tebakan--;
            if(jawab == jawaban){
                menang = true;
                cout<<"Tebakanmu BENAR, wah... "<<user<<" hebat sekali\n";
                score = score;
            }
            else{
                score=score-2;
                if(jawab < jawaban){
                    cout<<"Tebakanmu terlalu kecil ya..\n";
                    cout<<"Kesempatanmu tinggal "<<tebakan<<" kali lagi\n";
                }else{
                    cout<<"Tebakanmu terlalu besar ya..\n";
                    cout<<"Kesempatanmu tinggal "<<tebakan<<" kali lagi\n";
                }
            }
            cout<<endl;
        }
        while((tebakan>0) && (!menang)); //jika sudah 10x salah atau tidak menang maka akan menjalankan while
        if(menang){  //jika berhasil menebak
            cout<<"Selamat anda telah memenangkan game ini\n";
            cout<<"Score : "<<score<<endl;
        }
        else{  //jika salah menebak
            cout<<"Maaf tebakanmu salah semua\n";
            cout<<"Angka yang ditebak itu adalah "<<jawaban<<endl;
            cout<<user<<" semangat ya ";
            cout<<"score kamu : "<<score<<endl;
        }
        cout<<endl<<endl;
        break;
        }

        case 2:{
        //soal ke 1
        string isian;
        cout<<"-----------------------------------------\n";
        cout<<"          [+]  Quizz Goks  [+]\n";
        cout<<"----------- Tebak receh yuk -------------\n";
        cout<<" Hai "<<user<<", langsung diketik ya\n";
        cout<<"-----------------------------------------\n";
        do{
            cout<<"1.Hewan apa ya yang banyak keahlian ?\n";
            cout<<" > Jawaban anda : ";
            cin>> isian;
            tebakan--;
            if(isian == "kukang"){
                 cout<<"Waw anda menjawab dengan benar ";
                 menang=true;
            }
            else
            {
                cout<<"Salah\n";
                cout<<"Clue : ...service, ...tambal ban\n";
            }cout<<endl;
        }
        while((tebakan>0) && (!menang));
        if(menang){
            cout<<" Selamat anda menebak dengan benar\n";
            score=100;
        }
        else{
            cout<<"Maaf tebakan anda salah semua ya\n";
            cout<<"Seharusnya anda menjawab kukang\n";
            score=0;
        }
        cout<<"Score sementara : "<<score;
        cout<<endl<<endl;

        //soal ke 2
        kesempatan=3;
        tebakan = kesempatan;
        menang = false;
        do{
            cout<<"2.Kalau sedang sendiri, kakinya ada empat, kalau berdua, kakinya jadi ada delapan. Siapakah aku? \n";
            cout<<" > Jawaban anda : ";
            cin>> isian;
            tebakan--;
            if(isian == "kursi"){
                 cout<<"Waw anda menjawab dengan benar ";
                 menang=true;
            }
            else
            {
                cout<<"Salah \n";
                cout<<"Clue : duduk\n";
            }cout<<endl;
        }
        while((tebakan>0) && (!menang));
        if(menang){
            cout<<" Selamat anda menebak dengan benar";
            score=score+100;
        }
        else{
            cout<<"Maaf tebakan anda salah semua ya\n";
            cout<<"Seharusnya anda menjawab kursi\n";
            score=0;
        }
        cout<<"Score sementara : "<<score;
        cout<<endl<<endl;

        //soal ke 3
        kesempatan=3;
        tebakan = kesempatan;
        menang = false;
        do{
            cout<<"3.Telor apa yang di injak ngga pecah ?\n";
            cout<<" > Jawaban anda : ";
            cin>> isian;
            tebakan--;
            if(isian == "telortoar"){
                 cout<<"Waw anda menjawab dengan benar ";
                 menang=true;
            }
            else
            {
                cout<<"Salah \n";
                cout<<"Clue : jalan kaki\n";
            }cout<<endl;
        }
        while((tebakan>0) && (!menang));
        if(menang){
            cout<<" Selamat anda menebak dengan benar\n";
            score=score+100;
        }
        else{
            cout<<"Maaf tebakan anda salah semua ya\n";
            cout<<"Seharusnya anda menjawab telortoar\n";
            score=0;
        }
        cout<<user<<" selamat ya..";
        cout<<"Scoremu adalah "<<score<<endl;
        cout<<endl<<endl;
        break;
        }

        case 3:{
            int n;
            float h,ht,total=0,banyak,disc,semua;
            char lagi='y';
            string b1;
            while(lagi == 'y'){
                cout<<"-----------------------------------------\n";
                cout<<"          Become a Cashier Mart\n";
                cout<<"Hi, "<<user<<" kamu sekarang menjadi kasir\n";
                cout<<"-----------------------------------------\n";
                cout<<"Banyak produk yang dibeli: ";
                cin>>n;
                for(int i=1; i<=n; i++){
                    cout<<"[+] Barang ke-"<<i<<" = ";
                    cin>>b1;
                    cout<<" $ Harga   Rp  ";
                    cin>>h;
                    cout<<" ~ Banyaknya : ";
                    cin>>banyak;
                    ht=h*banyak;
                    total=total+ht;

                }
                cout<<" % Diskon        : ";
                cin>>disc;
                semua=(disc/100)*total;
                semua=total-semua;
                cout<<"Total belanjaan  : Rp "<<semua<<",00\n";
                cout<<"Ingin Berbelanja lagi (y/n)? ";
                cin>>lagi;
                cout<<endl;
            }
        cout<<"------ Terimakasih sudah berbelanja -----\n";
        break;
        }

        case 4:{
            int n ;
            float nilai,max,min,jml,average;
            char lagi='y';
            string siswa;
            while(lagi == 'y'){
                jml=0;
                cout<<"-----------------------------------------\n";
                cout<<"             Become a Teacher\n";
                cout<<"-----------------------------------------\n";
                cout<<"Hai "<<user<<" kamu menjadi guru nya ya\n";
                cout<<"Tugas mu adalah menghitung nilai siswa untuk dimasukkan rapor range nilai (0-100)\n";
                cout<<" [#] Kamu akan menghitung berapa nilai : ";
                cin >> n;
                cout<<" [#] Nama Depan Siswa : ";
                cin>>siswa;
                for(int i=1; i<=n; i++){
                    cout<<" [+] Input nilai ke "<<i<<" = ";
                    cin >> nilai;
                    cout<<endl;
                    if(i==1){
                        max = nilai;
                        min = nilai;
                    }else if(nilai<min){
                        min = nilai;
                    }else if(nilai>max){
                        max = nilai;
                    }
                    jml=jml+nilai;
                }
                average=jml/n;
                cout<<"---- HASIL PERHITUNGAN ----\n";
                cout<<"Nilai Max     : "<<max<<endl;
                cout<<"Nilai Min     : "<<min<<endl;
                cout<<"Nilai rata2   : "<<average<<endl;
                cout<<"Total         : "<<jml<<"\n\n";
                cout<<"Dengan nilai rata-rata "<<siswa<<" yaitu "<<average;
                if(average>=70){
                    cout<<" ,dan dinyatakan Naik Kelas\n";
                    cout<<"Selamat ya.."<<siswa<<endl;
                }  
                else{
                    cout<<" ,dan dinyatakan Mengulang Lagi\n";
                    cout<<"Jangan putus asa ya "<<siswa<<" kamu bisa kok lulus tahun depan\n";
                }
                cout<<"Ingin menghitung lagi (y/n)? ";
                cin >>lagi;
                cout<<endl;
                }
                break;
                }
        default :
        cout<<"Pilih menu 1 sampai 4 ya "<<user<<endl;
    }
    cout<<" Kembali ke menu utama (y/n)";
    cin>>kembaliMenu;
    }
    cout<<"\n   Terimakasih ya "<<user<<endl;
    cout<<"-----------------------------------------\n";
    return 0;
}
