#include <iostream>
#include <vector>
#include "algoritmoc.cpp"
#include "funcaoc.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    int lista[50][50];
    string s;
    cin >> s;
    fstream file;
    string word;
    string line;
    int vi;
    int vf;
    cout << s + "\n";
    //file.open(s.c_str());
    file.open("bcspwr01.txt");
    if (!file.is_open())
        cout << "ficheiro nao encontrado";

    getline(file, line); //linha de comentário

    getline(file, line); //informação de vetor
    auto pos1 = line.find_first_of(" ");//encontra a primeira posição
    auto pos2 = pos1;//encontra a ultima posição, inicialização
    vi = stoi(line.substr(0, pos1));
    cout << vi; //numero de vertices
    int vert = vi;
    bool matrix[vi][vi];// matrix de vertices
    for (int i = 0; i < vi; ++i) { //preenche com 0s
        for (int j = 0; j < vi; ++j)
            matrix[i][j] = false;
    }
    while (file.peek() != EOF) {
        getline(file, line);
        pos1 = line.find_first_of(" ");//encontra a primeira posição
        pos2 = line.find_last_of(" ");//encontra a primeira posição
        vi = stoi(line.substr(0, pos1)); //primeiro valor
        line.erase(pos1, line.length());
        vf = stoi(line); //ultimo valor
        cout << line + "\n";
        matrix[vi][vf] = true; //se estiver conectado torna 1
    }
    for (int i = 0; i < vert; i++)
        std::cout << i;
    cout << "\n";
    for (int i = 0; i < vert; i++)
    {
        for (int j = 0; j < vert; j++) {
        std::cout << matrix[j][i];
         }
    cout<< "\n";}

    escreve_sol(reinterpret_cast<bool *>(matrix), vert);

    return 0;

}
