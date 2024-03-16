#include <iostream>
#include <string>

class Orario {
private:
    int ore;
    int min;
    int sec;

public:
    Orario(int H, int M, int S) { scriviOra(H, M, S); }
    
    void scriviOra(int H, int M, int S) {
        if (H >= 0 && H < 24 && M >= 0 && M < 60 && S >= 0 && S < 60) {
            ore = H;
            min = M;
            sec = S;
        }
    }

    int secPassati() {
        return ore * 3600 + min * 60 + sec;
    }

    std::string stampaOrario() {
        std::string temp = "";
        if (ore < 10) temp += "0";
        temp += std::to_string(ore) + ":";
        if (min < 10) temp += "0";
        temp += std::to_string(min) + ":";
        if (sec < 10) temp += "0";
        temp += std::to_string(sec);
        return temp;
    }
};

int main() {
    
Orario ora(11, 40, 34);
std::cout << "Ore: " << ora.stampaOrario() << std::endl;

int secondi = ora.secPassati();
std::cout << "Secondi trascorsi dallla mezzanotte: " << secondi << std::endl;

return 0;
}