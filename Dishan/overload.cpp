#include <iostream>

class Matrix {
    int elements[2][2];
public:
    Matrix(){}
    Matrix(int m[2][2])
    {
        for(int i=0; i<2; ++i)
            for(int j=0; j<2; ++j)
                elements[i][j] = m[i][j];
    }
    Matrix operator-(Matrix &rhs)
    {
        int t[2][2]= {0};
        for(int i=0; i<2; ++i)
            for(int j=0; j<2; ++j)
                for(int k=0; k<2; ++k)
                    t[i][j] += elements[i][k] * rhs.elements[k][j];
        Matrix mat(t);
        return mat;
    }

    Matrix(Matrix& m)
    {
        for(int i=0; i<2; ++i)
            for(int j=0; j<2; ++j)
                elements[i][j] = m.elements[i][j];
    }

    void print() const{
        for(int i=0; i<2; ++i)
        {
            for(int j=0; j<2; ++j)
                std::cout << elements[i][j] << ' ';
            std::cout << std::endl;
        }
    }
};

int main()
{
    int a[2][2] = {1,0,0,1}, b[2][2] = {2,2,2,2};
    Matrix m1(a), m2(b);
    Matrix m3 = m1-m2;
    m3.print();
    return 0;

}