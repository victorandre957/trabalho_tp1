#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "Dominios.hpp"

class Desenvolvedor {
  private:
      Matricula matricula;
      Texto nome;
      Senha senha;
      Telefone telefone;
  public:
      Matricula getMatricula() const;
      void setMatricula(const Matricula&);

      Texto getNome() const;
      void setNome(const Texto&);

      Senha getSenha() const;
      void setSenha(const Senha&);

      Telefone getTelefone() const;
      void setTelefone(const Telefone&);
};

inline void Desenvolvedor::setMatricula(const Matricula &matricula) {
    this->matricula = matricula;
}

inline Matricula Desenvolvedor::getMatricula() const{
    return matricula;
}

inline void Desenvolvedor::setNome(const Texto &nome) {
    this->nome = nome;
}

inline Texto Desenvolvedor::getNome() const{
    return nome;
}

inline void Desenvolvedor::setSenha(const Senha &senha) {
    this->senha = senha;
}

inline Senha Desenvolvedor::getSenha() const{
    return senha;
}

inline void Desenvolvedor::setTelefone(const Telefone &telefone) {
    this->telefone = telefone;
}

inline Telefone Desenvolvedor::getTelefone() const{
    return telefone;
}

class Teste {
  private:
      Codigo codigo;
      Texto nome;
      Classe classe;
  public:
      Codigo getCodigo() const;
      void setCodigo(const Codigo&);

      Texto getNome() const;
      void setNome(const Texto&);

      Classe getClasse() const;
      void setClasse(const Classe&);
};

inline void Teste::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo Teste::getCodigo() const{
    return codigo;
}

inline void Teste::setNome(const Texto &nome) {
    this->nome = nome;
}

inline Texto Teste::getNome() const{
    return nome;
}

inline void Teste::setClasse(const Classe &classe) {
    this->classe = classe;
}

inline Classe Teste::getClasse() const{
    return classe;
}

class CasoDeTeste {
  private:
      Codigo codigo;
      Texto nome;
      Data data;
      Texto acao;
      Texto resposta;
      Resultado resultado;

  public:
      Codigo getCodigo() const;
      void setCodigo(const Codigo&);

      Texto getNome() const;
      void setNome(const Texto&);

      Data getData() const;
      void setData(const Data&);

      Texto getAcao() const;
      void setAcao(const Texto&);

      Texto getResposta() const;
      void setResposta(const Texto&);

      Resultado getResultado() const;
      void setResultado(const Resultado&);
};

inline void CasoDeTeste::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo CasoDeTeste::getCodigo() const{
    return codigo;
}

inline void CasoDeTeste::setNome(const Texto &nome) {
    this->nome = nome;
}

inline Texto CasoDeTeste::getNome() const{
    return nome;
}

inline void CasoDeTeste::setData(const Data &data) {
    this->data = data;
}

inline Data CasoDeTeste::getData() const{
    return data;
}

inline void CasoDeTeste::setAcao(const Texto &acao) {
    this->acao = acao;
}

inline Texto CasoDeTeste::getAcao() const{
    return acao;
}

inline void CasoDeTeste::setResposta(const Texto &resposta) {
    this->resposta = resposta;
}

inline Texto CasoDeTeste::getResposta() const{
    return resposta;
}

inline void CasoDeTeste::setResultado(const Resultado &resultado) {
    this->resultado = resultado;
}

inline Resultado CasoDeTeste::getResultado() const{
    return resultado;
}


#endif // ENTIDADES_HPP_INCLUDED