#include <string>

using namespace std;

class Dominio {

    protected: 
        string formato;
        virtual void validar(string formato) = 0;

    public:
        string getFormato() const;
        void setFormato(string formato);

};

class Codigo: public Dominio {

    private:
        void validar(string);
};

class Data: public Dominio {

    private:
        static int dia, ano;
        static string mes;
        void validar(string);

    public:
        int getDia() const;
        string getMes() const;
        int getAno() const;

        void setDia(int);
        void setMes(string);
        void setAno(int);

};

class Matricula: public Dominio{

    private:
        void validar(string);
};

class Resultado: public Dominio {
    private:
        bool resultado;
};

class Senha: public Dominio {
    private:
        void validar(string);
};

class Telefone: public Dominio {
    private:
        void validar(string);
};

class Texto: public Dominio {
    private:
        void validar(string);
        bool semEspacos(string);
        bool semAcentos(string);
};