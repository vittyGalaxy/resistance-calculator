#include <iostream>

using namespace std;

string numberColor(string colore);

string multiplier(string colore);

string tolerance(string colore);

bool error(string verifica);

string tolerance(string colore) {
    string numero = "";
    if (colore == "marrone") {
        numero = " +-1";
    }
    if (colore == "rosso") {
        numero = " +-2";
    }
    if (colore == "verde") {
        numero = " +-0.5";
    }
    if (colore == "blu") {
        numero = " +-0.25";
    }
    if (colore == "viola") {
        numero = " +-0.1";
    }
    if (colore == "oro") {
        numero = " +-5";
    }
    if (colore == "argento") {
        numero = " +-10";
    }
    if (numero == "") {
        numero = "Error";
    }
    return numero;
}

string numberColor(string colore) {
    string numero = "";
    if (colore == "nero") {
        numero = "0";
    }
    if (colore == "marrone") {
        numero = "1";
    }
    if (colore == "rosso") {
        numero = "2";
    }
    if (colore == "arancione") {
        numero = "3";
    }
    if (colore == "giallo") {
        numero = "4";
    }
    if (colore == "verde") {
        numero = "5";
    }
    if (colore == "blu") {
        numero = "6";
    }
    if (colore == "viola") {
        numero = "7";
    }
    if (colore == "grigio") {
        numero = "8";
    }
    if (colore == "bianco") {
        numero = "9";
    }
    if (numero == "") {
        numero = "Error";
    }
    return numero;
}

string multiplier(string colore) {
    string numero = "";
    numero = numberColor(colore);
    if (numero != "Error"){
        numero = " x 10^" + numero;
    }
    if (colore == "oro") {
        numero = "x 10^0.1";
    }
    if (colore == "argento") {
        numero = "x 10^0.01";
    }
    if (numero == "") {
        numero = "errore";
        cout << "Error" << endl;
    }
    return numero;
}

bool error(string verifica) {
    if (verifica == "Error") {
        cout << "Error" << endl;
        return true;
    }
    return false;
}

int main() {
    //Scrivere un programma che dato in ingresso i colori, generi la sua resistività.
    string colore = "";
    string resistenza = "";
    bool verifica = false;
    cout << "E' un eseriscizio che calcola una resistenze a 4 fasce di colore" << endl;
    for (int i = 0; i < 4; i++){
        cout << "Inserisci colore" << endl;
        cin >> colore;
        switch (i){
            case 0:
                resistenza += numberColor(colore);
                verifica = error(resistenza);
                if (verifica){
                    return 0;
                }
                break;
            case 1:
                resistenza += numberColor(colore);
                verifica = error(numberColor(colore));
                if (verifica){
                    return 0;
                }
                break;
            case 2:
                resistenza += multiplier(colore);
                verifica = error(multiplier(colore));
                if (verifica){
                    return 0;
                }
                break;
            case 3:
                resistenza += tolerance(colore);
                verifica = error(tolerance(colore));
                if (verifica){
                    return 0;
                }
                break;
            default:
                cout << "Error" << endl;
                return 0;
                break;
        }

    }
    cout << resistenza << endl;
    return 0;
}




