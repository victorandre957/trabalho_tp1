#include "Dominios.hpp"
#include "TestesUnitarios.hpp"

#include <iostream>

using namespace std;

int main() {
    TestClasse t_u_classe;
    cout << "Teste Unitario de Classe: ";
    if (t_u_classe.run())
        cout << "\tSUCESSO." << endl;
    else
        cout << "\tFRACASSO" << endl;

    TestCodigo t_u_codigo;
    cout << "Teste Unitario de Codigo: ";
    if (t_u_codigo.run())
        cout << "\tSUCESSO." << endl;
    else
        cout << "\tFRACASSO" << endl;

    TestData t_u_data;
    cout << "Teste Unitario de Data: ";
    if (t_u_data.run())
        cout << "\tSUCESSO." << endl;
    else
        cout << "\tFRACASSO" << endl;
    
    TestMatricula t_u_matricula;
    cout << "Teste Unitario de Matricula: ";
    if (t_u_matricula.run())
        cout << "\tSUCESSO." << endl;
    else
        cout << "\tFRACASSO" << endl;

     // TODO: chamar os testes que ainda não foram criados e após isso remover os comentários abaixo

    // TestDesenvolvedor t_u_desenvolvedor;
    // cout << "Teste Unitario de desenvolvedor: ";
    // if (t_u_desenvolvedor.run())
    //     cout << "\tSUCESSO." << endl;
    // else
    //     cout << "\tFRACASSO" << endl;
    
    // TestTeste t_u_teste;
    // cout << "Teste Unitario de teste: ";
    // if (t_u_teste.run())
    //     cout << "\tSUCESSO." << endl;
    // else
    //     cout << "\tFRACASSO" << endl;
    
    // TestCasoDeTeste t_u_caso_de_teste;
    // cout << "Teste Unitario de Caso de Teste: ";
    // if (t_u_caso_de_teste.run())
    //     cout << "\tSUCESSO." << endl;
    // else
    //     cout << "\tFRACASSO" << endl;
}
