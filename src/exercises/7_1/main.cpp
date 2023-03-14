#include <iostream>
#include <string>
#include <vector>
#include <sstream>

/**
 * Page 138, ex.7.1
 * Арифметичні вирази з константами, знаками операцій (+, -,
 * або /) і дужками опишемо так:
 * а) дійсна константа є арифметичним виразом;
 * б) якщо E та F – арифметичні вирази, то (E+F), (E-F), (E*F),
 * (E/F) – також вирази;
 * в) інших виразів, окрім утворених за правилами пп. а) та б),
 * не існує. Написати програму, що за введеним із клавіатури
 * арифметичним виразом виводить його значення.
 */

using namespace std;

class MathParser {
private:
    double number();

    double expr();

    double factor();

    double hooks();

    stringstream m_expr_stream;

public:
    double calc(string str_expr)
    {
        m_expr_stream = stringstream(str_expr);
        return expr();
    }
};

double MathParser::number() {
    int res = 0;
    for (;;) {
        char c = m_expr_stream.get();
        if (c >= '0' && c <= '9')
            res = res * 10 + c - '0';
        else {
            m_expr_stream.putback(c);
            return res;
        }
    }
}

double MathParser::hooks()
{
    char c = m_expr_stream.get();
    if (c == '(')
    {
        double x = expr();
        m_expr_stream.get();
        return x;
    } else {
        m_expr_stream.putback(c);
        return number();
    }
}

double MathParser::factor()
{
    double x = hooks();
    for (;;) {
        char c = m_expr_stream.get();
        switch (c) {
            case '*':
                x *= hooks();
                break;
            case '/':
                x /= hooks();
                break;
            default:
                m_expr_stream.putback(c);
                return x;
        }
    }
}

double MathParser::expr()
{
    double x = factor();
    for (;;) {
        char c = m_expr_stream.get();
        switch (c)
        {
            case '+':
                x += factor();
                break;
            case '-':
                x -= factor();
                break;
            default:
                m_expr_stream.putback(c);
                return x;
        }
    }
}

int main()
{
    string expr = "(2+2)*2/2";

    MathParser p;
    double res = p.calc(expr);

    cout << expr << " = " << res;
    cout << endl;

    system("pause");
    return 0;
}
