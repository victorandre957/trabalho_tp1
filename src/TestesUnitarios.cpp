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

// TODO: colocar os demais testes de dominos aqui:

void TestDesenvolvedor::setUp() {
    desenvolvedor = new Desenvolvedor();
    MATRICULA_VALIDA = new const string("ABC123");
    NOME_VALIDO = new const string("Victor Andre");
    SENHA_VALIDA = new const string("A1B2C3");
    TELEFONE_VALIDO = new const string("61993121401");

    estado = true;
};

void TestDesenvolvedor::testarCasoSucesso() {
    try {

        Matricula matricula_teste;
        matricula_teste.setDado(*MATRICULA_VALIDA);
        desenvolvedor->setMatricula(matricula_teste);
        if (desenvolvedor->getMatricula().getDado() != *MATRICULA_VALIDA)
            estado = false;

        Texto nome_teste;
        nome_teste.setDado(*NOME_VALIDO);
        desenvolvedor->setNome(nome_teste);
        if (desenvolvedor->getNome().getDado() != *NOME_VALIDO) {
            estado = false;
        }

        Senha senha_teste;
        senha_teste.setDado(*SENHA_VALIDA);
        desenvolvedor->setSenha(senha_teste);
        if (desenvolvedor->getSenha().getDado() != *SENHA_VALIDA)
            estado = false;
        
        Telefone telefone_teste;
        telefone_teste.setDado(*TELEFONE_VALIDO);
        desenvolvedor->setTelefone(telefone_teste);
        if (desenvolvedor->getTelefone().getDado() != *TELEFONE_VALIDO)
            estado = false;

    }

    catch (...) {
        estado = false;
    }
};

void TestDesenvolvedor::tearDown() {
    delete desenvolvedor;
    delete MATRICULA_VALIDA;
    delete NOME_VALIDO;
    delete SENHA_VALIDA;
    delete TELEFONE_VALIDO;
};

void TestTeste::setUp() {
    teste = new Teste();
    CODIGO_VALIDO = new const string("ABC123");
    NOME_VALIDO = new const string("Faz acontecer");
    CLASSE_VALIDA = new const string("UNIDADE");

    estado = true;
};

void TestTeste::testarCasoSucesso() {
    try {

        Codigo codigo_teste;
        codigo_teste.setDado(*CODIGO_VALIDO);
        teste->setCodigo(codigo_teste);
        if (teste->getCodigo().getDado() != *CODIGO_VALIDO)
            estado = false;

        Texto nome_teste;
        nome_teste.setDado(*NOME_VALIDO);
        teste->setNome(nome_teste);
        if (teste->getNome().getDado() != *NOME_VALIDO) {
            estado = false;
        }

        Classe classe_teste;
        classe_teste.setDado(*CLASSE_VALIDA);
        teste->setClasse(classe_teste);
        if (teste->getClasse().getDado() != *CLASSE_VALIDA)
            estado = false;

    }

    catch (...) {
        estado = false;
    }
};

void TestTeste::tearDown() {
    delete teste;
    delete CODIGO_VALIDO;
    delete NOME_VALIDO;
    delete CLASSE_VALIDA;
};

void TestCasoDeTeste::setUp() {
    casoDeTeste = new CasoDeTeste();
    CODIGO_VALIDO = new const string("ABC123");
    NOME_VALIDO = new const string("Onde tudo funciona");
    DATA_VALIDA = new const string("25/NOV/50");
    ACAO_VALIDA = new const string("Testa coisas");
    RESPOSTA_VALIDA = new const string("Deu certo");
    RESULTADO_VALIDO = new const string("APROVADO");

    estado = true;
};

void TestCasoDeTeste::testarCasoSucesso() {
    try {

        Codigo codigo_teste;
        codigo_teste.setDado(*CODIGO_VALIDO);
        casoDeTeste->setCodigo(codigo_teste);
        if (casoDeTeste->getCodigo().getDado() != *CODIGO_VALIDO)
            estado = false;

        Texto nome_teste;
        nome_teste.setDado(*NOME_VALIDO);
        casoDeTeste->setNome(nome_teste);
        if (casoDeTeste->getNome().getDado() != *NOME_VALIDO) {
            estado = false;
        }

        Data data_teste;
        data_teste.setDado(*DATA_VALIDA);
        casoDeTeste->setData(data_teste);
        if (casoDeTeste->getData().getDado() != *DATA_VALIDA) {
            estado = false;
        }

        Texto acao_teste;
        acao_teste.setDado(*ACAO_VALIDA);
        casoDeTeste->setAcao(acao_teste);
        if (casoDeTeste->getAcao().getDado() != *ACAO_VALIDA) {
            estado = false;
        }

        Texto resposta_teste;
        resposta_teste.setDado(*RESPOSTA_VALIDA);
        casoDeTeste->setResposta(resposta_teste);
        if (casoDeTeste->getResposta().getDado() != *RESPOSTA_VALIDA) {
            estado = false;
        }

        Resultado resultado_teste;
        resultado_teste.setDado(*RESULTADO_VALIDO);
        casoDeTeste->setResultado(resultado_teste);
        if (casoDeTeste->getResultado().getDado() != *RESULTADO_VALIDO) {
            estado = false;
        }

    }

    catch (...) {
        estado = false;
    }
};

void TestCasoDeTeste::tearDown() {
    delete casoDeTeste;
    delete CODIGO_VALIDO;
    delete NOME_VALIDO;
    delete DATA_VALIDA;
    delete ACAO_VALIDA;
    delete RESPOSTA_VALIDA;
    delete RESULTADO_VALIDO;
};
