#pragma once
#include <string>

/**
 * @brief ����� ������� �����.
*/
class Fraction
{
public:
	/**
	 * @brief ����������� �� ���������.
	*/
	Fraction();
	/**
	 * @brief ����������������� �����������.
	 * @param whole ����� �����.
	 * @param fract ������� �����.
	*/
	Fraction(const int whole, const int fract);
	/**
	 * @brief ����������� �����������.
	 * @param other ������ ������� �����.
	*/
	Fraction(const Fraction& other);
	/**
	*	@brief ����������.
	*/
	~Fraction();
	
	/**
	 * @brief �����, ������������ ����� ����� �����.
	 * @return ����� ����� �����.
	*/
	signed long int GetWhole() const;
	/**
	 * @brief �����, ������������ ������� ����� �����.
	 * @return ������� ����� �����.
	*/
	unsigned short int GetFract() const;

	/**
	 * @brief �����, ������������ ������� �����.
	 * @return ������� ����� � ���� ������.
	*/
	std::string GetView() const;
	
	/**
	 * @brief ��������� ��� ������� ����� � ���������� ����� ������ � ������.
	 * @param other ������������ ������� �����.
	 * @return true, ���� ����� ������.
	*/
	bool AreGreater(const Fraction& other) const;
	/**
	 * @brief �����, ������������ ������� �����.
	 * @return ������� �����.
	*/
	Fraction& GetGreater() const;
	/**
	 * @brief �����, ������������ ������� �����.
	 * @return ������� �����.
	*/
	Fraction& GetLess() const;
	
	/**
	 * @brief ��������� �� ��������� ������� �����.
	 * @param other ������������ ������� �����.
	 * @return true, ���� �����.
	*/
	bool AreEqual(const Fraction& other) const;
	/**
	 * @brief �����, ������������ ������ ������� �����.
	 * @return ������� �����.
	*/
	Fraction& GetEqual() const;

	/**
	 * @brief ����� �������� � ������ ������� ������.
	 * @param other ������ ������� �����.
	 * @return ������� �����.
	*/
	Fraction& Add(const Fraction& other) const;
	/**
	 * @brief ����� ��������� � ������ ������� ������.
	 * @param other ������ ������� �����.
	 * @return ������� �����.
	*/
	Fraction& Sub(const Fraction& other) const;
	/**
	 * @brief ����� ������� � ������ ������� ������.
	 * @param other ������ ������� �����.
	 * @return ������� �����.
	*/
	Fraction& Div(const Fraction& other) const;
	/**
	 * @brief ����� ��������� � ������ ������� ������.
	 * @param other ������ ������� �����.
	 * @return ������� �����.
	*/
	Fraction& Mul(const Fraction& other) const;

private:
	/**
	 * @brief ����� ����� �������� �����.
	*/
	signed long int Whole;
	/**
	 * @brief ������� ����� �������� �����.
	*/
	unsigned short int Fract;
};