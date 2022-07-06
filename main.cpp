/* Dateiname: main.cpp:

AD Praktikum 3 - SOSE22
Gruppe: 21
Jonas Pardeyke - 11142973
Nik Tykhomyrov - 11134921

Enthält das Hauptprogramm laut Aufgabenstellung
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "TE.h"
#include "GEOKO.h"
#include "POOL.h"

using namespace std;

POOL* pool;

//MAIN
int main (){
    cout.precision(2);

    cout << "---------------Sortier-Programm---------------" << endl;
    cout << endl;
    cout << "1) Daten einlesen und POOL-Objekt erstellen" << endl;
    cout << endl;
    cout << "2) Liste sortieren mit \"Heap Sort\"" << endl;
    cout << endl;
    cout << "3) Liste sortieren mit \"Bubble Sort\"" << endl;
    cout << endl;
    cout << "4) Daten der Liste schreiben" << endl;
    cout << endl;
    cout << "5) Baumstruktur pruefen" << endl;
    cout << endl;
    cout << "6) Ende" << endl;
    cout << endl;

    //verfahren wird ausgewählt
    string wahl;
    cin >> wahl;
    if(wahl=="1"){

        //Bei 1.) soll ein bereits existierendes "POOL"-Objekt erst entfernt werden.

        cout << endl;
        cout << "Wie viele Eintraege soll der Baum maximal haben?" << endl;

        long anzahl;
        cin >> anzahl;


        //erstelle POOL Objekt
        POOL* pool = new POOL(anzahl);


        cout << endl;
        cout << "Bitte geben Sie den Namen Ihrer .csv Datei an (Beispiel: Daten1.csv):" << endl;

        string filename = "Daten1.csv";
        //cin >> filename;
        cout << endl;

        ifstream stream;

        stream.open(filename);

        if(stream.fail()){
                cout << "Datei konnte nicht geoeffnet werden" << endl;
        }

        for(int i=1; i<=anzahl; i++){
            string LG;
            string BG;

            string line;
            getline(stream, line);
            stringstream ss(line);
            int k = 1;
            while(getline(ss, line, ',')){
                if (k % 2) {
                    LG = line;
                    //cout << "LG " << i << ": " << LG << endl;
                } else{
                    BG = line;
                    //cout << "BG " << i << ": " << BG << endl;
                    //cout << endl;
                    double dLG = atof(LG.c_str());
                    double dBG = atof(BG.c_str());

                    GEOKO* geoko = new GEOKO(dLG, dBG);

                    pool->addElement(geoko);

                }
                k++;
            }
        }
        pool->showMitte();

    } else if (wahl=="2"){

    } else if (wahl=="3"){

    } else if (wahl=="4"){

    } else if (wahl=="5"){


    } else if (wahl == "6"){
        cout << endl;
        cout << "Programm beendet" << endl;
        exit(0);

    } else{   //bei nicht Eingabe von 1 oder 2 wird neugestartet
        cout << endl;
        cout << "RESTART" << endl;
        main();

    }

    main();
    return 0;

}

