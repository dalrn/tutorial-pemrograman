// NOMOR 3 UTS 2022/2023 (misalkan diberikan sampel data hasil nilai presentasi...)

#include <iostream>
using namespace std;

// 1) definisikan struct
struct Team {
    string namaTeam;
    string ptn;
    int presentasi;
    int proposal;
    long dana;
};

int main() {
    // 3) masukkan seluruh data ke struct
    Team teams[12] = {
        {"Lightning Core",  "UGM", 86, 89, 6100800},
        {"Revolution One",  "ITB", 87, 92, 7400400},
        {"Titans Nine",     "ITB", 96, 65, 7400200},
        {"Fantastic",       "UI",  72, 62, 7200900},
        {"Catalysts Brande","IPB", 84, 82, 7900900},
        {"Natural Glnik",   "ITS", 69, 82, 6300500},
        {"Broflakes White", "UI",  97, 84, 6300800},
        {"Immovables Big",  "IPN", 95, 98, 7300700},
        {"Tarantino Sky",   "UGM", 82, 61, 6300200},
        {"Notorious Apples","UGM", 95, 93, 7700100},
        {"Silvers Stone",   "ITS", 77, 90, 7500800},
        {"Friendship Cop",  "UI",  64, 61, 6000300}
    };

    // 2) tampilkan 5 record pertama
    cout << "LIMA DATA PERTAMA:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << teams[i].namaTeam
             << " | " << teams[i].ptn
             << " | Presentasi: " << teams[i].presentasi
             << " | Proposal: " << teams[i].proposal
             << " | Dana: " << teams[i].dana << endl;
    }

    // 3) tampilkan rata-rata nilai presentasi dan proposal
    double sumPres = 0, sumProp = 0;
    for (int i = 0; i < 12; i++) {
        sumPres += teams[i].presentasi;
        sumProp += teams[i].proposal;
    }
    double avgPres = sumPres / 12.0;
    double avgProp = sumProp / 12.0;

    cout << "\nRata-rata nilai presentasi  : " << avgPres << endl;
    cout << "Rata-rata nilai proposal    : " << avgProp << endl;

    // 4) hitung total dana semua team dari UGM
    long totalDanaUGM = 0;
    for (int i = 0; i < 12; i++) {
        if (teams[i].ptn == "UGM") {
            totalDanaUGM += teams[i].dana;
        }
    }

    cout << "\nTotal usulan dana team dari UGM: " << totalDanaUGM << endl;

    return 0;
}
