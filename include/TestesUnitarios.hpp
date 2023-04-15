#ifndef TESTSUNITARIOS_HPP
#define TESTSUNITARIOS_HPP

#include "Dominios.hpp"
#include "Entidades.hpp"

//por: Victor André 211026664 (Codificação) e Luan Guedes (Documentação)
class TestDominio {
    protected:
        bool estado;
        Dominio * dominio;
        const string * VALOR_VALIDO;
        const string * VALOR_INVALIDO;
        virtual void setUp() = 0;
        void tearDown();
        virtual void testarCasoValido();
        virtual void testarCasoInvalido();

    public:
        bool run();
};

class TestCodigo:public TestDominio{
    private:
        void setUp();
};

class TestData:public TestDominio{
    private:
        void setUp();
};

class TestMatricola:public TestDominio{
    private:
        void setUp();
};

class TestResultado:public TestDominio{
    private:
        void setUp();
};

class TestSenha:public TestDominio{
    private:
        void setUp();
};

class TestTelefone:public TestDominio{
    private:
        void setUp();
};

class TestTexto:public TestDominio{
    private:
        void setUp();
};

class TestClasse:public TestDominio{
    private:
        void setUp();
};

//por: Victor André 211026664 (Codificação) e Luan Guedes (Documentação)
class TestTeste {
private:
    Teste *teste;
    bool estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    bool run();
};

//por: Victor André 211026664 (Codificação) e Luan Guedes (Documentação)
class TestCasoDeTeste {
    private:
        CasoDeTeste *casoDeTeste;
        bool estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
    public:
        bool run();
};

//por: Victor André 211026664 (Codificação) e Luan Guedes (Documentação)
class TestDesenvolvedor {
    private:
       Desenvolvedor * desenvolvedor;
       const string * MATRICULA_VALIDA;
       const string * NOME_VALIDO;
       const string * SENHA_VALIDA;
       const string * TELEFONE_VALIDO;

       bool estado;
       void setUp();
       void testarCenarioSucesso();
       void tearDown();
    public:
        bool run();
};

#endif // TESTSUNITARIOS_HPP