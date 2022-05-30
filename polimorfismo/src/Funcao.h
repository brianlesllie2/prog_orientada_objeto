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
	double operator()(double x);
	double integrar(Funcao*, double x0, double x1, double step);
};

class Constante{
public:
	Constante(double val);
	double operator()(double x);
private:
	double	value;
};

class Escalar{
public:
	Escalar(double val, Funcao*);
	Escalar(double val);
	Escalar();
	double operator()(double x);
private:
	double value;
};

class Potencial{
public:
	Potencial(double val, Funcao*);
	Potencial(double val);
	Potencial();
	double operator()(double x);
private:
	double value;
};

class Exponencial{
public:
	Exponencial(double val, Funcao*);
	Exponencial(double val);
	Exponencial();
	double operator()(double x);
private:
	double value;
};

class Seno{
public:
	Seno(double val, Funcao*);
	Seno(double val);
	Seno();
	double operator()(double x);
};

class Cosseno{
	Cosseno(double val, Funcao*);
	Cosseno(double val);
	Cosseno();
	double operator()(double x);
};

class FuncaoAgregada{
	void agrega(Funcao*);
	double operator()(double x);
};

#endif /* FUNCAO_H_ */
