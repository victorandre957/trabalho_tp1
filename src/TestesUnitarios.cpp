#include "TestesUnitarios.hpp"

#include <stdexcept>

bool TestDominio::run(){
    setUp();
    testarCasoValido();
    testarCasoInvalido();
    tearDown();
    return estado;
};

void TestDominio::tearDown(){
    delete dominio;
    delete DADO_VALIDO;
    delete DADO_INVALIDO;
};

void TestDominio::testarCasoValido() {
    try {
        dominio->setDado(*DADO_VALIDO);
        if (dominio->getDado() != *DADO_VALIDO)
            estado = false;
    }
    catch(...) {
        estado = false;
    }
};

void TestDominio::testarCasoInvalido(){
    try {
        dominio->setDado(*DADO_INVALIDO);
        estado = false;
    }
    catch (invalid_argument &except) {
        if(dominio->getDado() == *DADO_INVALIDO)
            estado = false;
    }
};

void TestClasse::setUp() {
    DADO_VALIDO = new const string("UNIDADE");
    DADO_INVALIDO = new const string("OBJETO");
    dominio = new Classe;
    estado = true;
};

void TestCodigo::setUp() {
    DADO_VALIDO = new const string("ABC123");
    DADO_INVALIDO = new const string("A1B2C3");
    dominio = new Codigo;
    estado = true;
};

void TestMatricula::setUp() {
    DADO_VALIDO = new const string("1234567891");
    DADO_INVALIDO = new const string("1234567898");
    dominio = new Matricula;
    estado = true;
};

void TestData::setUp() {
    DADO_VALIDO = new const string("29/FEV/24");
    DADO_INVALIDO = new const string("29/FEV/23");
    dominio = new Data;
    estado = true;
};

void TestResultado::setUp() {
    DADO_VALIDO = new const string("APROVADO");
    DADO_INVALIDO = new const string("APTO");
    dominio = new Resultado;
    estado = true;
};

void TestSenha::setUp() {
    DADO_VALIDO = new const string("852741");
    DADO_INVALIDO = new const string("BB66PA");
    dominio = new Senha;
    estado = true;
};

void TestTelefone::setUp() {
    DADO_VALIDO = new const string("+99998527");
    DADO_INVALIDO = new const string("82567413");
    dominio = new Telefone;
    estado = true;
};

void TestTexto::setUp() {
    DADO_VALIDO = new const string("Isso eh um teste!");
    DADO_INVALIDO = new const string("Isso  é um teste!");
    dominio = new Texto;
    estado = true;
};
