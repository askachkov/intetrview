#include <QtTest>

// add necessary includes here
#include "../phone/keyboard.h"
#include "../phone/keyresult.h"

class PhoneTest : public QObject
{
    Q_OBJECT

public:
    PhoneTest();
    ~PhoneTest();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case4();
    void test_case5();
};

PhoneTest::PhoneTest()
{

}

PhoneTest::~PhoneTest()
{

}

void PhoneTest::test_case1()
{
    KeyBoard keyBoard;
    KeyResult keyResult1 = keyBoard.getAllResults( {2,2,3} );
    QVERIFY( keyResult1.getResult(17).compare("bcf") == 0 );
    QVERIFY( keyResult1.totalResults() == 27 );
}

void PhoneTest::test_case2()
{
    KeyBoard keyBoard;
    KeyResult keyResult1 = keyBoard.getAllResults( {2,2,0,3} );
    QVERIFY( keyResult1.getResult(17).compare("bc f") == 0 );
    QVERIFY( keyResult1.totalResults() == 27 );
}

void PhoneTest::test_case3()
{
    //a a - d p
    //a a - d q
    //a a - d r
    //a a - d s

    //a a - e p
    //a a - e q
    //a a - e r
    //a a - e s

    KeyBoard keyBoard;
    KeyResult keyResult1 = keyBoard.getAllResults( {2,2,0,3,7} );
    QVERIFY( keyResult1.totalResults() == 108 );
    QVERIFY( keyResult1.getResult(6).compare("aa er") == 0 );
}

void PhoneTest::test_case4()
{
    KeyBoard keyBoard;
    std::string keyResult1 = keyBoard.getSingleResult( {2,2,0,3,7} );
    QVERIFY( keyResult1.compare("b dp") == 0 );
}

void PhoneTest::test_case5()
{
    KeyBoard keyBoard;
    std::string keyResult1 = keyBoard.getSingleResult( {2,2,3,3,3,0,9,9,9,9} );
    QVERIFY( keyResult1.compare("bf z") == 0 );
}


QTEST_APPLESS_MAIN(PhoneTest)

#include "tst_phonetest.moc"
