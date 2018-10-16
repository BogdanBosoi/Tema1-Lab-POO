class complex {
	double n_real, n_imaginar;

public:

	double getReal();
	double getImaginar();
	complex getNum();
	void setReal(const double);
	void setImaginar(const double);
	void setNum(const double, const double);

	friend complex operator+(complex &, complex &);
	friend complex operator-(complex &, complex &);
	friend std::istream& operator>>(std::istream&, complex&);
	friend std::ostream& operator<<(std::ostream&, complex&);
	complex operator+(complex &);
	complex operator-(complex &);
};
