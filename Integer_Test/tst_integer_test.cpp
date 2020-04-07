#include <QtTest>

// add necessary includes here
#include "../Integer/integer.h"

class Integer_Test : public QObject
{
    Q_OBJECT

public:
    Integer_Test();
    ~Integer_Test();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
};

Integer_Test::Integer_Test()
{

}

Integer_Test::~Integer_Test()
{

}

void Integer_Test::test_case1()
{
//  Broken code below
    Integer v1(34), v2, v3;
    v2 = 46;
    v3 = (v1 + v2 - 20)*2;
    QVERIFY(v3/3 == 40);
}

void Integer_Test::test_case2()
{
//  Broken code below
    Integer v1(12), v2(10);
    QVERIFY(v1 > v2);
    QVERIFY(v1 >= v2);
    QVERIFY(v2 < v1);
    QVERIFY(v2 <= v1);
}

void Integer_Test::test_case3()
{
    Integer v1(12);
    QVERIFY(v1.toString().compare("12") == 0);
}

QTEST_APPLESS_MAIN(Integer_Test)


#include "tst_integer_test.moc"
