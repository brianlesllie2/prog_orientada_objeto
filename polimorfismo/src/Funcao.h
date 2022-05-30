/*
 * Funcao.h
 *
 *  Created on: 30 de mai de 2022
 *      Author: Aluno
 */

#ifndef FUNCAO_H_
#define FUNCAO_H_

class Funcao {
public:
	Funcao(Funcao*);
	Funcao();
	virtual double operator()(double x)=0;
	double integrar(Funcao*, double x0, double x1, double step);
	virtual ~Funcao();
};

class Constante{
public:
	Constante(double val);
	virtual double operator()(double x)=0;
	virtual ~Constante();
private:
	double value;
};

class Escalar{
public:
	Escalar(double val, Funcao*);
	Escalar(double val);
	Escalar();
	virtual double operator()(double x)=0;
	virtual ~Escalar();
private:
	double value;
};

class Potencial{
public:
	Potencial(double val, Funcao*);
	Potencial(double val);
	Potencial();
	virtual double operator()(double x)=0;
	virtual ~Potencial();
private:
	double value;
};

class Exponencial{
public:
	Exponencial(double val, Funcao*);
	Exponencial(double val);
	Exponencial();
	virtual double operator()(double x)=0;
	virtual ~Exponencial();
private:
	double value;
};

class Seno{
public:
	Seno(double val, Funcao*);
	Seno(double val);
	Seno();
	virtual double operator()(double x)=0;
	virtual ~Seno();
};

class Cosseno{
	Cosseno(double val, Funcao*);
	Cosseno(double val);
	Cosseno();
	virtual double operator()(double x)=0;
	virtual ~Cosseno();
};

class FuncaoAgregada{
	void agrega(Funcao*);
	virtual double operator()(double x)=0;
	virtual ~FuncaoAgregada();
};

#endif /* FUNCAO_H_ */
